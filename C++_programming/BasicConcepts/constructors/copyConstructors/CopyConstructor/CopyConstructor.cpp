#include "CopyConstructor.hpp"

using namespace std;

CopyConstructor::CopyConstructor(const char* s)
{
    size = strlen(s);
    str = new char[size+1];
    strcpy(str, s);
}

CopyConstructor::CopyConstructor(const CopyConstructor & obj)
{
    size = obj.size;
    str = new char[size+1];
    strcpy(str, obj.str);
}

void CopyConstructor::mfModifyOrigStr(const char* s)
{
    delete [] str;
    size = strlen(s);
    str = new char[size+1];
    strcpy(str, s);
}


int main(){
    CopyConstructor obj1("object1");
    obj1.mfDisplay();

    CopyConstructor obj2 = obj1;
    obj2.mfDisplay();

    obj1.mfModifyOrigStr("changed object only for object1");
    obj1.mfDisplay();
    obj2.mfDisplay();
    return 0;
}
