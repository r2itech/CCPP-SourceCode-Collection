#include <iostream>
#include <windows.h>
#include <conio.h>
void setcolor (unsigned short color)
{
	HANDLE hConsoleOutput=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsoleOutput, color);
}
using namespace std;
int main()
{
	float A, B, X, Y;
	setcolor (14);
	cout << "Masukkan A: "; cin >> A;
	setcolor (11);
	cout << "Masukkan B: "; cin >> B;
	X=A;
	Y=B;
	while (X!=Y)
	{
		if (X<Y)
		{
			X=X+A;
		}
		else
		{
			Y=Y+B;
		}
	}
	setcolor (10);
		cout << "X= " << X;
	getch();
}
