#include <iostream>

class copyConstructor
{
        int number;
    public:
        copyConstructor(const copyConstructor &obj){number = obj.number; std::cout<<"copy constructor called"<<std::endl;};
        copyConstructor(int n){std::cout<<"parameterized constructor callled"<<std::endl;};
        int mfGetNum(){return number;};
};
