#include "DynamicCasting.hpp"

using namespace std;

int main()
{
    Base baseObj;
    baseObj.mfDisplay();
    Derived* derivedPtr = dynamic_cast<Derived*>(&baseObj);
    if(derivedPtr)
        derivedPtr->mfDisplay();
    else
        cout<<"null pointer received"<<endl;

    Derived derivedObj;
    derivedObj.mfDisplay();
    Base* basePtr = dynamic_cast<Base*>(&derivedObj);
    if(basePtr)
        basePtr->mfDisplay();
    else
        cout<<"null pointer received"<<endl;

    return 0;
}
