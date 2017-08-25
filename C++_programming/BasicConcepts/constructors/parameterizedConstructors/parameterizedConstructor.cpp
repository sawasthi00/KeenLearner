#include "parameterizedConstructor.hpp"

using namespace std;

int main(){
    parameterizedConstructor obj1(5);
    
    //if paramterized constructor is defined and we want to create an object using defalut  constructor
    //we need to define the default constructor as well

    parameterizedConstructor obj2;
    return 0;
}
