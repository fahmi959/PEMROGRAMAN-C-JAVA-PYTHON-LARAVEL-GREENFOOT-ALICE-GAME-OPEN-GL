#include <iostream>  //memasukan sebuah file header dan menggunakan fungsi input dan output stream
#include <cmath>     //memasukan sebuah file header dan menggunakan operasi matematika
using namespace std; // tujuan dari penulisan kode ini adalah untuk melakukan penulisan kode langsung tanpa penulisan scope std
void satuan(int a)   // menyatakan satuan dalam integer
{
    if (a == 1)
    { // pemakaian kondisi if else untuk menentukan operasi program berdasarkan kondisi yang timbul dari input satuan
        cout << " Satu ";
    }
    else if (a == 2)
    {
        cout << " Dua ";
    }
    else if (a == 3)
    {
        cout << " Tiga ";
    }
    else if (a == 4)
    {
        cout << " Empat ";
    }
    else if (a == 5)
    {
        cout << " Lima ";
    }
    else if (a == 6)
    {
        cout << " Enam ";
    }
    else if (a == 7)
    {
        cout << " Tujuh ";
    }
    else if (a == 8)
    {
        cout << " Delapan ";
    }
    else if (a == 9)
    {
        cout << " Sembilan ";
    }
    else if (a == 10)
    {
        cout << " Sepuluh ";
    }
    else if (a == 11)
    {
        cout << " Sebelas ";
    }
}
void terbilang(int b) // menyatakan selain satuan juga dalam integer (puluhan, ratusan, ribuan, ratus ribu)
{
    if (b <= 11)
    {
        satuan(b);
    }
    else if ((b > 11) && (b <= 19))
    { // pengkhususan operasi dimana diberi rentang untuk bilangan belasan
        terbilang(b % 10);
        cout << "Belas ";
    }
    else if ((b >= 20) && (b <= 99))
    {
        terbilang(b / 10);
        cout << "Puluh";
        terbilang(b % 10);
    }
    else if ((b >= 100) && (b <= 199))
    {
        cout << "Seratus";
        terbilang(b % 100);
    }
    else if ((b >= 200) && (b <= 999))
    {
        terbilang(b / 100);
        cout << "Ratus";
        terbilang(b % 100);
    }
    else if ((b >= 1000) && (b <= 1999))
    {
        cout << "Seribu";
        terbilang(b % 1000);
    }
    else if ((b >= 2000) && (b <= 9999))
    {
        terbilang(b / 1000);
        cout << "Ribu";
        terbilang(b % 1000);
    }
    else if ((b >= 10000) && (b <= 99999))
    {
        terbilang(b / 1000);
        cout << "Ribu";
        terbilang(b % 1000);
    }
    else if ((b >= 100000) && (b <= 999999))
    {
        terbilang(b / 1000);
        cout << "Ribu";
        terbilang(b % 1000);
    }
    else if ((b == 1000000))
    {
        terbilang(b / 1000000);
        cout << "Juta";
        terbilang(b % 1000000);
    }
    else if ((b > 1000000))
    {
        cout << "ERRORn";
        cout << "nilai yang Anda masukan melampaui database aplikasi"; // pesan yang akan keluar jika user memasukan angka lebih dari satu juta
    }
}
int main() // menyatakan pembuatan suatu fungsi main. Setiap program C/C++ harus memiliki sebuah main. main merupakan kode awal yang akan dieksekusi ketika program dijalankan
{
    int nilai; //
    cout << "Aplikasi Penkonversi Angka ke dalam Kata - Kata n";
    cout << "== == == == == == == == == == == == == == n";
    cout << "Masukkan Bilangan Anda : ";
    cin >> nilai; // berguna untuk menginput data berupa numerik, string, dan karakter
    if (nilai < 0)
    { // penggunaan if else untuk membedakan masukan berupa bilangan positif atau negatif, sehingga jika bilangan yang dimasukan negatif maka tampilan akan muncul kata minus dalam output katanya
        cout << "Minus ";
        terbilang(abs(nilai)); // abs untuk menampilkan nilai absolute dari bilangan
    }
    else
    {
        terbilang(nilai);
    }
    cout << "n == == == == == == == == == == == == == == n";
    return 0; // Menyatakan hasil keluaran dari fungsi main() adalah 0. Pada C++, return 0 dalam main() menyatakan bahwa program berakhir dengan normal.
}