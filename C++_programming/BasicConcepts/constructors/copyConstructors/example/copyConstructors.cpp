#include "copyConstructors.hpp"

using namespace std;

int main(){
    copyConstructor obj1(10);
    cout<<"object1 created, number="<<obj1.mfGetNum()<<endl;
    
    copyConstructor obj2(obj1);
    cout<<"object2 created, number="<<obj2.mfGetNum()<<endl;

    copyConstructor obj3 = obj1;
    cout<<"object3 created, number="<<obj3.mfGetNum()<<endl;

    return 0;
}
