#include <iostream>
using namespace std;

    float calculateLateFee ( int);
    void displayMenu();
    void getUserInput(int & );
    void displayLibrary ();
     
    void displayMenu (){
        cout << " \n****************** Library Book Checkout System***********";
        cout << "\n1. Calculate Late Fess";
        cout << "\n2. Display Library Information";
        cout << "\n3. Quit";
    
    }
    float calculateLateFee (int x){
        float y;
        if (x >= 0 && x <= 7)
            y = x*0.50;
        else if ( x>7 && x<=14)
            y = 3.5+(x-7)*1;
        else 
            y = 10.5 + (x-14)*2;

        return y;
    }
    void getUserInput (int &d){
        int z;
        cout << "\nEnter the number of days the book is overdue: ";
        cin >>z;
        d =z;
    }
    void displayLibrary (){
         cout << "\n****************** Library Book Checkout System***********";
        cout << "\nLibrary Name: UTM Library";
        cout <<"\nAddress: Skudai, Johor";
        cout <<"\nContact: (123) 456 7890";
    }
    int main() {
        int choice;
        int day=0;
        do {
            displayMenu();
            cout << "\nEnter your choice(1-3): ";
            cin >> choice;
            
            switch (choice){
            case 1 :{ getUserInput(day);
                     float fee = calculateLateFee(day);
                     cout <<"\nTotal Fee : "<< fee;
                     break ;}
            case 2 : displayLibrary();
                    break;
            case 3 : cout << "Exitting the program. Thank You!";
                    break;
            default : cout << "\nInvalid choice. Please enter a number between 1 to 3.";
            }
        }while(choice !=3);
        

    
    }

