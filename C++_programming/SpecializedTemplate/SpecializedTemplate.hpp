#include <iostream>

template<class T>
class Test
{
    public:
        Test(){std::cout<<"Normal Template invoked"<<std::endl;}
};

template<>
class Test<int>
{
    public:
        Test(){std::cout<<"Specialized Template invoked"<<std::endl;}
};
