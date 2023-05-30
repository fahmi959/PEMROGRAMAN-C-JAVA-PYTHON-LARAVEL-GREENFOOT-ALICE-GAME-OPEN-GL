#include <iostream>
#include <iomanip>
using namespace std;

const int N = 5;
int main () {

cout << setw(4) << " N " ;
for (auto i{1}; i<=N; i++){
    cout << setw(3);
    cout << i << " " ;
}
cout << endl;

for (auto i {1}; i<N ; i++){
    cout << setw(3) ;
    cout << i << " " ;
    for (auto j {1}; j<=N; j++) {
        if (i == 3){
             cout << setw(3) ;
        cout << "0" << " ";
        }
        else{
        cout << setw(3) ;
        cout << "B" << " ";
        }
    }
    cout << endl;
}

    return 0;
}