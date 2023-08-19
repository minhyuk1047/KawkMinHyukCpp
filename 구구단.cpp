#include <iostream>
using namespace std;

void main()
{
	// 1. ±¸±¸´Ü
	// 
	// 1 x 1 = 1
	// 1 x 2 = 2
	// .
	// 9 x 9 = 9
	// 

	//for (int i = 1; i < 9; i++)
	//{
	//	for (int j = 1; j < 9; j++)
	//	{
	//		cout << i << " x " << j << " = " << i * j << endl;
	//	}
	//	cout << endl;
	//}
	// 
	// 1 x 1 = 1	2 x 1 = 2		3 x 1 = 3	
	// 1 x 2 = 2	2 x 2 = 4		3 x 2 = 6
	// 1 x 3 = 3	2 x 3 = 6		3 x 3 = 9
	// 

	for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= 3; j++)
		{
			cout << j << " x " << i << " = " << i * j << "\t";

		}
		cout << endl;
	}

	cout << endl;
	for (int i = 1; i <= 9; i++)
	{
		for (int j = 4; j <= 6; j++)
		{
			cout << j << " x " << i << " = " << i * j << "\t";

		}
		cout << endl;
	}

	cout << endl;
	for (int i = 1; i <= 9; i++)
	{
		for (int j = 7; j <= 9; j++)
		{
			cout << j << " x " << i << " = " << i * j << "\t";

		}
		cout << endl;
	}
}
