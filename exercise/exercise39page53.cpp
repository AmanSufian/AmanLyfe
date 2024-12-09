#include <iostream>
using namespace std;
int main(){
    cout<<"\n\n  Multipilication Tables";
    cout << "\n____________________________\n\n";
    
    for (int n= 4;n<=9;n++){
       
        for (int j=1 ;j<=10; j++){
            cout << j*n<<" ";
        }
         cout<<endl;
    }
    cout << "\nEnd of progam";
    return 0;
}