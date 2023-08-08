#include <iostream>
using namespace std;
float celsiusX;
inline float convertCtoF(float celsiusX){
    return(( celsiusX*9/5)+32);
}

int main(){
    
    cout<<"Enter the temperature in celsius:"<<endl;
    cin>>celsiusX;

    cout<<"Temperature in Fahrenheit :"<<convertCtoF(celsiusX)<<endl;

    return 0;

}