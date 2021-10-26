// rand fill array.cpp : This file contains the 'main' function. Program execution begins and ends there.
////Ali lashakri
#include <iostream>

using namespace std;

int main()
{
	int array[50];
	int b;

	cout << "Enter number: ";
	cin >> b;

	srand(time(0));

	for (int i = 0; i < b; i++)
	{
		array[i] = rand() % 100;
	}

	for (int i = 0; i < b; i++)
	{
		cout << "element number " << i + 1 << " is " << array[i] << "\n";
	}

	return 0;
}//Ali lashakri