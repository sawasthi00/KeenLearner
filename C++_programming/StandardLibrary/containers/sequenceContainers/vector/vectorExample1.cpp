#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> test;

    //filling the vector
    for(int i=1; i<=6; i++)
        test.push_back(i);

    //Displaying the vector
    cout<<"the vector elements:"<<endl;
    for(auto it=test.begin(); it != test.end(); ++it)
        cout<<*it<<" : ";

    cout<<endl;

     //Displaying the vector in reverse order
     cout<<"the vector elements in reverse order:"<<endl;
    for(auto it=test.rbegin(); it != test.rend(); ++it)
        cout<<*it<<" : ";

    cout<<endl;

    //capacity of a vector
    cout<<"capacity of the vector test="<<test.capacity()<<endl;
   
    //size of a vector
    cout<<"size of the vector test="<<test.size()<<endl;

    //maximum size of the vector
    cout<<"size of the vector test="<<test.max_size()<<endl;

    //accesing the element at 2nd position
    cout<<"element at second location="<<test[1]<<endl;
    cout<<"element at second location="<<test.at(1)<<endl;

    //front element
    cout<<"front element="<<test.front()<<endl;
    
    //back element
    cout<<"back element="<<test.back()<<endl;
   
    
    return 0;
}
