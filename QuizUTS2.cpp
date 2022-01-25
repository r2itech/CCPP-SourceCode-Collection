#include <iostream>
#include <windows.h>
void setcolor (unsigned short color)
{
	HANDLE hConsoleOutput=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsoleOutput, color);
} 
using namespace std;
int main()
{
	setcolor (10);
	cout << "===PROGRAM MENENTUKAN JENIS SEGITIGA=== \n";
	setcolor (11);
	float s1, s2, s3;
	cout << "Masukkan sisi ke-1: "; cin >> s1;
	cout << "Masukkan sisi ke-2: "; cin >> s2;
	cout << "Masukkan sisi ke-3: "; cin >> s3;
	setcolor (14);
	if (s1==s2==s3)
	{
		cout << "SAMA SISI";
	}
	else if (s1==s2 && s1==s3 && s2==s3)
	{
		cout << "SAMA KAKI";
	}
	else
	{
		cout << "SEMBARANG";
	}
}
