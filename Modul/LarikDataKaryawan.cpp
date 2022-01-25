#include <stdio.h>
#include <string.h>
#include <iostream>
#include <windows.h>
void setcolor(unsigned short color)
{
	HANDLE hConsoleOutput=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsoleOutput, color);
}
using namespace std;
int main()
{
	string name;
	cout << "Nama: "; getline(cin, name); cout << name <<"\n";
	setcolor(11);
	int i, n;
	char nama[50], ttl[50], jabatan[50], gol[50];
	float gajih[50];
	
	printf ("Masukkan jumlah data: "); scanf("%d", &n);
	for(i=1; i<=n; i++)
	{
		printf ("Data ke-%d", i); printf (":\n");
		printf (""); gets(nama);
		printf ("Nama	: "); gets(nama);
		printf ("TTL	: "); gets(ttl);
		printf ("Jabatan	: "); gets(jabatan);
		printf ("Gajih	: "); scanf ("%f", &gajih[i]);
        if (gajih[i]>2000000)
		{
			gol[i]='B';
		}
		else if (gajih[i]<=2000000)
		{
			gol[i]='A';
		}
		printf ("Golongan: %c", gol[i]);
		printf ("\n\n");
	
	}
}
