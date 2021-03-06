#include "pch.h"
#include <iostream>
#include <vector>
#include <ctime>

using namespace std;

void Reverse(vector<int> &arr) 
{
	for (int i = 0; i < 5; i++) 
	{
		int t;
		t = arr[i];
		arr[i] = arr[9 - i];
		arr[9 - i] = t;
	}
}

void BigOrEq(vector<int> &arr) 
{
	for (int i = 0; i < 10; i++)
		for (int j = i; j < 10; j++)
			if (arr[j] < arr[i]) 
			{
				int t;
				t = arr[j];
				arr[j] = arr[i];
				arr[i] = t;
			}
}

void SmalOrEq(vector<int> &arr)
{
	for (int i = 0; i < 10; i++)
		for (int j = i; j < 10; j++)
			if (arr[j] > arr[i]) 
			{
				int t;
				t = arr[j];
				arr[j] = arr[i];
				arr[i] = t;
			}
}

void(*Function(vector<int> &arr))(vector<int> &arr) 
{
	int sum = 0;
	for (int i = 0; i < 10; i++)
		sum += arr[i];
	if (sum == arr[0])
		return Reverse;
	else if (sum > arr[0])
		return BigOrEq;
	else
		return SmalOrEq;
}

int main()
{
	vector<int> arr;
	srand(time(0));
	cout << "Creating array: " << endl;
	for (int i = 0; i < 10; i++) {
		arr.push_back(rand());
		cout << arr[i] << ' ';
	}
	cout << endl;
	Function(arr)(arr);
	cout << "Result: " << endl;
	for (int i = 0; i < 10; i++)
		cout << arr[i] << ' ';
	cout << endl;
	system("pause");
}