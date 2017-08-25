#include<iostream>
#include<cstring>

class ProblemCase{
        char* str;
        int size;
    public:
        //parameterized constructor
        ProblemCase(const char* s = NULL);
        //destructor
        ~ProblemCase(){delete [] str;};
        //function to modify the original string
        void mfModifyOrigStr(const char* s);
        void mfDisplay(){std::cout<<"str="<<str<<std::endl;};
};
