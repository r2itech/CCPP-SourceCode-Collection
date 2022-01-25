#include <stdio.h>
#include <windows.h>
void setcolor (unsigned short color)
{
	HANDLE hConsoleOutput=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsoleOutput, color);
}
int garis()
{
	for (int i=1; i<=17; i++)
	{
		printf ("=");
	}
}
main()
{
	float jumlah=0, rata;
	int nilai[35], nama[35][35], i, N;
	printf ("Masukan jumlah mahasiswa: "); scanf ("%d", &N);
	for (i=1; i<=N; i++)
	{
		printf ("Masukan Nama Mahasiswa ke-%d: ", i); scanf ("%s", &nama[i]);
		printf ("Masukkan nilai tugas mahasiswa %s: ", nama[i]); scanf ("%d", &nilai[i]);
	}
	for (i=1; i<=N; i++)
	{
		jumlah=jumlah+nilai[i];
	}
	rata=jumlah/N;
	garis(); printf ("\n");
	printf ("Inisial\tNilai\n");
	garis(); printf ("\n");
	for (i=1; i<=N; i++)
	{
		printf ("%s\t%d\n", nama[i], nilai[i]);
	}
	garis(); printf ("\n");
	printf ("Rata-rata nilai mahasiswa= %f", rata);
	printf ("\n");
	garis();
}
