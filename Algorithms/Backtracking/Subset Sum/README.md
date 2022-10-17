# Subset Sum

Subset sum problem is to find subset of elements that are selected from a given set whose sum adds up to a given number K. We are considering the set contains non-negative values. It is assumed that the input set is unique (no duplicates are presented).

## Problem Statement : 
Using exhaustive search we consider all subsets irrespective of whether they satisfy given constraints or not. Backtracking can be used to make a systematic consideration of the elements to be selected.
Assume given set of 4 elements, say w[1] … w[4]. Tree diagrams can be used to design backtracking algorithms. The following tree diagram depicts approach of generating variable sized tuple.


![subsetSum_Backtracking](https://user-images.githubusercontent.com/114204175/196039563-a66cf580-c994-4c65-87ed-04ba94867f1d.jpg)

## Steps : 
In the above tree, a node represents function call and a branch represents candidate element. The root node contains 4 children. In other words, root considers every element of the set as different branch. The next level sub-trees correspond to the subsets that includes the parent node. The branches at each level represent tuple element to be considered. For example, if we are at level 1, tuple_vector[1] can take any value of four branches generated. If we are at level 2 of left most node, tuple_vector[2] can take any value of three branches generated, and so on…

For example the left most child of root generates all those subsets that include w[1]. Similarly the second child of root generates all those subsets that includes w[2] and excludes w[1].

As we go down along depth of tree we add elements so far, and if the added sum is satisfying explicit constraints, we will continue to generate child nodes further. Whenever the constraints are not met, we stop further generation of sub-trees of that node, and backtrack to previous node to explore the nodes not yet explored. In many scenarios, it saves considerable amount of processing time.

The tree should trigger a clue to implement the backtracking algorithm (try yourself). It prints all those subsets whose sum add up to given number. We need to explore the nodes along the breadth and depth of the tree. Generating nodes along breadth is controlled by loop and nodes along the depth are generated using recursion (post order traversal).

## Code Solution : 
```
#include <bits/stdc++.h>
using namespace std;

#define ARRAYSIZE(a) (sizeof(a))/(sizeof(a[0]))
static int total_nodes;

// prints subset found
void printSubset(int A[], int size)
{
	for(int i = 0; i < size; i++)
	{
		cout<<" "<< A[i];
	}
	cout<<"\n";
}

// qsort compare function
int comparator(const void *pLhs, const void *pRhs)
{
	int *lhs = (int *)pLhs;
	int *rhs = (int *)pRhs;
	return *lhs > *rhs;
}
void subset_sum(int s[], int t[],
				int s_size, int t_size,
				int sum, int ite,
				int const target_sum)
{
	total_nodes++;

	if( target_sum == sum )
	{
		printSubset(t, t_size);

		// constraint check
		if( ite + 1 < s_size && sum - s[ite] + s[ite + 1] <= target_sum )
		{
			subset_sum(s, t, s_size, t_size - 1, sum - s[ite], ite + 1, target_sum);
		}
		return;
	}
	else
	{
	
		if( ite < s_size && sum + s[ite] <= target_sum )
		{
		
			// generate nodes along the breadth
			for( int i = ite; i < s_size; i++ )
			{
				t[t_size] = s[i];
				if( sum + s[i] <= target_sum )
				{
				
					// consider next level node (along depth)
					subset_sum(s, t, s_size, t_size + 1, sum + s[i], i + 1, target_sum);
				}
			}
		}
	}
}

void generateSubsets(int s[], int size, int target_sum)
{
	int *tuplet_vector = (int *)malloc(size * sizeof(int));
	int total = 0;

	// sort the set
	qsort(s, size, sizeof(int), &comparator);
	for( int i = 0; i < size; i++ )
	{
		total += s[i];
	}
	if( s[0] <= target_sum && total >= target_sum )
	{
		subset_sum(s, tuplet_vector, size, 0, 0, 0, target_sum);
	}
	free(tuplet_vector);
}

int main()
{
	int weights[] = {15, 22, 14, 26, 32, 9, 16, 8};
	int target = 53;
	int size = ARRAYSIZE(weights);
	generateSubsets(weights, size, target);
	cout << "Nodes generated " << total_nodes;
	return 0;
}
```

## Output : 
```
8 9 14 22n 8 14 15 16n 15 16 22 nNodes generated 68
```
