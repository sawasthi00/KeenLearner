#include "ProblemCase.hpp"

using namespace std;

ProblemCase::ProblemCase(const char* s)
{
    size = strlen(s);
    str = new char[size+1];
    strcpy(str, s);
}

void ProblemCase::mfModifyOrigStr(const char* s)
{
    delete [] str;
    size = strlen(s);
    str = new char[size+1];
    strcpy(str, s);
}


int main(){
    ProblemCase obj1("object1");
    obj1.mfDisplay();

    ProblemCase obj2 = obj1;
    obj2.mfDisplay();

    obj2.mfModifyOrigStr("changed object only for object1");
    obj1.mfDisplay();
    obj2.mfDisplay();
    return 0;
}
