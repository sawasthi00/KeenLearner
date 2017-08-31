#include "ReinterpretCast.hpp"

using namespace std;

int main()
{
    Base baseObj;
    baseObj.mfDisplay();
    Derived* derivedPtr = reinterpret_cast<Derived*>(&baseObj);
    if(derivedPtr)
        derivedPtr->mfDisplay();
    else
        cout<<"null pointer received"<<endl;

    Derived derivedObj;
    derivedObj.mfDisplay();
    Base* basePtr = reinterpret_cast<Base*>(&derivedObj);
    if(basePtr)
        basePtr->mfDisplay();
    else
        cout<<"null pointer received"<<endl;

    return 0;
}
