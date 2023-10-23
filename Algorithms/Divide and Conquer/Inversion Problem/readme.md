## The Inversion Problem as an Example of Divide and Conquer
The Inversion Problem is defined as counting how many swaps (inversions) are needed in order to sort an array. In other words, how sorted or unsorted an array is. With inversions we can also see how many swaps or differences are there between two objects, such as a list.  By counting the number of inversions, it takes to make one list match the other. The higher the inversion count the more different those two lists are. 

Note that the Inversion problem counts the number of swaps between two consecutive elements.
- { 1, 20, 6 } - has one inversion between the 20 and 6.
- { 6, 4, 5 } - has two inversions, as we need to swap the 6 and 4 then the 6 and 5.

If our array is in reverse order, then every number would need to be swapped. 
- {3, 2, 1} - has 3 swaps 
- {4, 3, 2, 1} - has 5 swaps 

In fact, the max number of inversions of any array is n * (n-1) / 2. 

### Definition of the problem 
- Given two indices i and j and an array A of length n 
- Inversion happens when i < j but A[i] > A[j]
- How many inversions are in an array? 

### Brute force method
If we check all possible pairs of i and j it would take O(n^2) time. Which is not acceptable for longer arrays.  

### Modified Merge Sort     
We can calculate the number of inversions by using a modified merge sort. Counting the number of times we have to sort one number before another. Giving us a time of Ο(n log n), much better for longer arrays. 

Here is a simple example: 
```
Given the array { 1, 20, 6, 4, 5 }
```

Recursively divide both arrays, for our list there are 4 levels of recursion
```
Level 0)			{ 1, 20, 6, 4, 5 } 
Level 1)		{ 1, 20, 6 } 	{ 4, 5 } 
Level 2)	{ 1, 20 }	{ 6 } { 4 }  { 5 }
Level 3) { 1 }	{ 20 }	
```				

Combine sub arrays back together, count the inversions and return the sorted array. 
Here we use indexes i and j to indicate which values in the lists we are looking at. 
```
Level 3)
  i       j  
{ 1 }	{ 20 }	// Inversion happens when i < j but A[i] > A[j]. i and j = 1 and 1 < 20, no inversion.
	{ 1, 20 }   // move the 1 then 20 into the sorted array, return { 1, 20 }


Level 2)
  i           j
{ 1, 20 } 	{ 6 }	 // 1 < 6, no inversion, move 1 into sorted array and advance i. 
	{ 1, 

	 i        j
{ 1, 20 } 	{ 6 }	// 20 > 6, this is an inversion. We have to swap the 20 and 6. 
   { 1, 6  			// move 6 into the sorted array. Inversions = 1.
   { 1, 6, 20 		// move the 20 into the sorted array and advance j 
   { 1, 6, 20 }     // we are at the end of a list, return { 1, 6, 20 }

  i       j
{ 4 } 	{ 5 }	// 4 < 5, no inversion
 { 4,    		// move 4 into the sorted list, advance i  
 { 4, 5 }  		// we are at the end of the left array, append remaining elements from the right array and return.  


Level 1) 
  i               j 
{ 1, 6, 20 } 	{ 4, 5 }	// 1 < 6, no inversion, move 1 into sorted array and advance i. 
	{1, 

     i            j 
{ 1, 6, 20 } 	{ 4, 5 }	// 6 > 4, this is an inversion, move 4 into sorted array and advance j. 
	{1, 4					// However Inversions = 3 not 2, because when we move the 4 into the sorted array we skipped over
							// the 6 and 20.  It’s as if we swapped the 20 and 4, then the 4 and 6 

     i               j
{ 1, 6, 20 } 	{ 4, 5 }	// 6 > 5, this is an inversion, move 5 into sorted array and advance j. 
	{ 1, 4, 5				// Inversions = 5, because we are swapping the 20 and 5 then the 6 and 5.  
	{ 1, 4, 5, 6, 20 }		// we are at the end of the right array, append remaining elements from the left array and return.  
```
Sorted array: { 1, 4, 5, 6, 20 } with 5 inversions, (6, 20), (20, 4), (6, 4), (20, 5), (6, 5

### Pseudo Code
```
procedure mergeInversionCnt( var AList as array )
	if ( n == 1 ) return A

	var a as array = AList[0] ... AList[n/2]
	var b as array = AList[n/2+1] ... AList[n]

	aCnt, aSorted = sortCnt( a )
	bCnt, bSorted = sortCnt( b )

	AListCnt, AListSorted = mergeInversionCnt(aSorted, bSorted)

	inversionTotal = aCnt + bCnt + AListCnt

   return = inversionTotal, AListSorted
end procedure

procedure sortCnt( var a as array, var b as array )

	var c as empty array
	inversionCnt = 0

	//indexes for 
	i = 0
	j = 0

    while ( a and b have elements )
      if ( a[0] > b[0] )
         add b[0] to the end of c
		 inversionCnt = inversionCnt + length of a
		 remove b[0] from b 
      else
         add a[0] to the end of c
		 remove a[0] from a 
      end if
   end while

   while ( a has elements )
      add a[0] to the end of c
      remove a[0] from a
   end while

   while ( b has elements )
      add b[0] to the end of c
      remove b[0] from b
   end while

   return inversionCnt, c
end procedure
```

### Proving Time Complexity 
To prove the time complexity of our inversion counter we can use formula for Divide and Conquer algorithms. 

```
 T(n) = aT(n/b) + f(n)
    
    where,
        n = size of input 
        a = 2, we divide our array in half and solve them first, so our number of subproblems is 2 
    	n/b = n/2, we divide our array in half each time we recurse
        f(n) = n, we still have to iterate though the list to check it and then combine the two halfs together.  

 T(n) = 2T(n/2) + n


```