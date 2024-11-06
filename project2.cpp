#include <iostream>
using namespace std;
int main(){
    float MYR_TO_MYR = 0.5997;
    float MYR;
    cout << " Please enter the value money in RM:";
    cin >> MYR;
    float turkish_lira = MYR * MYR_TO_MYR;
    cout <<"The money value in Turkish Lira is" <<turkish_lira;30
    return 0;
}