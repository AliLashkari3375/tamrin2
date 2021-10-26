// print snake.cpp : This file contains the 'main' function. Program execution begins and ends there.
////Ali lashkri

#include <iostream>

using namespace std;

int main()
{
	int n;
	cout << "Enter the length of the snake:";
	cin >> n;
	
	for (int i = 0; i < n; i++)
	{
		cout << "*#";
	}
	cout << "D";
}//Ali lashkri