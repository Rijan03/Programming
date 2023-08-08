#include <iostream>
using namespace std;
void swap(int &x , int &y){
    int temp=x;
    x=y;
    y=temp;
}

int main(){
    int firstnum=10;
    int secondnum=20;

    cout<<"Before swapping:"<<firstnum<<secondnum<<endl;

    swap(firstnum,secondnum);

    cout<<"After swapping:"<<firstnum<<secondnum<<endl;

    return 0;
}