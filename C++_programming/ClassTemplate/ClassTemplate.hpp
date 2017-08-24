#include<iostream>

template <class T>
class calculator
{
        T num1, num2;
    public:
        calculator(T n1, T n2){num1 = n1; num2 = n2; };
        T mfAdd(){ return num1 + num2;};
        T mfSubtract(){return num1 - num2;};
        T mfMultiply(){ return num1 * num2;};
        T mfDivide(){return num1 / num2;}; 
        void mfDisplayResults(){
            std::cout<<"Numbers are="<<num1<<", "<<num2<<std::endl;
            std::cout<<"Addition = "<<mfAdd()<<std::endl;
            std::cout<<"Substraction = "<<mfSubtract()<<std::endl;
            std::cout<<"Division = "<<mfDivide()<<std::endl;
            std::cout<<"Multiplication = "<<mfMultiply()<<std::endl;
        };       
};
