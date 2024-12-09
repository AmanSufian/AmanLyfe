#include <iostream>
using namespace std;
int main(){
    int choice;
    cout <<"What is your favourite colour ?"<<endl;
    cout << "Enter 1 for white "<<endl;
    cout << "Enter 2 for blue"<< endl;
    cout << "Enter 3 for yellow"<< endl;
    cout <<"Enter 4 for green"<<endl;
    cout <<"Enter your choice:";
    cin >> choice;

    switch(choice){
        case 1: cout << "White. You have a pure heart";
                break;
        case 2: cout << "Blue. Like the sky";
                break;
        case 3: cout << "Yellow. Cheerful alaways.";
                break;
        case 4: cout << "Green. A mix of blue and yellow";
                break;
        default : cout <<"I can't find that."<<endl;
                  cout<<"Thanks for playing with me!" <<endl;
    }
return 0;
}
