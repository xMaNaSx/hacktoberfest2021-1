//Problem Statement
//Given an array of n distinct elements. Find the minimum number of swaps
//required to sort the array in strictly increasing order.
//Example-Input:
//nums = {2, 8, 5, 4}
//Output:
//1
//Explaination:
//swap 8 with 4.
//Time Complexity: O(n Log n)
//Auxiliary Space: O(n)

#include <iostream>
using namespace std;
#include <bits/stdc++.h>
// THIS Function returns the
// minimum number of swaps
// required to sort the array
int count_no_of_min_swaps(int array[], int n)
{ // Create an array of
	// pairs where first
	// element is array element
	// and second element
	// is position of first element
	pair<int, int> pos[n];
	int no_of_swaps = 0;
	for (int i = 0; i < n; i++)
	{
		pos[i].first = array[i];
		pos[i].second = i;
	}

	// Sort the array by array
	// element values to
	// get right position of
	// every element as second
	// element of pair.
	sort(pos, pos + n);
	// To keep track of visited elements.
	// Initialize visited as 0 first .
	vector<int> visited(n, 0);
	for (int i = 0; i < n; i++)
	{
		if (visited[i] == 1 || pos[i].second == i)
			continue;
		int j = i;
		int cycle_size = 0;

		// find out the number of  node in
		// this cycle and add in ans
		while (visited[j] != 1)
		{
			visited[j] = 1;
			j = pos[j].second;
			cycle_size++;
		}
		if (cycle_size > 0)
			no_of_swaps += (cycle_size - 1);
	}
	return no_of_swaps;
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	int array[n];
	for (int i = 0; i < n; i++)
	{
		cin >> array[i];
	}
	cout << count_no_of_min_swaps(array, n);

	return 0;
}
