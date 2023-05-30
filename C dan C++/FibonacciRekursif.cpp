#include <iostream>
using namespace std;

int fibonacci(int n){
 if (n == 0 or n == 1){

     return n;
 }

else {
   return fibonacci(n-1) + fibonacci(n-2);
}
}



int main (){

//Final Index adalah Jumlah Deret Index yang ingin ditampilkan
int index_mulai , n , final_index;
n = 0;
cout << "Masukkan jumlah deret fibonacci : ";
cin >> final_index;

cout << "Deret Fibonacci : ";
for (index_mulai = 0; index_mulai <= final_index ; index_mulai++ ){
    cout << fibonacci(n) << " " ;
    n++;
}
return 0;
}