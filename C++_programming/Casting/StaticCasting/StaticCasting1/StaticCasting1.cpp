#include "StaticCasting1.hpp"

using namespace std;

int main()
{
    Base baseObj;
    baseObj.mfDisplay();
    Derived* derivedPtr = static_cast<Derived*>(&baseObj);
    if(derivedPtr)
        derivedPtr->mfDisplay();
    else
        cout<<"null pointer received"<<endl;

    Derived derivedObj;
    derivedObj.mfDisplay();
    Base* basePtr = static_cast<Base*>(&derivedObj);
    if(basePtr)
        basePtr->mfDisplay();
    else
        cout<<"null pointer received"<<endl;

    return 0;
}
