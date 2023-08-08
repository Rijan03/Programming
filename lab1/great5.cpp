#include <iostream>
using namespace std;
int main(){
    int num[5];
    cout<<"Enter any five numbers:";
    int i,j;
    for(i=0;i<5;i++){
        cin>>num[i];
       }
        for(i=0;i<5;i++){
            for( j=i+1;j<num[i];j++){
                if(num[i]>num[j]){
                    int temp=num[i];
                    num[i]=num[j];
                    num[j]=temp;
                }
            }
        }       cout<<"The greatest nunmber of the array is:"<<num[5]<<endl;
    return 0;
}