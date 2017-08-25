#include<iostream>

class parameterizedConstructor
{
        int number;
    public:
        parameterizedConstructor(int n){std::cout<<"parameterized constructor called"<< std::endl; number = n;};
        parameterizedConstructor(){std::cout<<"default constructor called"<< std::endl; number = 0;};
};
