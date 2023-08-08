#include <iostream>
using namespace std;

int main(){

    int a[5] = {1,2,3,4,5};
    int *p;
    
    p=a;
    
    
    for (int i=0; i<=4; i++){
        cout<<*(a+i)<<endl;
    }

    for(int i=4; i>=0; i--){
        cout<<*(a+i)<<endl;
    }
    
    return 0;
}