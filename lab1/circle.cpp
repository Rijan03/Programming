#include <iostream>
using namespace std;
#define PI 3.14

int main()
{
    float radius,circumference,area;
    cout<<"Enter the radius of the circle:";
    cin>>radius;
    area=(PI*radius*radius);
    circumference=2*PI*radius;

    cout<<"The area  of the circle is:"<<area<<endl;
    cout<<"The circumference of the circle is:"<<circumference<<endl;


    return 0;
} 