#include <stdio.h>  
#include <conio.h>
#include <stdlib.h>
 
typedef struct TNode{      int data;
      TNode *next;
      TNode *prev;
     } TNode;

TNode *head=NULL;
void init();
int IsEmpty();
void InsertDepan(int value);
void InsertBelakang(int value);
void DeleteDepan();
void DeleteBelakang();
void ClearAll();
void Tampil();
 
main() // ---> Program Utama
{ 
 int data;
 int key;
 do
 {
  printf("\n\n ____MENU PROGRAM____ \n\n");
  printf(" [1] Insert Depan \n");
  printf(" [2] Insert Belakang \n");
  printf(" [3] Hapus Depan \n");
  printf(" [4] Hapus Belakang \n");
  printf(" [5] Hapus Semua List \n");
  printf("\n Pilihan Anda [1-5] --> ");scanf("%d",&key);
  system("CLS");
  if(key==1)
  {
   printf("\n Masukan Data : "); scanf("%d",&data);
   InsertDepan(data);
   Tampil();
  }
  else if(key==2)
  {
   printf("\n Masukan Data : "); scanf("%d",&data);
   InsertBelakang(data);
   Tampil();
  }
  else if(key==3)
  {
   DeleteDepan();
   getch();
   Tampil();
  }
  else if(key==4)
  {
   DeleteBelakang();
   getch();
   Tampil();
  }
  else if(key==5)
  {
   ClearAll();
   printf("\n\n Semua List Sudah Di Hapus \n");
  }
  else
  {
   printf("\n Pilihan Anda Salah \n");
  }
  getch();
 }
 while(key);
} 
// ---> En Program Utama
 
void init()  // ---> Inisiasi
{
 head = NULL;
}
 
int IsEmpty() // ---> Mengecekan kondisi [kosong/tidak]
{ if(head==NULL)
 return 1;
 else
 return 0;
}
 
void InsertDepan(int value) // ---> Menambahkan data dari depan
{ TNode *baru;
 baru = new TNode;
 baru ->data = value;
 baru ->next = NULL; 
 baru ->prev = NULL;
 if(IsEmpty()==1)
 {
  head = baru;
  head ->next=NULL;
  head ->prev=NULL;
 }
 else
 {
  baru ->next=head;
  head ->prev=baru;
  head=baru;
 }
 printf(" Data Masuk --> ");
}
 
void InsertBelakang(int value) // ---> Menambahkan data dari belakang
{
 TNode *baru, *bantu;
 baru = new TNode;
 baru ->data = value;
 baru ->next = NULL;
 baru ->prev = NULL;
 if(IsEmpty()==1)
 {
  head = baru;
  head ->next = NULL;
  head ->prev = NULL;
 }
 else
 {
  bantu=head;
  while(bantu ->next != NULL)
  {
   bantu = bantu ->next;
  }
  bantu ->next=baru;
  baru ->prev=bantu;
 }
 printf(" Data Masuk --> ");
}
 
void DeleteDepan() // ---> Menghapus data dari depan
{
 TNode *hapus;
 int d;
 if(IsEmpty()==0)
 {
  if(head ->next !=NULL)
  {
   hapus = head;
   d=hapus ->data;
   head=head ->next;
   head ->prev = NULL;
   delete hapus;
  }
  else
  {
   d=head->data;
   head=NULL;
  }
  printf("\n %d Data Terhapus\n",d);
  printf(" Maka Menjadi -->");
 }
 else
 printf("\n Masih Kosong -->");
}

void DeleteBelakang() // ---> Menghapus data dari belakang
{
 TNode *hapus,*bantu;
 int d;
 if (IsEmpty()==0)
  { 
   if(head->next != NULL)
   {
     bantu = head;      
 	 while(bantu->next->next!=NULL)
     {
 	  bantu = bantu->next;
 	 }
     hapus = bantu->next;
     d = hapus->data;
     bantu->next = NULL;
     delete hapus;
  }
   else
    { 
     d = head->data;
	 head = NULL;
 	 printf("\n %d terhapus\n",d);
 	 printf(" Maka Menjadi -->");
    }
  }
 else printf("\n Masih Kosong -->");
}
 
void ClearAll() // ---> Mengahapus semua data(hapus list)
{
 TNode *bantu, *hapus;
 bantu=head;
 while(bantu !=NULL)
 {
  hapus=bantu;
  bantu=bantu ->next;
  delete hapus;
 }
 head=NULL;
}

void Tampil() // ---> Menapmpilkan list
{
 TNode *bantu;
 bantu=head;
 if(IsEmpty()==0)
 {
  while(bantu !=NULL)
  {
   printf(" [%d]", bantu
->data);
   bantu=bantu ->next;
  }
  printf("\n ");
 }
 else
 printf(" Data Kosong");
}

