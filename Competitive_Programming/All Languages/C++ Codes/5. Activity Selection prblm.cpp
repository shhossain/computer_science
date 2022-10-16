/*
Activity Selection Problem
You are given n activities with their start and finish times. Select the maximum number of activities that can be performed by a single person, assuming that a person can only work on a single activity at a time.

Example:

    Consider the following 6 activities. 
         start[]  =  {1, 3, 0, 5, 8, 5};
         finish[] =  {2, 4, 6, 7, 9, 9};
    The maximum set of activities that can be executed 
    by a single person is {0, 1, 3, 4}
The greedy choice is to always pick the next activity whose finish time is least among the remaining activities and the start time is more than or equal to the finish time of previously selected activity. We can sort the activities according to their finishing time so that we always consider the next activity as minimum finishing time activity.

Sort the activities according to their finishing time
Select the first activity from the sorted array and print it.
Do following for remaining activities in the sorted array.
…….a) If the start time of this activity is greater than the finish time of previously selected activity then select this activity and print it.

*/

   // Prints a maximum set of activities that can be done by a single
        // person, one at a time.
        //  n   -->  Total number of activities
        //  s[] -->  An array that contains start time of all activities
        //  f[] -->  An array that contains finish time of all activities ( sorted ) 
        void printMaxActivities(int s[], int f[], int n)
        {
            int i, j;
         
            printf ("Following activities are selected \n");
         
            // The first activity always gets selected
            i = 0;
            printf("%d ", i);
         
            // Consider rest of the activities
            for (j = 1; j < n; j++)
            {
              // If this activity has start time greater than or equal to the finish
              // time of previously selected activity, then select it
              if (s[j] >= f[i])
              {
              printf ("%d ", j);
              i = j;
              }
            }
        }
     
// code 2--
struct Activitiy 
{ 
	int start, finish; 
}; 

bool activityCompare(Activitiy s1, Activitiy s2) 
{ 
	return (s1.finish < s2.finish); 
} 

void printMaxActivities(Activitiy arr[], int n) 
{ 
	
	sort(arr, arr+n, activityCompare); 

	cout << "Following activities are selected n"; 

	int i = 0; 
	cout << "(" << arr[i].start << ", " << arr[i].finish << "), "; 
	for (int j = 1; j < n; j++) 
	{ 

	if (arr[j].start >= arr[i].finish) 
	{ 
		cout << "(" << arr[j].start << ", "		<< arr[j].finish << "), "; 
		i = j; 
	} 
	} 
} 
