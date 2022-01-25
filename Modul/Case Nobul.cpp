#include <stdio.h>
#include <windows.h>
main()
{
	system ("color 0A");
	int n;
	printf ("Masukkan nomor bulan: "); scanf ("%d", &n);
	switch (n)
	{
		case 1 : printf ("Januari"); break;
		case 2 : printf ("Februari"); break;
		case 3 : printf ("Maret"); break;
		case 4 : printf ("April"); break;
		case 5 : printf ("Mei"); break;
		case 6 : printf ("Juni"); break;
		case 7 : printf ("Juli"); break;
		case 8 : printf ("Agustus"); break;
		case 9 : printf ("September"); break;
		case 10 : printf ("Oktober"); break;
		case 11 : printf ("November"); break;
		case 12 : printf ("Desember"); break;
		default : printf ("Tidak ada bulan ke- %d", n);
	}
}
