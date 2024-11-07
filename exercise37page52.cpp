#include <iostream>
using namespace std;
int main(){
    cout << "\n\t\t\t   Multiplication Tables";
    cout<< "\n\t\t\t_______________________________\n\n";
    for (int j=1; j<10; j++){
        cout<<"\t"<< j*4;
    }
    cout << endl;

    for (int j =1;j<10;j++){
        cout<<"\t"<< j*5;
    }
    cout<<endl;
    for (int j =2;j<10;j++){
        cout<<"\t"<< j*6;
    }
    cout<<endl;
    return 0;
}