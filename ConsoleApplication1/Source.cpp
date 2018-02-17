#include <iostream>
#include<ctime>
using namespace std;

void sortL(int ar[], int size);
void print(int ar[], int size);

//void main()
//{
//	const int size = 10;
//	int ar[size]{ 2,5,1,3,7,6,9,10,8,4 };
//	print(ar, size);
//	sortB(ar, size);
//	print(ar, size);
//}
//void sortB(int ar[], int size)
//{
//	for (int s = 0; s < size - 1; s++)
//	{
//		bool flag = false;
//		int val;
//		for (int i = 0; i < size - 1 - s; i++)
//		{
//			if (ar[i] > ar[i + 1])
//			{
//				val = ar[i+1];
//				ar[i + 1] = ar[i];
//				ar[i] = val;
//				flag = true;
//			}
//		}
//		if (flag == false)
//			break;
//	}
//}
//void print(int ar[], int size)
//{
//	for (int i = 0; i < size; i++)
//		cout << ar[i] << " ";
//	cout << "\n\n";
//}

//void main()
//{
//	const int size = 10;
//	int ar[size]{ 2,5,1,3,7,6,9,10,8,4 };
//	print(ar, size);
//	sortB(ar, size);
//	print(ar, size);
//}
//void sortB(int ar[], int size)
//{
//	for (int s = 0; s < size - 1; s++)
//	{
//		bool flag = false;
//		int val;
//		for (int i = size-1; i > s; i--)
//		{
//			if (ar[i] > ar[i - 1])
//			{
//				val = ar[i-1];
//				ar[i - 1] = ar[i];
//				ar[i] = val;
//				flag = true;
//			}
//		}
//		if (flag == false)
//			s = size - 1;
//	}
//}
//void print(int ar[], int size)
//{
//	for (int i = 0; i < size; i++)
//		cout << ar[i] << " ";
//	cout << "\n\n";
//}


void main()
{
	const int size = 10;
	int ar[size]{ 2,5,1,3,7,6,9,10,8,4 };
	print(ar, size);
	sortL(ar, size);
	print(ar, size);
}
void sortL(int ar[], int size)
{
	for (int i = 1; i < size; i++)
	{
		int key = ar[i],j=i-1;
		while (j >= 0 && key < ar[j])
		{
          ar[j + 1]= ar[j];
			j--;
		}
		ar[j + 1] = key;
	}
}
void print(int ar[], int size)
{
	for (int i = 0; i < size; i++)
		cout << ar[i] << " ";
	cout << "\n\n";
}
