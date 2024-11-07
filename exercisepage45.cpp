#include <iostream>
using namespace std;
int main (){
    bool more = 1;
    int weightCnt = 0;
    double weight,toweight=0;
    cout <<"Calculate the Average and Total Weight";
    cout <<" Of 5 Students \n\n";
    
    while (weightCnt <= 5){
        cout <<"Enter the weight of a student:";
        cin >>weight;
        toweight += weight;
        weightCnt++;
}
cout <<"\n\nYou have "<<weightCnt<<" weights."<<endl;
cout<< "\nThe average weight is "<< (toweight/weightCnt);
cout << "\nThe total weight is "<<toweight;
cout <<"\nEnd of Program";
return 0;
}