#include <iostream>
#include <math.h>
#define PI 3.14

using namespace std;

float area_calculator(float radius){
    return PI*radius*radius;
}

int main(){
    cout<<"Input radius:";
    float radius; 
    cin>>radius;

    cout<<"The area of the circle is: "<< area_calculator( radius)<<endl;

    return 0;
}