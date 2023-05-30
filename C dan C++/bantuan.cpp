#include <iostream>
using namespace std;

int main (){
    
    double cemilan , hasil , food , drink;
    float harga_food , harga_drink , harga_cemilan , 
    total_food, total_drink, total_cemilan, harga_total ;
    char f , d , c ;

    harga_food = 15000;
	harga_drink = 10000;
	harga_cemilan = 7000;

    food = 0 , drink = 0, cemilan = 0 ;
	

	cout<<"Apakah ingin memesan Food (y/n) ? : " ;
    cin >> f ;

     if (f == 'y') {
	cout<<"Jumlah food    : ";
	cin >> food; 
    cout << "Apakah ingin memesan Drink (y/n) ? : " ;
    cin >> d ;
    cemilan = 0;
    if (d == 'y'){
    cout<<"Jumlah drink   : ";
    cin >> drink ;
   cout << "Apakah ingin memesan Cemilan (y/n) ? : " ; 
   cin >> c ;
    if (c == 'y'){
  cout<<"Jumlah cemilan : ";
	cin >> cemilan; } else { cemilan = 0;} 

    }




    else if (d == 'n'){
        drink = 0;
        cout << "Apakah ingin memesan Cemilan (y/n) ? : " ;
    cin >> c ;
    if (c == 'y' ){
         cout<<"Jumlah cemilan : ";
	cin >> cemilan; }
    else {
        cemilan = 0 , drink = 0;
    }
    
    
} 


    else if (c == 'n') {
        cemilan = 0;
    }
    }
    
    

    else if (f == 'n'){
        food = 0 ;
        cout << "Apakah ingin memesan Drink (y/n) ? : " ;
    cin >> d ;
    if (d == 'y'){
    cout<<"Jumlah drink   : ";
    cin >> drink ;
   cout << "Apakah ingin memesan Cemilan (y/n) ? : " ; 
   cin >> c ;
    if (c == 'y'){
  cout<<"Jumlah cemilan : ";
	cin >> cemilan; } else { cemilan = 0;} 

    }
    else if (d == 'n'){ drink = 0; 
    cout << "Apakah ingin memesan Cemilan (y/n) ? : " ; 
   cin >> c ;
    if (c == 'y'){
  cout<<"Jumlah cemilan : ";
	cin >> cemilan; } else { cemilan = 0;}
    }     }

    else { food = 0 , drink = 0, cemilan = 0;} 
    
	
	cout<<endl;
	cout<<"PESANAN ANDA"<<endl; 
	cout<<"------------------------------"<<endl;
	
	cout<<"Food    : "<<food << " x " <<harga_food <<endl;
	cout<<"Drink   : "<<drink <<" x " << harga_drink <<endl;
	cout<<"Cemilan : "<<cemilan << " x " <<  harga_cemilan <<endl;

    //Operator Penjumlahan
	//food drink dan cemilan
    for (int i = food ; i>0 ;  i--)
    total_food = total_food + harga_food;
    for (int j = drink ; j >0 ; j--)
    total_drink = total_drink + harga_drink;
    for (int k = cemilan ; k > 0 ; k--)
    total_cemilan = total_cemilan + harga_cemilan  ; 

    cout << total_drink << endl;
	
 hasil = total_food + total_drink + total_cemilan;
	cout<<"total yang akan di bayar "<<total_food<<" + "<<total_drink<<" + "<<total_cemilan<<" adalah "<<hasil;

}