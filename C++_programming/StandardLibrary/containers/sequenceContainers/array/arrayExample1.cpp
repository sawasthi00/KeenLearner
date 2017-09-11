#include<iostream>
#include<array>
#include<tuple>

using namespace std;

int main()
{
    array<int,5> test={3,5,2,80,65};

    //printing elements of array using at() frunction
    for(int i=0; i<5; i++)
        cout<<test.at(i)<<" ";
    cout<<endl;

    //printing array elements using get()
    cout<<get<0>(test)<<" "<<get<1>(test)<<" "<<get<2>(test)<<" "<<get<3>(test)<<" "<<get<4>(test)<<endl;
    cout<<endl;

    //printing the array elements using [] operator
    for(int i=0; i<5; i++)
        cout<<test[i]<<" ";
    cout<<endl;

    //first element of array
    cout<<"first element of array="<<test.front()<<endl;
 
    //last element of array
    cout<<"last element of array="<<test.back()<<endl;

    //size of array
    cout<<"size of array="<<test.size()<<endl;

    //max size of array
    cout<<"max size of array="<<test.max_size()<<endl;

    array<int,5> test1={30,10,45,77,100};

    cout<<"first array elements before swapping: ";
    for(int i=0; i<5; i++)
        cout<<test[i]<<" ";
    cout<<endl;
 
    cout<<"second array elements before swapping: ";
    for(int i=0; i<5; i++)
        cout<<test1[i]<<" ";
    cout<<endl;

    test.swap(test1);

    cout<<"first array elements after swapping: ";
    for(int i=0; i<5; i++)
        cout<<test[i]<<" ";
    cout<<endl;

    cout<<"second array elements after swapping: ";
    for(int i=0; i<5; i++)
        cout<<test1[i]<<" ";
    cout<<endl;

    array<int,6> test2;
    array<int,0> test3;

    //checking if test3 array is empty
    test3.empty() ? cout<<"the test3 array is empty" :
        cout<<"the test3 array is not empty";

    cout<<endl;

    //filling array with 100
    test2.fill(100);

    //displaying test2 array after filling
    cout<<"test2 array elements after filling: ";
    for(int i=0; i<6; i++)
        cout<<test2[i]<<" ";
    cout<<endl;

    return 0;
}
