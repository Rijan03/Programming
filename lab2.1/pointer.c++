#include <iostream>
using namespace std;

int main(){
    int a ,*b;
    a = 10;
    b = &a; // b will point to a because b has assigned the address of variable a

    cout<<a<<endl; //value of a
    cout<<&a<<endl; // address of a
    cout<<b<<endl; //address of a because of the code b=&a
    cout<<&b<<endl; // address of b
    cout<<*b<<endl; // value of a because b is assigned to carry out address of a


}