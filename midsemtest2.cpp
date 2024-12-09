#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int getProblem();
void getRateDropfactor(double &);
void getKgRateConc(double &);
double figDropsMin( );
double byWeight();

int getProblem(){
    int prblem;
    cout <<"\nEnter the number of the problem you wish to solve.\n";
    cout <<"\tGIVEN A MEDICAL ORDER IN";
    cout <<"\tCALCULATE RATE IN";
    cout <<"\n(1) ml/hr & tubing drop factor "<<"\t\tdrops/min";
    cout<<"\n(2) mg/kg/hr & concentration in mg/ml"<<"\tml/hr";
    cout <<"\n(3) QUIT";
    cout <<"\n\nProblem => ";
    cin >> prblem;
    return prblem;

}
void getRateDropfactor(double &a){
    double ml_hr,drops_ml;
    cout <<"\nEnter rate in ml/hr => ";
    cin >>ml_hr;
    cout<<"\nEnter tubing's drop factor(drops/ml) => ";
    cin >>drops_ml;
    a= (ml_hr/60)*drops_ml;

}
void getKgRateConc(double &b){
    double mghr,weight,mgml;
    cout << "\nEnter rate in mg/hr => ";
    cin >>mghr;
    cout <<"\nEnter patient weight in kg =>" ; 
    cin>>weight;
    cout<<"\nEnter concentration in mg/ml => " ;
    cin >>mgml;
    b = mghr*weight*mgml;

}
double figDropsMin(double c){
    double d = ceil(c);
    return d;
}
double byWeight(double e){
    double f = floor(e);
    return f;
}
int main(){
    int choice;
    double rgf= 0;
    double kgc = 0;
     cout <<"INTRAVENOUS RATE ASSISTANT\n\n";
     do{
         choice =getProblem();
         switch (choice){
            case 1 : getRateDropfactor(rgf);
                     rgf =figDropsMin(rgf);
                     cout << "\nThe drop rate per minute is "<<rgf;
                     break;
            case 2 : getKgRateConc(kgc);
                     kgc =byWeight(kgc);
                     cout << "\nThe rate in millilitres per hour is "<<kgc;
                     break;
            case 3 : cout <<"\nYou have chosen to quit the program.";
                    cout << "\nThank you for using our system.";
                    break;
            default : cout<<"Please run the system again and choose a problem number between 1 and 3";

         }

     }while(choice !=3);
     return 0;
    
}