#include <iostream>
using namespace std;

int main(){
    int mark;
    int test =0;
    do{
        cout << "\nEnter marks for test "<<(test+1)<<" : ";
        cin>> mark;
        cout<< "\nYour mark for test "<<(test+1)<<" is "<< mark<<endl;
        test +=1;
    }while ((mark >=0 ) &&(mark <= 100));

    cout << "\n\nEnd Of Program";
    return 0;
    

}