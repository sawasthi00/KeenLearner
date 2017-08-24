#include "SpecializedTemplate.hpp"

using namespace std;

int main()
{
    Test<int>checkForInt;
    Test<float>checkForFloat;
    Test<char>checkForChar;
    Test<double>checkForDouble;
    Test<long>checkForLong;
    return 0;
}
