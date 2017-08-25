#include<iostream>
#include<cstring>

class CopyConstructor{
        char* str;
        int size;
    public:
        //parameterized constructor
        CopyConstructor(const char* s = NULL);
        CopyConstructor(const CopyConstructor & obj);
        //destructor
        ~CopyConstructor(){delete [] str;};
        //function to modify the original string
        void mfModifyOrigStr(const char* s);
        void mfDisplay(){std::cout<<"str="<<str<<std::endl;};
};
