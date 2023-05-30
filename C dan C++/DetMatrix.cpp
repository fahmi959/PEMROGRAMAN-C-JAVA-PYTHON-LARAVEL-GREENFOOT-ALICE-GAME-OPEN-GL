#include <cstdlib>
#include <random>
#include <iostream>
using namespace std;


int main()
    {

// Random seed
    random_device rd;

    // Initialize Mersenne Twister pseudo-random number generator
    mt19937 gen(rd());

    // Generate pseudo-random numbers
    // uniformly distributed in range (1, 100)
    default_random_engine e;
    uniform_real_distribution<> dis(-987.651, 987.650); // rage 0 - 1

   

     int n,i,j,k,l;
    

    float a[257][257];

    cout <<">>> Program Pencarian Invers Matriks Ordo n x n <<<\n    Oleh : ADITYA NOFRIANSYAH. L (F 551 17 050)\n\t   Teknik Informatika Untad"<<endl;
   
    cout <<"====================================================\n";
    cout <<endl<<"Masukkan ordo Matriks A (n x n)"<<endl;

    cout <<"n : ";

    cin >>n;

    cout <<endl;

    for (i=1;i<=n;i++){

        for (j=1;j<=n;j++){

            cout <<"A("<<i<<","<<j<<") : ";

        float randomX = dis(e) ;
    
        a[i][j] = randomX ;

        cout << a[i] [j] ;
        cout << endl ;

           

            }

        }

    cout <<endl;

    cout << "Matriks A adalah : " << endl;

    for (i=1;i<=n;i++){

        for (j=1;j<=n;j++)

            cout <<"    "<<a[i][j];

        cout <<endl ;

        }

        cout << endl;

    //Matriks sisi kanan

    

    //Proses penginversan

    for (i=1;i<=n;i++){

        for (j=1;j<=n+n;j++){

            if (i!=j) a[i][j]=a[i][j]/a[i][i];

            }

        for (j=1;j<=n+n;j++){

            if (i==j) a[i][j]=1;

            }

        //Penjumlahan kesatu baris element

        for (l=1;l<=n;l++){

            if (i!=l) {

                for (j=i+1;j<=n+n;j++){

                    a[l][j]=a[l][j]-(a[i][j]*a[l][i]);

                    }

                }

            }

        //Pembuat nol disekitar matriks kiri

        for (k=1;k<=n;k++){

            if (i!=k) {

                a[k][i]=0;

                }

            }

        }

    //Pencetakan

    cout <<"Maka invers dari matriks A adalah : "<<endl;

   

    for (i=1;i<=n;i++){

        for (j=n+1;j<=n+n;j++)

            cout <<"    "<<a[i][j];

            cout <<endl;

        }

        system("PAUSE");

        return EXIT_SUCCESS;
    }