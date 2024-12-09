#include <iostream>
using namespace std;
 int main (){
    int major_code ;
     cout << "Please enter your major code ";
     cin >> major_code;

     switch (major_code ){
        case 1 :cout << "Engineering student.";
                        break;
        case 2 : cout << "Social science student";
                break ;
        case 3 : cout << "Engineering student.";
                        break;

        case 4 : cout << "Social science student";
                break;

        case 5 : cout << "Engineering student.";
                  break;
                    
        default : cout << "Error in major code";
     }
     
     int choice = 6;
     cout << "\nWELCOME TO CYBER BREAKFAST\n";
     cout << "\n1 : Nasi Lemak with KOPI 0";
     cout << "\n2 : Roti Canai with Teh Tarik";
     cout <<"\n3 : Scramble Egg with Iced Milo";
     cout << "\n4 : Mixed Cereals with Strawberry Shake";
     cout <<"\n5 : No thank you, I'm overweight..!\n\n";

     while (choice <1|| choice>5 ){
        cout <<"Enter your choice";
        cin >>  choice;
     }

    switch(choice){
    case 1 : cout<<"That will be 6.50";
                break;
    case 2 : cout << "That will be 3.00";
            break;
    case 3 : cout << "That will be 2.50";
            break;
    case 4 : cout << "That will be 10.9";
            break;
    default : cout << "You look great";
 }
 cout <<"\nPlease make yourself comfortable";
 cout <<"\nEnd of program";
 int count =8;
 while (count++ < 10)
    cout << "I can!\n";

int rep = 0 , b =1 , max=10;
do{
    b++;
    rep += 3;
}while (rep < max);
cout << b<< " "<< rep;
 }