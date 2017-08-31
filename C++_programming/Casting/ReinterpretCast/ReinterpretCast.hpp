#include <iostream>

class Base{
    public:
        virtual void mfDisplay(){std::cout<<"This is Base class object"<<std::endl;};
};

class Derived : public Base{
    public:
        void mfDisplay(){std::cout<<"This is Derived class object"<<std::endl;};
};
