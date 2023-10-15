#pragma once
#include<iostream>
using namespace std;
//String Manipulation
void strlength(char arr[], int size)
{
	int count = 0;
	for (int i = 0; arr[i] != 0; i++)
	{
		count++;
	}

	cout << "The string length is: " << count << endl;

}
void strconc(char arr1[], int s1, char arr2[], int s2)
{
	char arr3[50] = {};
	int s3 = s1 + s2;
	for (int i = 0; i < s3; i++)
	{
		if (i >= 0 && i < s1)
		{
			arr3[i] = arr1[i];
		}
		else
		{
			arr3[i] = arr2[i - s1];
		}

	}
	cout << "The concatenated string is: ";
	for (int i = 0; i < s3; i++)
	{
		cout << arr3[i];
	}
	cout << endl;
	
}
void strcopy(char arr1[], char arr2[], int size)
{
	for (int i = 0; i < size; i++)
	{
		arr2[i] = arr1[i];
	}
	cout << "The first string is: ";
	for (int i = 0; i < size; i++)
	{
		cout<<arr1[i];
	}
	cout << endl;
	cout << "The second string after copying is: ";
	for (int i = 0; i < size; i++)
	{
		cout << arr2[i];
	}
	cout << endl;
}
void stredit(char arr[],char p,char n,int size)
{
	int i = 0;
	for (i = 0; i < size; i++)
	{
		if (arr[i] == p)
		{
			arr[i] = n;
		}
	}
	cout << "The edited string is: ";
	for (i = 0; i < size; i++)
	{
		cout << arr[i];
	}
	cout << endl;
}
//Calculator
void addfunc(double n1, double n2)
{
	cout << "The sum of " <<n1<<" and "<<n2<<" is : " << n1 + n2 << endl;
}
void subfunc(double n1, double n2)
{
	cout << "The difference of " << n1 << " and " << n2 << " is : " << n1 - n2 << endl;
}
void multfunc(double n1, double n2)
{
	cout << "The product of " << n1 << " and " << n2 << " is : " << n1 * n2 << endl;
}
void divfunc(double n1, double n2)
{
	cout << "The quotient of " << n1 << " and " << n2 << " is : " << n1 / n2 << endl;
}
void powfunc(double n1, double n2)
{
	double pro = 1;
	for (int i = 1; i <= n2; i++)
	{
		pro = pro * n1;
	}
	cout << n1 << " raised to the power " << n2 << " is : " << pro << endl;
}
//Sorting in Array
void bubbsort(int arr[], int size)
{
	int i=0,j=0,temp = 0;
	for (i = 0; i < size-1; i++)
	{
		for (j = i; j < size - 1; j++)
		{
			if (arr[i] > arr[i + 1])
			{
				temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
			}
		}
	}
	cout << "After bubble sorting, the array becomes: ";
	for (i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
void insersort(int arr[], int size)
{
	int i = 0;
	for (i = 1; i < size; i++)
	{
		int key = arr[i];
		int j = i - 1;
		while (arr[j] > key && j >= 0)
		{
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = key;
	}
	cout << "After insertion sorting, the array becomes: ";
	for (i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
void selectsort(int arr[], int size)
{
	int i = 0;
	for (i = 0; i < size; i++)
	{
		int min = arr[i];
		int idx = i;
		for (int j = i + 1; j < size; j++)
		{
			if (min > arr[j])
			{
				min = arr[j];
				idx = j;
			}
		}
		int temp = arr[i];
		arr[i] = arr[idx];
		arr[idx] = temp;
	}
	cout << "After selection sorting, the array becomes: ";
	for (i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
//Searching in an Array
void linsearch(int arr[], int size, int key)
{
	int i = 0;
	bool flag = false;
	for (i = 0; i < size; i++)
	{
		if (arr[i] == key)
		{
			cout << "Number is found at index number " << i << endl;
			flag = true;
		}

	}
	if (flag == false)
	{
		cout << "Number is not found" << endl;
	}


}
int binsearch(int arr[], int size, int key)
{
	int s = 0;
	int e = size - 1;
	

	while (s <= e)
	{
		int mid = (s + e) / 2;
		if (arr[mid] == key)
			return mid;
		else if (arr[mid] < key)
			s = mid + 1;
		else
			e = mid - 1;

	}
	return -1;
}
