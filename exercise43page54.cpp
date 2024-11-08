#include <iostream>
#include <iomanip>
using namespace std;
int main (){
    for (int n= 1; n<=4; n++){
        for (int j=4; j>=n; j--){
        cout << j;
    }
    cout <<endl;
    }
return 0 ;
}