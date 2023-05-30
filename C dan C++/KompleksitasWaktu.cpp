#include<time.h>
#include<iostream>
#include<conio.h>
#include<windows.h>

using namespace std;

int main() {
 int t1,t2,t3,t4,t5,t6;
 
 int hold;
 int array[50000];
 int arr[50000];
 int array1[50000];
 int jumlah =9000;
 cout << endl;
 cout<< " PROGRAM MENGETES KECEPATAN TIPE SORT DENGAN 9000 DATA ACAK"<<endl;
 cout<<"========================================================================="<<endl<<endl;
 srand(time(NULL));
 for (int x=0; x<jumlah; x++)
 {
  array[x]=rand()%jumlah+1;
  arr[x]=rand()%jumlah+1;
  array1[x]=rand()%jumlah+1;
 }
 
 for(int j=0; j<jumlah; j++) {
 array[j];
 array1[j];
 arr[j];
 } 
 
////////////////////////////

////// Bubbleee sort

/////////////////

 t1=GetTickCount();
 for(int i=0; i<jumlah; i++) {
  for(int j=0; j<jumlah; j++) {
   if(array[j]<array[j+1]) {
    hold=array[j];
    array[j]=array[j+1];
    array[j+1]=hold;
   }
  }
 }
    t2=GetTickCount();
 cout << endl << "Waktu eksekusi bubble sort dengan "<<jumlah <<" angka acak = " << (int)(t2 - t1) << " ms";
 cout<<endl;
 
 // tes print 5 array pertama
 for(int j=0; j<5; j++) {
 cout<< array[j]<<"  ";
 } 
 
 cout<<endl;
 
///////////////////////////

////////  Insertion

///////////////////////////

 t3=GetTickCount();
  int Key;
  
for(int j=1 ; j < jumlah ; j++) {
 Key = array1[j];              
 int i = j-1;                  
 while(i >= 0 && array1[i] < Key) {
  array1[i + 1] = array1[i];
  i = i - 1;
 }
 array1[i + 1] = Key;
}
    t4=GetTickCount();
 cout << endl << "Waktu eksekusi insertion dengan "<<jumlah <<" angka acak = " << (int)(t4 - t3) << " ms";
 cout<<endl;
 
 
 // tes print 5 array pertama
 for(int j=0; j<5; j++) {
 cout<< array1[j]<<"  ";
 } 
 cout<<endl;
 
///////////////////////

/////// Selection ..

/////////////////


t5=GetTickCount();
 int mini,temp;
  for(int r1=0;r1<jumlah-1;r1++) {
 mini=r1;
 for(int r2=r1+1; r2<jumlah; r2++)
   if(arr[r2]>arr[mini])
   mini=r2;
    if(mini !=r1) {
     temp=arr[r1];
     arr[r1]=arr[mini];
     arr[mini]=temp;
    }
}
    t6=GetTickCount();
 cout << endl << "Waktu eksekusi selection dengan "<<jumlah <<" angka acak = " << (int)(t6 - t5) << " ms";
 
 cout<<endl;
 
 // tes print 5 array pertama
 for(int j=0; j<5; j++) {
 cout<< array1[j]<<"  ";
 } 
 cout<<endl;

 getch();
}