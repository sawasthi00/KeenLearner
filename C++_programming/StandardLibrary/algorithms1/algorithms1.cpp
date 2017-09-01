#include <iostream>
#include <algorithm>


using namespace std;

int main()
{
    //array functions
    int array[5]={2,3,6,1,10};
    
    //checking if all elements are +ve or not
    all_of(array, array+5, [](int x){return x>0;}) ? 
        cout<<"all elements are positive"<<endl :
        cout<<"all elements are not positive"<<endl;

    all_of(array, array+5, [](int x){return x>5;}) ?
        cout<<"all elements are greater than 5"<<endl :
        cout<<"all elements are not greater than 5"<<endl;

    //checking if any of elements are +ve or not
    any_of(array, array+5, [](int x){return x>0;}) ?
        cout<<"all elements are positive"<<endl :
        cout<<"all elements are not positive"<<endl;

    any_of(array, array+5, [](int x){return x<0;}) ?
        cout<<"at least one element is negative"<<endl :
        cout<<"every element is positive"<<endl;

    //checking none_of
    none_of(array, array+5, [](int x){return x<0;}) ?
        cout<<"every element is positive"<<endl :
        cout<<"at least one elements is negative"<<endl;

    none_of(array, array+5, [](int x){return x>5;}) ?
        cout<<"every element is <= 5"<<endl :
        cout<<"at least one element is greater than 5"<<endl;

    //usage of copy_n
    int source[4]={2,3,1,10};
    int dest[4];
    copy_n(source, 6, dest);

    for(int i=0; i<4; i++)
        cout<<dest[i]<<" ";

    //iota() to assign contineous values to array, starting from the provided integer
    int test[6]={0};
    iota(test, test+6, 100);
   
    cout<<endl; 
    for(int i=0; i<6; i++)
        cout<<test[i]<<" ";
 
    return 0;
}
