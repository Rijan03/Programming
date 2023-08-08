#include <iostream>

using namespace std;



int square (int n){
    return n*n;

}
int main(){
    int x;
    int (*fptr)(int);
    fptr=square;
    cout<<"Enter integer x: ";
    cin>>x;
    int sq;
    sq = (*fptr)(x);
    cout<<"The square of "<<x<<"is : "<<sq<<endl;

    return 0;
    
}