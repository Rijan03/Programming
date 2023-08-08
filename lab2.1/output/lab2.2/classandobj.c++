#include <iostream>

using namespace std;

class myClass{
    private:
    int i;
    float f;
    char c;

    public:
    void getdata(){
        cout<<"Input as int , float, char:";
        cin>>i>>f>>c;

    }
    void showdata(){
        cout<<"Int="<<i<<endl;
        cout<<"Float="<<f<<endl;
        cout<<"Char="<<c<<endl;

    }
};

    int main(){
        myClass obj1,obj2;
        cout<<"Input Object.1=";
        obj1.getdata();
        cout<<"Input Object2:";
        obj2.getdata();
        cout<<"Object1="<<endl;
        obj1.showdata();
        cout<<"Object2:"<<endl;
        obj2.showdata();

        return 0;

    }
    
