#include<iostream>
#include"impfunc.h"
using namespace std;

int main()
{
	int choice = 0;
	cout << "__________________________________________" << endl;
	cout << "String Manipulation | String Length       " << endl;
	cout << "(Enter 1)           | String Concatenation" << endl;
	cout << "                    | String Copy         " << endl;
	cout << "                    | String Edit         " << endl;
	cout << "__________________________________________" << endl;
	cout << "Calculator          | Addition            " << endl;
	cout << "(Enter 2)           | Subtraction         " << endl;
	cout << "                    | Multiplication      " << endl;
	cout << "                    | Division            " << endl;
	cout << "                    | Power               " << endl;
	cout << "__________________________________________" << endl;
	cout << "Sorting an Array    | Bubble Sort         " << endl;
	cout << "(Enter 3)           | Insertion sort      " << endl;
	cout << "                    | Selection Sort      " << endl;
	cout << "__________________________________________" << endl;
	cout << "Searching in Array  | Linear Search       " << endl;
	cout << "(Enter 4)           | Binary Search       " << endl;
	cout << "__________________________________________" << endl;

	cout << "Enter your choice for the task:" << endl;
	cin >> choice;

	while (choice != 5)
	{
		if (choice == 1)
		{
			cout << "String Length" << endl;
			char arr[100] = {};
			cout << "Enter your string:" << endl;
			cin.ignore();
			cin.getline(arr, sizeof(arr));
			strlength(arr, 100);
			cout << endl;

			cout << "String Concatenation" << endl;
			char ar1[50] = {};
			char ar2[50] = {};

			int s1 = 0;
			int s2 = 0;

			cout << "Enter the size of first string:" << endl;
			cin >> s1;
			cout << "Enter the size of second string:" << endl;
			cin >> s2;

			cout << "Enter the first string:" << endl;
			for (int i = 0; i < s1; i++)
			{
				cin >> ar1[i];
			}
			cout << "Enter the second string:" << endl;
			for (int i = 0; i < s2; i++)
			{
				cin >> ar2[i];
			}
			strconc(ar1,s1, ar2,s2);
			cout << endl;

			cout << "String Copy" << endl;
			char arr1[100] = {};
			cout << "Enter first string:" << endl;
			cin.ignore();
			cin.getline(arr1, sizeof(arr1));
			char arr2[100] = "empty";
			cout << "The second string is:" << arr2 << endl;
			strcopy(arr1, arr2, 100);
			cout << endl;

			cout << "String Edit" << endl;
			char arrn[100] = {};
			char old, rep;
			cout << "Enter your string:" << endl;
			cin.getline(arrn, sizeof(arrn));
			cout << "Enter the character you want to remove:" << endl;
			cin >> old;
			cout << "Enter the character you want to insert:" << endl;
			cin >> rep;
			stredit(arrn, old, rep, 100);

		}
		if (choice == 2)
		{
			double n1 = 0, n2 = 0;
			cout << "Enter two numbers:";
			cin >> n1;
			cin >> n2;

			addfunc(n1, n2);
			subfunc(n1, n2);
			multfunc(n1, n2);
			divfunc(n1, n2);
			powfunc(n1, n2);
		}

		if (choice == 3)
		{
			int arr[50] = {};
			int s = 0;
			cout << "Enter the size of array:" << endl;
			cin >> s;
			cout << "Enter your array:" << endl;
			for (int i = 0; i < s; i++)
			{
				cin >> arr[i];
			}
			bubbsort(arr, s);
			insersort(arr, s);
			selectsort(arr, s);
		}
		if (choice == 4)
		{
			int key;
			int arr[50] = {};
			int s = 0;
			cout << "Enter the size of array:" << endl;
			cin >> s;
			cout << "Enter a sorted array:" << endl;
			for (int i = 0; i < s; i++)
			{
				cin >> arr[i];
			}
			cout << "Enter the number you want to search" << endl;
			cin >> key;
			cout << "By linear search:" << endl;
			linsearch(arr, s, key);
			cout << "By binary search:" << endl;
			int res = binsearch(arr, s, key);
			if (res >= 0)
			{
				cout << "The element is found at index number " << res << endl;
			}

			else
				cout << "Element is not found" << endl;

		}
		cout << "__________________________________________" << endl;
		cout << "String Manipulation | String Length       " << endl;
		cout << "(Enter 1)           | String Concatenation" << endl;
		cout << "                    | String Copy         " << endl;
		cout << "                    | String Edit         " << endl;
		cout << "__________________________________________" << endl;
		cout << "Calculator          | Addition            " << endl;
		cout << "(Enter 2)           | Subtraction         " << endl;
		cout << "                    | Multiplication      " << endl;
		cout << "                    | Division            " << endl;
		cout << "                    | Power               " << endl;
		cout << "__________________________________________" << endl;
		cout << "Sorting an Array    | Bubble Sort         " << endl;
		cout << "(Enter 3)           | Insertion sort      " << endl;
		cout << "                    | Selection Sort      " << endl;
		cout << "__________________________________________" << endl;
		cout << "Searching in Array  | Linear Search       " << endl;
		cout << "(Enter 4)           | Binary Search       " << endl;
		cout << "__________________________________________" << endl;

		cout << "Enter your choice for the task:" << endl;
		cin >> choice;

	}


	system("pause");
	return 0;
}