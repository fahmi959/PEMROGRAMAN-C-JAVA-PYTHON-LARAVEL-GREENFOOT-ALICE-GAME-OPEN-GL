#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define MAX 10
typedef struct {
    int Item [MAX] ;
    int Front ;
    int Rear;
    int Count;
} Queue;
// Inisialisasi antrian
void Inisialisasi (Queue *q)
{
    q->Front = q->Rear = -1;
    q-> Count = 0;
}
//Prosedur untuk menyisipkan data pada antrian
void Tambah (Queue*q, int item){
    if (q->Rear == MAX-1 )
    {
        printf ("\nAntrian Pennuh");
        return ;
    }

q->Rear++ ;
q->Item [q->Rear] = item;
q->Count++;
if (q->Front == -1) q->Front = 0;
}
//Prosedur untuk menghapus data dari antrian
int Hapus (Queue *q) {
    int data ;
    if (q->Front == -1)
    {
        printf("\n Antrian kosong") ;
        return NULL;
    }
    data = q->Item [q->Front];
    q->Count--;
    if (q->Front == q->Rear)
    q->Front = q->Rear = -1;
    else
    q->Front++;
    return data;
}
void Tampil (Queue *q)
{
    for (int i = 0 ; i< q-> Count ; i++)
    printf ("\nData : %d" , q->Item[i]);
}

int main ()
{
    Queue q;
    int data;
     Inisialisasi (&q);
      int menu;

     do {

        system("cls");
    printf ("\nSelamat Datang di Program Queue\n");
    printf ("\nSilahkan memilih menu :");
    printf ("\n1. ENQUEUE ");
    printf ("\n2. DEQUEUE ");
    printf ("\n3. TAMPILKAN ");
    printf ("\n4. EXIT PROGRAM ");
   
    printf ("\nMasukan angka pilihan : ");
    scanf ("%i" , &menu);
     switch (menu)

        {
            case 1: system("cls"); {
                
                printf ("Masukan Data = ");
                scanf ("%i" , &data);
                Tambah(&q, data) ;

                break;

            }

            case 2: system("cls");{

               printf ("\nHapus Item = %d" , data);
    data = Hapus (&q);

                break;

            }

            case 3: system("cls");{

            Tampil (&q) ;

                break;

            }
            case 4: system("cls");{

                return 0;

                break;

            }


            default : system("cls");

            {

                printf("\n Maaf, Pilihan yang anda pilih tidak tersedia!");

            }

}
getch ();

}
while (menu !=5) ;

}