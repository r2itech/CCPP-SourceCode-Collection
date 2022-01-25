#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
#define MAX 5

void setcolor (unsigned short color)
{
	HANDLE hConsoleOutput=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsoleOutput, color);
}

int queue[MAX];
int front=-1;
int rear=-1;

int insert()
{
	setcolor(11);
	int add;
	if(rear < 4)
	{
		printf ("Masukkan Nilai Elemen Queue: "); scanf ("%d", &add);
		rear++;
		queue[rear] = add;
	}
	else
	{
		printf ("Antrian Penuh!!!\n");
	}
}

int del()
{
	setcolor(11);
	if (front <= rear)
	{
		printf ("Elemen Queue Yang di Delete Adalah: %d\n", queue[front]);
		front++;
	}
	else 
	{
		printf ("Queue Kosong!\n");
		rear < 4;
	}
}

int display()
{
	setcolor(12);
	int i;
	if (front != -1)
	{
	printf ("Nilai Elemen Queue Adalah: \n");
	for (i = front; i <= rear; i++)
		{
			printf ("|%d|", queue[i]);
		}
		printf ("\n");
	}
	else if (front == -1)		
	{
		printf ("Antrian Kosong\n");
	}
}

main()
{
	int pil;
	setcolor(11);
	
		printf ("\n<<<	============	>>>\n");
		printf ("\t    Menu\n");
		printf ("<<<	============	>>>\n");
		printf ("|1. Insert Queue	|\n");
		printf ("|2. Delete Queue	|\n");
		printf ("|3. Display Queue	|\n");
		printf ("|4. Exit			|\n");
		printf ("<<<	============	>>>\n\n");
	do
	{
		setcolor(10);
		printf ("Masukkan Pilihan: "); scanf ("%d", &pil);
		switch(pil)
		{
			case 1: insert(); break;
			case 2: del(); break;
			case 3: display(); break;
			case 4: exit(1); break;
			default: printf ("\nInput Salah!");
		}
	}while (pil <= 4);
}
