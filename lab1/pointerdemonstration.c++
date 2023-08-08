#include <iostream>
using namespace std;

int main(){
    int a;
    int *aptr;
    a=7;
    aptr = &a; //aptr set to address of a

    cout<<"The address of a is "<<aptr<<endl;
    cout<<"The value of aptr is"<<aptr<<endl;
    cout<<"The value of a is"<<a<<endl;
    cout<<"THe value of *aptr is "<<*aptr<<endl;
    cout<<"showing that * and & are inverses of each other."<<endl;
    cout<<"&*aptr="<<&*aptr<<endl<<"*&aptr="<<"*&aptr";
}