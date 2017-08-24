#include<iostream>

using namespace std;

template <class T>
T mfIsGreater(T n1, T n2)
{
    return (n1 > n2) ? n1 : n2;
}

int main()
{
    int int1,int2;
    float float1, float2;
    char char1,char2;

    cout<<"Enter two integers"<<endl;
    cin>>int1;
    cin>>int2;
  
    cout<<"the greater integer is = "<<mfIsGreater(int1, int2)<<endl;

    cout<<"Enter two floats"<<endl;
    cin>>float1;
    cin>>float2;

    cout<<"the greater float is = "<<mfIsGreater(float1, float2)<<endl;

    cout<<"Enter two characters"<<endl;
    cin>>char1;
    cin>>char2;

    cout<<"the greater char is = "<<mfIsGreater(char1, char2)<<endl;

    return 0;
}
