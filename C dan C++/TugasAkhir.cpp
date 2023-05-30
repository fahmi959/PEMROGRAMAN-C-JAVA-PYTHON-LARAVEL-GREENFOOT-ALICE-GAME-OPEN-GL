#include <iostream>
#include <string>
#include <math.h>
#include <conio.h>
#include <stdio.h>
#define Phi 3.141
using namespace std;

#include <iostream>
using namespace std;
 
class Signature{
public:
    string nim;
    string nama;
    string prodi;
    void printData(){
      cout<<"Nama  \t= "<<nama<<endl;
      cout<<"NIM   \t= "<<nim<<endl;
      cout<<"Nilai \t= "<<prodi<< endl << endl;
    }
};
 
void menu_awal ();

int main()
{  
  Signature F;
    F.nim = "4611420003";
    F.nama = "Fahmi Ardiansyah";
    F.prodi = "Teknik Informatika";
    F.printData();
    
  menu_awal();

  return 0;

}

void menu_awal(){
int PilihProgram ;
string pilih  ;

cout << "==== Selamat Datang di Program Matematika Fahmi ====" << endl;
cout << "1. Program Kalkulator Aritmatika / Operasi Bilangan" << endl;
cout << "2. Program Perhitungan Trigonometri / Sudut Istimewa" << endl;
cout << "3. Program Perhitungan Matriks" << endl;
cout << "4. Program Perhitungan Luas, Keliling dan Volume Bangun Datar dan Bangun Ruang" << endl;
cout << "Masukkan Nomor Pilihan Program : " ;
cin >> PilihProgram ;

if (PilihProgram == 1){
  float Hasil_Tambah , Angka_1 , Angka_2 , Hasil_Bagi , Hasil_Kali , Hasil_Kurang;
  cout << "Masukkan Angka Pertama : " ;
  cin >> Angka_1 ;
  cout << "Masukkan Angka Kedua : " ;
  cin >> Angka_2 ;
  Hasil_Tambah = Angka_1 + Angka_2 ;
cout << "Hasil Pertambahan " << Angka_1 << " + " << Angka_2 << " = " << Hasil_Tambah << endl;
  Hasil_Kurang = Angka_1 - Angka_2 ;
cout << "Hasil Pengurangan " << Angka_1 << " - " << Angka_2 << " = " << Hasil_Kurang << endl;
  Hasil_Kali = Angka_1 * Angka_2 ;
cout << "Hasil Perkalian " << Angka_1 << " x " << Angka_2 << " = " << Hasil_Kali << endl;
  Hasil_Bagi = Angka_1 / Angka_2 ;
cout << "Hasil Pembagian " << Angka_1 << " / " << Angka_2 << " = " << Hasil_Bagi << endl;

}
else if (PilihProgram == 2){

  double sinX, X , cosX , tanX , secX , cscX , cotX;
  cout << "Masukkan nilai sudut X : " ;
  cin >> X;
  cout << "Nilai Sin X = " ;
  sinX = sin(X*Phi/180);
  cout << sinX << endl;
   cout << "Nilai Cos X = " ;
  cosX = cos(X*Phi/180);
  cout << cosX << endl;
   cout << "Nilai Tan X = " ;
  tanX = tan(X*Phi/180);
  cout << tanX << endl;
   cout << "Nilai Sec X = " ;
  secX = (1 / (cos(X*Phi/180)));
  cout << secX << endl;
    cout << "Nilai Csc X = " ;
  cscX = (1 / (sin(X*Phi/180)));
  cout << cscX << endl;
    cout << "Nilai Cot X = " ;
  cotX = (1 / (tan(X*Phi/180)));
  cout << cotX << endl;
}
else if (PilihProgram == 3){
 int a, b, i, j, k, det, matriks1[10][10], matriks2[10][10], hasil[10][10] , jumlah = 0;
  cout << "Masukkan jumlah baris matriks: ";
  cin >> a;
  cout << "Masukkan jumlah kolom matriks: ";
  cin >> b;
  cout << endl ;
  cout << "Anda Memilih Matriks Dengan Ordo " << a << "x" << b << endl;
  cout << endl ;
  cout << "Masukkan elemen matrix pertama: \n";
  for(i = 0; i < a; i++){
    for(j = 0; j < b; j++){
       
      cin >> matriks1 [i][j];
     
    }
    
  } //Ganti baris
  cout << endl;

  cout << "Masukkan elemen matrix kedua: \n";
  for(i = 0; i < a; i++){
    for(j = 0; j < b; j++){
      cin >> matriks2 [i][j];
    }
    
  } //Ganti baris
  cout << endl;

  cout << "== Isi Matrix 1 ==\n";
  for(i = 0; i < a; i++){
    for(j = 0; j < b; j++){
      
      cout << matriks1[i][j] << "\t";
    }
    cout << endl ;
  }
  //Ganti baris
  cout << endl ;
  cout << "== Isi Matrix 2 == \n";
  for(i = 0; i < a; i++){
    for(j = 0; j < b; j++){
      
      cout << matriks2[i][j] << "\t";
    }
    cout << endl ;
  }
//Ganti baris
  cout<< endl ;
  cout << "Hasil penjumlahan matrix \n";
  for(i = 0; i < a; i++){
    for(j = 0; j < b; j++){
      hasil[i][j] = matriks1[i][j] + matriks2[i][j];
      cout << hasil[i][j] << "\t" ;
    }
    cout << endl;
  }

  //Ganti baris
  cout<< endl  ;

  cout << "hasil pengurangan matrix \n";
  for(i = 0; i < a; i++){
    for(j = 0; j < b; j++){
      hasil[i][j] = matriks1[i][j] - matriks2[i][j];
      cout <<  hasil[i][j] << "\t";
    }
    cout << endl ;
  }
    //Ganti baris
   cout << endl ;
  
//Hanya bisa ordo sama antara kolom dan baris
  if(a != b){
    cout << "Matriks tidak dapat dibagi atau dikalikan satu sama lain.\n";
  } else {
    for(i = 0; i < a; i++){
      for(j = 0; j < b; j++){
        for(k = 0; k < b; k++){
          jumlah = jumlah + matriks1[i][k] * matriks2[k][j];
        }
        hasil[i][j] = jumlah;
        jumlah = 0;
      }
    }
    cout << "Hasil perkalian matriks \n";
    for(i = 0; i < a; i++){
      for(j = 0; j < b; j++){
        cout << hasil[i][j] << "\t";
      }
      cout << endl;
    }
  }

}
else if (PilihProgram == 4){
  cout << "Ketik 'BD' untuk Bangun Datar atau 'BR' untuk Bangun Ruang : ";
  cin >> pilih ;
if (pilih == "BD"){
  float s , a , t , m , p , l , r ;
  float Luas_Persegi , Keliling_Persegi , Luas_Segitiga ;
  float Keliling_Segitiga_Sembarang , Keliling_Segitiga_Sama_Sisi ;
  float Luas_Persegi_Panjang , Keliling_Persegi_Panjang ;
  float Luas_Lingkaran , Keliling_Lingkaran ;
  cout << "Masukkan Nilai Sisi : " ;
  cin >> s ;
  cout << "Masukkan Nilai Alas : ";
  cin >> a ;
  cout << "Masukkan Nilai Tinggi : " ;
  cin >> t ;
  cout << "Masukkan Nilai Sisi Miring : " ;
  cin >> m ;
  cout << "Masukkan Nilai Panjang : " ;
  cin >> p ;
  cout << "Masukkan Nilai Lebar : " ;
  cin >> l ;
  cout << "Masukkan Nilai Jari-Jari : " ;
  cin >> r ;

Luas_Persegi = s*s;
Keliling_Persegi = 4*s;
Luas_Segitiga = a*t / 2;
Keliling_Segitiga_Sembarang = a+t+m ;
Keliling_Segitiga_Sama_Sisi = 3*s ;
Luas_Persegi_Panjang = p*l ;
Keliling_Persegi_Panjang = (2*p) + (2*l) ;
Luas_Lingkaran = 3.14*(r*r) ;
Keliling_Lingkaran = 2*3.14*r ;
cout << endl ;
cout << "====== HASILNYA ======" << endl;
cout << "Luas Persegi = " << s << 'x' << s << " = " << Luas_Persegi << endl;
cout << "Keliling Persegi = " << 4 << 'x' << s << " = " << Keliling_Persegi << endl;
cout << "Luas Segitiga = " << a << 'x' << t << '/' << 2 << " = " << Luas_Segitiga << endl;
cout << "Keliling Segitiga Sembarang = " << a << '+' << t << '+' << m << " = " << Keliling_Segitiga_Sembarang << endl;
cout << "Keliling Segitiga Sama Sisi = " << 3 << 'x' << s << "= " << Keliling_Segitiga_Sama_Sisi << endl;
cout << "Luas Persegi Panjang = " << p << 'x' << l << " = " << Luas_Persegi_Panjang << endl;
cout << "Keliling Persegi Panjang = " << "2x" << p << "2x" << l << " = " << Keliling_Persegi_Panjang << endl;
cout << "Luas Lingkaran = " << 3.14 << 'x' << r << 'x' << r << " = " << Luas_Lingkaran << endl;
cout << "Keliling Lingkaran = " << 2 << 'x' << 3.14 << 'x' << r << " = " << Keliling_Lingkaran << endl;
}
else if (pilih == "BR") {
  float LA_Tiga , LA_Empat ,  t , s ,  p , l , r ;
  float Luas_Kubus , Keliling_Kubus , Volume_Kubus ;
  float Luas_Balok , Keliling_Balok , Volume_Balok ;
  float Luas_Prisma_Segitiga;
  float Luas_Limas_Segiempat ;
  float Luas_Tabung  , Volume_Tabung ;
  float Luas_Bola  , Volume_Bola ;
  cout << "Masukkan Nilai Sisi : " ;
  cin >> s ;
  cout << "Masukkan Nilai Panjang : " ;
  cin >> p ;
  cout << "Masukkan Nilai Lebar : " ;
  cin >> l ;
  cout << "Masukkan Nilai Tinggi : " ;
  cin >> t ;
  cout << "Masukkan Nilai Jari-Jari : " ;
  cin >> r ;
  cout << "Masukkan Nilai Luas Alas Segitiga : " ;
  cin >> LA_Tiga ;
  cout << "Masukkan Nilai Luas Alas Segiempat : ";
  cin >> LA_Empat ;
Luas_Kubus = 6*s*s;
Keliling_Kubus = 12*s;
Volume_Kubus = s*s*s ;
Luas_Balok = (2*p*l) + (2*l*t) + (2*p*t) ;
Keliling_Balok = 4*p + 4*l + 4*t ;
Volume_Balok = p*l*t ;
Luas_Prisma_Segitiga = (2*LA_Tiga) + (3*LA_Empat) ;
Luas_Limas_Segiempat = LA_Empat * t ;
Luas_Tabung = 2*3.14*r*(r+t) ;
Volume_Tabung = 3.14 * (r*r) * t ;
Luas_Bola = (4/3)*3.14*(r*r*r) ;
Volume_Bola = 4*3.14*(r*r) ;
cout << endl ;
cout << "====== HASILNYA ======" << endl;
cout << "Luas Kubus = " << 6 << 'x' << s << 'x' << s << " = " << Luas_Kubus << endl;
cout << "Keliling Kubus = " << 12 << 'x' << s << " = " << Keliling_Kubus << endl;
cout << "Volume Kubus = " << s << 'x' << s << 'x' << s << " = " << Volume_Kubus << endl;
cout << "Luas Balok = " << "(2x" << p << 'x' << l << ")" << "(2x" << l << 'x' << t << ")" << "(2x" << p << 'x' << t << ")" << " = " << Luas_Balok << endl;
cout << "Keliling Balok = " << 4 << 'x' << p << "+" << "4x" << l << "+" << "4x" << t  << " = " << Keliling_Balok << endl;
cout << "Volume Balok = " << p << 'x' << l << 'x' << t << " = " << Volume_Balok << endl;
cout << "Luas Prisma Segitiga = " << 2 << 'x' << LA_Tiga << '+' << 3 << 'x' << LA_Empat  << " = " << Luas_Prisma_Segitiga << endl;
cout << "Luas Limas Segi Empat = " << LA_Empat << 'x' << t << "= " << Luas_Limas_Segiempat << endl;
cout << "Luas Tabung = " << "2x" << 3.14 << "x" << r << "x" << '(' << r << '+'<< t <<')' << " = " << Luas_Tabung << endl;
cout << "Volume Tabung = " << 3.14 << 'x' << r << 'x' << r << 'x' << t << " = " << Volume_Tabung << endl;
cout << "Luas Bola = " << "(4/3)x" << 3.14 << 'x' << r << 'x' << r  << "x" << r << " = " << Luas_Bola << endl;
cout << "Volume Bola = " << 4 << 'x' << 3.14 << r << 'x' << r << " = " << Volume_Bola << endl;

}
else {cout << "Program Error";}
}

else { cout << "Program Error" ; }

}
