#include <iostream>
using namespace std;


class set{
    private:
    int m,n;
    public: 
    void input();
    int largest();
    void display();
}

inline int set:: largest()
{
    if (m>=n) return m;
    else return n;

}

inline void set:: input()
{
    cout<<"Input values of m & n:";
    cin>>m>>n;

}

void set :: Display()
{
    int l =largest ();
    cout<<"largest value ="<<l<<endl;
}
