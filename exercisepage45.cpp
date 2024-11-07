#include <iostream>
using namespace std;
int main (){
    int more = 1,weightCnt = 0;
    double weight,toweight=0;
    cout <<"Calculate the Average and Total Weight";
    cout <<" Of 5 Students \n\n";
    
    while (more == 1){
        cout <<"Enter the weight of a student:";
        cin >>weight;
        toweight += weight;
        weightCnt++;
        cout<<"Anymore weights? Enter 1 for yes or 0 for no:";
        cin >> more;
}
cout <<"\n\nYou have "<<weightCnt<<" weights."<<endl;
cout<< "\nThe average weight is "<< (toweight/weightCnt);
cout << "\nThe total weight is "<<toweight;
cout <<"\nEnd of Program";
return 0;
}