#include <stdio.h>
#include <conio.h>
//#include <stdlib.h>
#include <windows.h>
#define MAX 5 //Mendefinisikan Maksimal antrian yang dapat dimasukkan

void setcolor (unsigned short color)
{
	HANDLE hConsoleOutput=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsoleOutput, color);
}

int garis()
{
	int g;
	for (g=1; g<=21; g++)
	{
		printf ("_-");
	}
}

//struct berfungsi untuk menampung informasi - informasi yang saling berhubungan
typedef struct Queue
{
	int add[MAX], depan, belakang; 
}; Queue ngantri;

//Fungsi Untuk Mengetahui Antrian Kosong/Tidak
int KosongEnggak()					//IsEmpty
{	
	if(ngantri.belakang == -1) 
	{return 1;}						//True
	else
	{return 0;}						//False
}

//Fungsi Untuk Mengetahui Antrian Penuh/Tidak
int PenuhEnggak()					//IsFull
{
	if(ngantri.belakang == MAX-1)
	{return 1;}						//True
	else
	{return 0;}						//False
}

//Prosedur Untuk Memasukkan Antrian
void Masukkan()						//Prosedur Enqueue 
{
	int add;
 	if(KosongEnggak() == 1)			//IsEmpty True
	{
  		system("cls");
  		printf("\nElemen Yang Akan Dimasukan: "); scanf("%d", &add); //Add
  		ngantri.depan = ngantri.belakang = 0;
  		ngantri.add[ngantri.belakang] = add;
  		printf("\n%d Masuk Nih!", ngantri.add[ngantri.belakang]);
 	}
	else if(PenuhEnggak() == 0)		//IsEmpty False
	{
   		system("cls");
   		printf("\nElemen Yang Akan Dimasukan: "); scanf("%d", &add);
   		ngantri.belakang++;
   		ngantri.add[ngantri.belakang] = add;
		printf("\n%d Masuk Nih!", ngantri.add[ngantri.belakang]);
	}
	else
	{
	  	system("cls");
		printf("\nData Penuh!!!");
	}
}

//Prosedur Untuk Menghapus Antrian
void Keluarkan()					//Prosedur Dequeue
{
	system("cls");
 	int x, la = ngantri.add[ngantri.depan];
 	for(x = ngantri.depan; x <= ngantri.belakang-1; x++)
	{
  		ngantri.add[x] = ngantri.add[x+1]; printf(" ");			//Head Dikeluarkan dan Antrian Belakangnya Maju
 	}
 	ngantri.belakang--;										  //Tail Maju
 	if (ngantri.add[ngantri.belakang] != 0)
	{
 		printf("\nElemen Antrian Data = %d", la); printf (" Keluar");
 	}
	else
	{ 
		printf("\nTidak Ada Elemen Data!"); 
	}
}


//Prosedur Untuk Membersihkan Seluruh Antrian
void bersihkan()
{
 	if (ngantri.add[ngantri.belakang] != 0)
	{
		system("cls");
  		ngantri.depan = ngantri.belakang = -1;				//Rumus Untuk Menghapus Seluruh Antrian
  		printf("\nData Antrian Sudah Dikosongkan!");
 	}
	else
	{
	 	system("cls");
		printf("\nTidak Ada Data Antrian!");
	}
}


//Prosedur Untuk Melihat Antrian
void lihat()
{
 	int f;
 	if(ngantri.add[ngantri.belakang] != 0)
	{
  		system("cls");
  		printf("\nAntrian Yang Ada: ");
  		for(f = ngantri.depan; f <= ngantri.belakang; f++)
		{
   			if(ngantri.add[f] != 0)
			{
    			printf("| %d | <= ", ngantri.add[f]);
   			}
			else
			{
				printf("\tAntrian Kosong!");
			}
  		}
 	}
	else
	{
 		system("cls");
		printf("\nTidak Ada Antrian!");
 	}
}

//Program Utama
main() 
{
 system("cls");
 int milih;
 ngantri.depan = -1;			//Operasi Create
 ngantri.belakang = -1;		   //Operasi Create
 do
 {
 	system ("cls");
 	setcolor(10);
 	garis(); printf ("\n");
 	printf("| No\t||\t\tMENU\t\t||\n");
	garis(); printf ("\n");
	printf("| 1\t||\tQueue Underflow/No?\t||\n"); 
  	printf("| 2	||\tQueue Overflow/No?\t||\n");
	printf("| 3	||\tInput Elemen queue\t||\n");
  	printf("| 4	||\tDelete Elemen Queue\t||\n");
	printf("| 5	||\tView\t\t\t||\n"); 
  	printf("| 6	||\tClear Queue\t\t||\n");
	printf("| 7	||\tExit\t\t\t||\n");
	garis(); printf ("\n");
	setcolor(11);
	printf("\n Masukkan Pilihan Menu: "); scanf("%d", &milih);
  	setcolor(12);
	if(milih == 1)
	  {  
   		system("cls"); 
		if(KosongEnggak() == 1)
		{
			printf("\nAntrian Masih Kosong!");
		}
		else
		{
			printf("\nAntrian Tidak Kosong!");
		} printf("\n\n\n\t\t======== Enter ========\n"); } 
  	else if(milih == 2)
  		{  
   			system("cls");
			if(PenuhEnggak() == 1)
			{
				printf("\nAntrian Penuh!");
			}
			else
			{
				printf("\nAntrian Tidak Penuh!");
			} printf("\n\n\n\t\t======== Enter ========\n"); } 
   else if(milih == 3)
   {
   		Masukkan(); printf("\n\n\n\t\t======== Enter ========\n"); 
   } 
   else if(milih == 4)
   {
   		Keluarkan(); printf("\n\n\n\t\t======== Enter ========\n");
   }
   else if(milih == 5)
   {
   		lihat();  printf("\n\n\n\t\t======== Enter ========\n");
   }
   else if(milih == 6)
   { 
   		bersihkan();  printf("\n\n\n\t\t======== Enter ========\n");
   }
   else if(milih == 7)
   {
   		exit(EXIT_SUCCESS);
   } 
   else 
   { 
   		printf ("\nPilihan Menu Tidak Ada!!!");
   		getch();
		main();
   } getch();
 }while(milih<=7);
}
