#include <iostream>
using namespace std;

struct details{
    int age;
    float percentage;
};
int main(){
    details d1,d2;
    details d3={12,14.5};
    cout<<"Enter the age";
    cin>>d1.age;
    cout<<"Enter the percentage in exam";
    cin>>d1.percentage;
    d2.age=d1.age+d3.age;
    d2.percentage=d1.percentage+d3.percentage;
    cout<<d1.age<<"years"<<d1.percentage<<"%"<<"+";
    cout<<d3.age<<"years"<<d3.percentage<<"%"<<"=";
    cout<<d2.age<<"years"<<d2.percentage<<"%"<<endl;
}