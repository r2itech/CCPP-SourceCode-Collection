#include <stdio.h>
#include <windows.h>
void setcolor (unsigned short color)
{
	HANDLE hConsoleOutput=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsoleOutput, color);
}
typedef struct tanggal
{
	int d, y;
	char m[12];
};
typedef struct waktu
{
	int h, m, s;
};
typedef struct login
{
	int ID; 
	tanggal tgl; 
	waktu time;
};
main()
{
	login member[10];
	int j, i;
	setcolor(12);
	printf ("Masukan jumlah member: "); scanf ("%d", &j);
	for (i=1; i<=j; i++)
	{
	setcolor (12);
	printf ("Masukkan ID member ke-%d: ", i); scanf ("%d", &member[i].ID);
	printf ("<<< Tanggal login >>>\n");
	printf ("Tanggal: "); scanf ("%d", &member[i].tgl.d);
	printf ("Bulan: "); scanf ("%s", &member[i].tgl.m);
	printf ("Tahun: "); scanf ("%d", &member[i].tgl.y);
	printf ("\n");
	setcolor (12);
	printf ("<<< Waktu login >>>\n");
	printf ("Jam: "); scanf ("%d", &member[i].time.h);
	printf ("Menit: "); scanf ("%d", &member[i].time.m);
	printf ("Detik: "); scanf ("%d", &member[i].time.s);
	printf ("\n\n");
	}
	printf ("\n\n");
	setcolor (11);
	printf ("<<< Data login member >>>\n");
	for (i=1; i<=j; i++)
	{
	printf ("ID member ke-%d : %d\n", i, member[i].ID);
	printf ("Tanggal login: %d-%s-%d\n", member[i].tgl.d, member[i].tgl.m, member[i].tgl.y);
	printf ("Waktu login: %d:%d:%d", member[i].time.h, member[i].time.m, member[i].time.s);
	printf ("\n\n");
	}
}
