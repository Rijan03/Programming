#include <iostream>

using namespace std;

namespace namespace1 {
    int age=25;
    string name = "Rijan";
}

namespace namespace2 {
    int age=52;
    string name = "Maharjan";
}

int main(){
    
    cout<<namespace1::name << endl;
    cout<<namespace2::age << endl;

return 0;
}