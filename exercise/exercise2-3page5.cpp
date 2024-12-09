#include <iostream>
using namespace std;
int main (){
    double mark , final20p =0;
    cout << "Please enter your mark : ";
    cin >> mark;

   if ( mark >= 0 && mark <= 100){
    if ( mark >=30 && mark <= 100){
        cout <<"Test 1 --> PASS"<<endl;
        final20p = ((20.0 /100)* mark);
        cout<<" contribution to final mark "<< final20p;
    }
    else {
        cout << "Test ----> FAIL"<<endl;
        cout << "Please re-sit TEST 1"<< endl;
    
    }
   }
   else { 
    cout << "error input";
   }

    int number ;
    int total =0;
    cout << "Please enter a number from 1 to 9 :";
    cin >> number;
    switch (number){
        case 1 :
        case 2 : total =4;
        case 3 : total =8;
        case 4 : total = total + 5;
        case 8 : total += 7;
        default : total += 9;
    }
    total++;
    cout << total << endl;
int x,y,z,result;
cout << "Please enter a 3 number ";
cin >> x >> y >> z;

if (x <= z){
    result = x +z;
    cout << result;
}
else if (x >z || y>z){
    result = x + y;
    cout << result;
}
else {
    cout << "Do not Evaluate";
}
return 0 ;

}
