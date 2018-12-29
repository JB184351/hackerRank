#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
		// Creating and initialising a vector of ints 
	    vector <int> arr;
		arr.push_back(256741038);
		arr.push_back(623958417);
		arr.push_back(467905213);
		arr.push_back(714532089);
		arr.push_back(938071625);
		
		// Creating a vector that will have the sorted items
	    vector <int> sorted;
		long minSum = 0;
		long maxSum = 0;

		int n = arr.size();
		
		//sorted = arr;
		
		// Sorted the vector passed in into the sorted vector
		for (int i = 0; i < n; i++)
		{
			(sort(arr.begin(), arr.end()));
			sorted.push_back(arr[i]);
		}
		
		// Calculating the minimum sum
		for (int i = 0; i < arr.size() - 1; i++)
			minSum += arr[i];
		
		// Calculating the maximum sum
		for (int i = 1; i < arr.size(); i++)
			maxSum += arr[i];
		
		// Displaying the maximum sum
		cout << minSum << ' ' << maxSum;
}