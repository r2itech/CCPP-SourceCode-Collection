#include <iostream>
#include <windows.h>
void setcolor (unsigned short color)
{
	HANDLE hConsoleOutput=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute (hConsoleOutput, color);
}
using namespace std;
int main ()
{
	float A,B,C,D;
	setcolor (13);
	cout << "masukkan bil 1 : "; cin >> A;
	setcolor (10);
	cout << "masukkan bil 2 : "; cin >> B;
	setcolor (11);
	cout << "masukkan bil 3 : "; cin >> C;
	setcolor (12);
	cout << "masukkan bil 4 : "; cin >> D;
	if (A>B)
	{
		if (A>C)
		{
			if (A>D)
			{
				setcolor (13);
				cout <<A;
			}
			else
			{
				setcolor (12);
				cout <<D;
			}
			
		}
		else 
		{
			
			if (C>D)
			{
				setcolor (11);
				cout << C;
			}
			else
			{
				setcolor (12);
				cout << D;
			}
			
		}
	}
	else
	{
		if (B>C)
		{
			
			if (B>D)
			{
				setcolor (10);
				cout << B;
			}
			else
			{
				setcolor (12);
				cout << D;
			}
		}
		else
		{
			if (C>D)
			{
				setcolor (11);
				cout << C;
			}
			else
			{
				setcolor (12);
				cout << D;
			}
		}
	}
}
