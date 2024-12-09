#include <iostream>
using namespace std;
int main (){
    int x= 0;
do {
x--;
if ( x%2== 1) continue;
cout << x << ", ";
} while (x >=-2  );

}