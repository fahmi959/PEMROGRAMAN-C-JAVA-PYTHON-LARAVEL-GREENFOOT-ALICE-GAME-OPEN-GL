#include <iostream>
#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <random>

// Random seed
    std::random_device rd;

    // Initialize Mersenne Twister pseudo-random number generator
    std::mt19937 gen(rd());

    // Generate pseudo-random numbers
    // uniformly distributed in range (1, 100)
    std::default_random_engine e;
    std::uniform_real_distribution<> dis(-987651, 987650); // rage 0 - 1

   

float determinant(float a[200][200],float k);
void cofactor(float num[200][200],float f);
void transpose(float num[200][200],float fac[200][200],float r);
int main()
{
  float a[200][200],k,d;
  int i,j;
  printf("-------------------------------------------------------------\n");
  printf("-----Program invers & determinan matriks n x n by Fahmi------\n");
  printf("-------------------------------------------------------------\n");
  std:: cout << "\n" ;
  printf("Masukkan ordo matriks : ");
  scanf("%f",&k) ;
  std:: cout << "\n" ;
  printf("Masukkan elemen dari matriks %.0f X %.0f \n",k,k);
  for (i=0;i<k;i++)
    {
     for (j=0;j<k;j++)
       {
        printf("A(%d,%d) : ",i+1,j+1);
        float randomX = dis(e) ;
    
        a[i][j] = randomX ;

        printf("%f",a[i][j]);
        std::cout << "\n" ;
        }
    }

std :: cout <<"\n";

    std :: cout << "Matriks A adalah : " << "\n";

    for (i=0;i<k;i++){

        for (j=0;j<k;j++)

           std :: cout <<"    "<<a[i][j];

       std :: cout << "\n" ;

        }

      std ::  cout << "\n";

std :: cout << "\n" ;

  d=determinant(a,k);
  printf("Determinan = %.2f",d);
  if (d==0)
   printf("\nInverse matriks tidak temukan\n");
  else
   cofactor(a,k);
   printf("\n\n**** terimah kasih telah menggunakan program!!! ****");
   getch();
}

/*For calculating Determinant of the Matrix */
float determinant(float a[200][200],float k)
{
  float s=1,det=0,b[200][200];
  int i,j,m,n,c;
  if (k==1)
    {
     return (a[0][0]);
    }
  else
    {
     det=0;
     for (c=0;c<k;c++)
       {
        m=0;
        n=0;
        for (i=0;i<k;i++)
          {
            for (j=0;j<k;j++)
              {
                b[i][j]=0;
                if (i != 0 && j != c)
                 {
                   b[m][n]=a[i][j];
                   if (n<(k-2))
                    n++;
                   else
                    {
                     n=0;
                     m++;
                     }

                      }
               }
             }
          det=det + s * (a[0][c] * determinant(b,k-1));
          s=-1 * s;
          }
    }

    return (det);
}

void cofactor(float num[200][200],float f)
{
 float b[200][200],fac[200][200];
 int p,q,m,n,i,j;
 for (q=0;q<f;q++)
 {
   for (p=0;p<f;p++)
    {
     m=0;
     n=0;
     for (i=0;i<f;i++)
     {
       for (j=0;j<f;j++)
        {
          if (i != q && j != p)
          {
            b[m][n]=num[i][j];
            if (n<(f-2))
             n++;
            else
             {
               n=0;
               m++;
               }
            }
        }
      }
      fac[q][p]=pow(-1,q + p) * determinant(b,f-1);
    }
  }
  transpose(num,fac,f);
}
/*Finding transpose of matrix*/
void transpose(float num[200][200],float fac[200][200],float r)
{
  int i,j;
  float b[200][200],inverse[200][200],d;

  for (i=0;i<r;i++)
    {
     for (j=0;j<r;j++)
       {
         b[i][j]=fac[j][i];
        }
    }
  d=determinant(num,r);
  for (i=0;i<r;i++)
    {
     for (j=0;j<r;j++)
       {
        inverse[i][j]=b[i][j] / d;
        }
    }
   printf("\n\n\nInvers dari Matrix A : \n");

   for (i=0;i<r;i++)
    {
     for (j=0;j<r;j++)
       {
           
         std::cout << "    " <<inverse[i][j] << "    " ;
        }
    printf("\n");
     }
}