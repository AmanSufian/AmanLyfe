#include <iostream>
using namespace std;
int main(){


int n = 10;
while (n>0)
{
    if (n % 2== 1){
        n--;
        continue;
    } 
cout <<n;
n =n -1;
}
return 0;
}