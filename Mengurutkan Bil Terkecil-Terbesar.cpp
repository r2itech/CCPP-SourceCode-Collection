#include <iostream>
#include <conio.h>
#include <windows.h>
void setcolor (unsigned short color)
{
	HANDLE hConsoleOutput=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsoleOutput, color);
}
using namespace std;
int main()
{
	int data[5];
	int i, j, tmp;
	setcolor (9);
	cout << "<<<Program Mengurutkan Angka dari Yang Terkecil hingga Yang Terbesar>>>" <<endl;
	setcolor (10);
	for (i=0; i<5; i++)
	{
		cout << "Masukan Angka ke " <<(i+1) << " : ";
		cin >> data [i];
	}
	cout << "Data sebelum diurutkan : " << endl;
	for (i=0; i<5; i++)
	{
		cout << data [i] << " ";
	}
	cout << endl;
	for (i=0; i<9; i++)
	{
		for (j=i+1; j<5; j++)
		{
			if (data [i] > data [j])
			{
			tmp = data [i];
			data [i] = data [j];
			data [j] = tmp;
			}
		}
	}
	cout << "Data Setelah diurutkan : " << endl;
	for (i=0; i<5; i++)
	{
		cout << data [i] << " ";
	}
	getch(); cout << endl;
	main ();
}
