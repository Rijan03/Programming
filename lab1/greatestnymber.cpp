#include <iostream>
using namespace std;
int main(){

    int num[5];
    int i;
    cout<<"Enter any five numbers:"<<endl;

    
    for(i=0;i<5;i++){
        
        cin>>num[i];
       }
        for(i=0;i<5;i++){
            for(int j=i+1;j<5;j++){
                if(num[i]>num[j]){
                    int temp=num[i];
                    num[i]=num[j];
                    num[j]=temp;
                }
            }
        }       cout<<"The greatest number of the array is:"<<num[4]<<endl;
    return 0;
}