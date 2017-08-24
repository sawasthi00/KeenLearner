#include "ClassTemplate.hpp"

using namespace std;

int main()
{
    int int1, int2;
    float float1, float2;

    cout<<"Enter two integers for calculation"<<endl;
    cin>>int1;
    cin>>int2;

    cout<<"Enter two floats for calculation"<<endl;
    cin>>float1;
    cin>>float2;

    calculator<int> intCal(int1, int2);
    calculator<float> floatCal(float1, float2);

    cout<<"displaying integer calculations";
    intCal.mfDisplayResults();

    cout<<"displaying float calculations";
    floatCal.mfDisplayResults();

    return 0;
}
