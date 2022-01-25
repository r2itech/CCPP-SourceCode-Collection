#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
#define max 5

//warna
void setcolor (unsigned short color)
{
	HANDLE hConsoleOutput=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsoleOutput, color);
}

//vaiabel
int stack[max];
int top = -1;
int i;
int aksi;

//membuat garis
garis()
{
	printf("\n");
	for(int i = 1;i<=50;i++)
	{
		printf("=");
	}
	printf("\n");
}

//menampilkan data
tampil()
{
	if(top == -1)
	{
		printf("\t\tTumpukan Kosong");
	}
	else
	{
		printf("\t\tData Yang Tersedia");
	
		garis();
		for(i=top;i>=0;i--)
		{
			printf("\t\t\t%d",stack[i]);
			printf("\n");
		}
	}
}

//operasi IsEmpty
isempty()
{
	garis();
	if(top == -1)
	{
		printf("Tumpukan Kosong");
	}
	else
	{
		printf("Tumpukan Terisi");
	}
}

//operasi IsFull
isfull()
{
	garis();
	if(top == max-1)
	{
		printf("Tumpukan Penuh");
		return 0;
	}
	else
	{
		printf("Tumpukan Masih Memiliki Ruang");
		return top;
	}
}

//operasi push
push()
{
	int add;
	if(top==max-1)
	{
		printf("Data Penuh");
	}
	else
	{
		printf("Data Yang Akan Dimasukan : "); scanf("%d",&add);
		top++;
		stack[top] = add;
		printf("Data Berhasil Masuk");
	}
}

//opreasi pop
pop()
{
	if(top==-1)
	{
		printf("Tumpukan Kosong");
	}
	else
	{
		printf("Data Yang Dikeluarkan : %d",stack[top]);
		top--;
	}	
}

//opreasi clear
clear()
{
	if(top==-1)
	{
		printf("Tumpukan Kosong");
	}
	else
	{
		printf("Semua Data Sudah Dikeluarkan");
		top = -1;
	}	
}
//fungsi main
main()
{
	//menu navigasi
	system("cls");
	setcolor(15);
	garis();
	printf("\t\t\tMENU ");
	garis();
	setcolor(7);
	printf(" 1.Cek Tumpukan Kosong(IsEmpty)\n 2.Cek Tumpukan Penuh(IsFull)\n 3.Memasukan data(Push)\n 4.Mengeluarkan data(Pop)\n 5.Keluarkan Semua data(Clear)\n 6.Keluar Aplikasi");
	setcolor(15);
	garis();
	
	//menampilkan isi stack
	setcolor(8);
	garis();
	tampil();
	garis();
	
	//input perintah
	setcolor(12);
	do{
		printf("Aksi : "); scanf("%d",&aksi);
		switch(aksi)
		{
			case 1 : isempty();getch();main(); break;
			case 2 : isfull();getch();main(); break;
			case 3 : push();getch();main(); break;
			case 4 : pop();getch();main(); break;
			case 5 : clear();getch();main(); break;
			case 6 : printf("\nKeluar Aplikasi");exit(1); 
			default : printf("\nMenu yang di pilih tidak Tersedia, silahkan memilih kembali\n"); 
		}
	}while(aksi>=7);
	garis();
	getch();
}
