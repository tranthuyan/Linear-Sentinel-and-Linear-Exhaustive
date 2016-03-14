// La la la.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <conio.h>

int LinearSentinel(int a[], int n, int x);
int LinearExhaustive(int a[], int n, int x);

int _tmain(int argc, _TCHAR* argv[])
{
	int n = 5;
	int a [5] = {1, 25, 5, 2, 37};
	int x = 6;

	printf("\nLinearExhaustive");
	int kq1 = LinearExhaustive (a, n, x);
	if(kq1 = -1)
		printf("\n Mang khong ton tai gia tri can tim.");
	else
		printf("\n Gia tri can tim nam o vi tri thu %d trong mang.", kq1 + 1);


	printf("\n\n\nLinearSentinel");
	int kq2 = LinearSentinel (a, n, x);
	if(kq2 = n)
		printf("\n Mang khong ton tai gia tri can tim.");
	else
		printf("\n Gia tri can tim nam o vi tri thu %d trong mang.", kq2 + 1);
	getch();
	return 0;
}

int LinearExhaustive(int a[], int n, int x)
{
     for(int i=0; i<n; i++)
          if(a[i] == x)
               return i;
     return -1;
}

int LinearSentinel(int a[], int n, int x)
{
     a[n] = x;
     for(int i = 0; ;i++)
         if (a[i] == x)
             return i;
}