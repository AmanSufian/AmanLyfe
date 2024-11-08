#include <iostream>
#include <iomanip>
using namespace std;
int main (){
    int j;
    cout<<"\n\t  Multiplication Tables";
    cout << "\n_____________________________\n\n";
    int n=1;
   while ( n<=10){
    for (int j=1;j<=10; j++){
        cout <<setw(4)<<j*n;
    }
    n++;
    cout << endl;

   }
   return 0;
   
}