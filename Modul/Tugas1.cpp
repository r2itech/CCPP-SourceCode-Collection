#include <stdio.h>
#include <conio.h>
main()
{
	("cls");
	int angka;
	while(angka<=16)
	{
		angka+=3;
		printf("%d \n", angka);
	}
	printf ("%d \n", ++angka);
	getch();
}
