#include <iostream>
using namespace std;
int main (){
    int total_time;
    cout << "Please enter your time in minutes:";
    cin >> total_time;
   int day = total_time/(60*24);
   int remain_time = total_time %(60*24);
   int hour = remain_time / 60;
   remain_time %= 60;
   int minutes = remain_time % 60;
   cout << " The total time is " << day << "day "<< hour << "hour "<< minutes <<"minutes ";
 return 0;
}