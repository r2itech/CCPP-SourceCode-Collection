#include <stdio.h>
#include <windows.h>
void setcolor (unsigned short color)
{
	HANDLE hConsoleOutput=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsoleOutput, color);
}
int garis()
{
	int i;
	for (i=1; i<=27; i++)
	{
		printf ("=");
	}
}
main()
{
	int Kelas[7][7], TI[7], SI[7], D3[7], k, n;
	setcolor(10);
	printf ("Masukkan jumlah kelas: "); scanf ("%d", &n);
	for (k=1; k<=n; k++)
	{
		printf ("Masukkan kelas: "); scanf ("%s", &Kelas[k]);
		printf ("Masukkan nilai rata-rata kelas TI [%s]: ", Kelas[k]); scanf ("%d", &TI[k]);
		printf ("Masukkan nilai rata-rata kelas SI [%s]: ", Kelas[k]); scanf ("%d", &SI[k]);
		printf ("Masukkan nilai rata-rata kelas D3 [%s]: ", Kelas[k]); scanf ("%d", &D3[k]);
	}
	setcolor(11);
	garis(); printf ("\n");
	printf ("Kelas\t TI\t SI\t D3\t\n");
	garis(); printf ("\n");
	for (k=1; k<=n; k++)
	{
		printf ("%s\t", Kelas[k]);
		printf ("%d\t ", TI[k]);
		printf ("%d\t ", SI[k]);
		printf ("%d \n", D3[k]);
	}
	garis();
}
