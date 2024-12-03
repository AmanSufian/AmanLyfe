#include <iostream>
using namespace std;
int main(){
    char star = '*';
    char space = ' ';
    int row = 5;
    int Bilrow,Bilstar, BilSpace;
     
     for ( Bilrow = 1; Bilrow <=row; Bilrow++ ){
        for ( BilSpace = row -Bilrow; BilSpace >=1; BilSpace--){
            cout<< space;
        }
        for (Bilstar = 1; Bilstar <=2*Bilrow -1; Bilstar++){
            cout <<star;

        }
        cout <<"\n";
     }
    
}