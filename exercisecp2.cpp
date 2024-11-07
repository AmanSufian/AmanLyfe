#include <iostream>
using namespace std;
int main(){
    int kira = 5;
    int nilai_pertama = 10,nilai_kedua, nilai_ketiga ;
    nilai_kedua= 5* kira-- + nilai_pertama;
nilai_ketiga = 5* --kira +nilai_pertama;
cout << nilai_kedua<<endl;
cout << nilai_ketiga;
return 0;
}