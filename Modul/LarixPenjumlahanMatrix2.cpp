#include <stdio.h>
#include <windows.h>
#include <conio.h>
void setcolor(unsigned short color)
{
	HANDLE hConsoleOutput=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsoleOutput, color);
}
main()
{
	int i, j, B, K;
	float MatrixA[i][j];
	float MatrixB[j][i];
	float MatrixAB[i][j];
	setcolor(11);
	printf ("<<< === Penjumlahan 2 Buah Matrix === >>>\n\n");
	setcolor(12);
	printf ("Masukkan jumlah baris: "); scanf ("%d", &B);
	printf ("Masukkan jumlah kolom: "); scanf ("%d", &K);
	printf ("\n");
	setcolor(10);
	printf ("Matrix A:\n");
	printf ("       Elemen[Baris, Kolom]\n");
	for(i=1; i<=B; i++)
	{
		for(j=1; j<=K; j++)
		{
			printf ("Masukkan elemen[%d, %d]= ", i, j); scanf ("%f", &MatrixA[i][j]);
		}
	}
	setcolor(14);
	printf ("Matrix B:\n");
	printf ("       Elemen[Baris, Kolom]\n");
	for(i=1; i<=B; i++)
	{
		for(j=1; j<=K; j++)
		{
			printf ("Masukkan elemen[%d, %d]= ", i, j); scanf ("%f", &MatrixB[i][j]);
		}
	}
	printf ("\n");
	for(i=1; i<=B; i++)
	{
		for(j=1; j<=K; j++)
		{
			MatrixAB[i][j] = (MatrixA[i][j])+(MatrixB[i][j]);
		}
	}
	setcolor(9);
	printf ("Matrix A+B:\n");
	for(i=1; i<=B; i++)
	{
		for(j=1; j<=K; j++)
		{
			printf ("%f \t", MatrixAB[i][j]);
		}
		printf ("\n");
	}
getch();
}
