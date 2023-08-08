#include <iostream>

using namespace std;

int x=3;  //Global variable
int main(){
    
    int x=2;  //Local variable
    cout<<"Value of global variable is " <<  ::x<<endl;
    cout<<"Value of local variable is " <<  x<<endl;
    cout<<"The sum of global and local is " << ::x+x<<endl;

    return 0;
}