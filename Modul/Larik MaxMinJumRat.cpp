#include <stdio.h>
#include <windows.h>
void setcolor (unsigned short color)
{
	HANDLE hConsoleOutput=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsoleOutput, color);
}
main()
{
	setcolor (10);
	int i, n;
	float max, min, jumlah=0;
	float rata;
	float data[i];
	printf ("Masukkan jumlah data: "); scanf ("%d", &n);
	for (i=1; i<=n; i++)
	{
		printf ("Masukkan data ke %d ", i); printf (" :");
		scanf ("%f", &data[i]);
	}
	for (i=1; i<=n; i++)
	{
		printf ("Data ke %d ", i); printf("= "); printf("%f\n", data[i]); 
	}
	max=data[1];
	min=data[1];
	for (i=1; i<=n; i++)
	{
		if (max<data[i])
		{
			max=data[i];
		}
		else if (min>data[i])
		{
			min=data[i];
		}
	}
	for (i=1; i<=n; i++)
	{
		jumlah=jumlah+data[i];
	}
	rata=jumlah/n;
	printf ("Nilai terbesar= %f\n", max);
	printf ("Nilai terkecil= %f\n", min);
	printf ("Jumlah= %f\n", jumlah);
	printf ("Rata-rata= %f", rata);
}
