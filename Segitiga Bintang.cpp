#include <iostream>
#include <windows.h>
#include <string.h>
void setcolor (unsigned short color)
{
	HANDLE hConsoleOutput=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsoleOutput, color);
}
using namespace std;
int main ()
{
	setcolor (10);
	int N, I, J;
	cout << "Masukan jumlah baris N : ";
	cin >> N;
	for (I=1; I<=N; I++)
	{
		for (J=1; J<=I; J++)
		{
		cout << J;
		}
		cout << endl;
	}

}
