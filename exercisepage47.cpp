#include <iostream>
using namespace std;
int main(){
    int N , weightCnt = 0;
    double weight, totWeight = 0;
    cout << "Calculate the Average and Total Weight of student";
    cout<< "\n\nHow many students do you have?";
    cin>>N;
    
    do
    {
        cout <<"Enter the weight of a student:   ";
        cin >> weight;
        totWeight += weight;
        weightCnt++;
    } while (weightCnt < N);
    
    cout <<"\n\nYou have "<< weightCnt <<" weights.";
    cout <<"\nThe Average weight:  "<< (totWeight/weightCnt); 
    cout << "\nThe Total Weight: "<< totWeight;
    cout <<"\n\nEnd Of Program";
    return 0;

    
    
}