#include <iostream>
#include <deque>

using namespace std;

void mfShowDeque(deque<int> test)
{
    for(auto it=test.begin(); it != test.end(); it++)
        cout<<"\t"<<*it;
    cout<<endl;
}

int main()
{
    deque<int> test;
    test.push_back(5);
    test.push_front(10);
    test.push_back(6);
    test.push_front(50);

    cout<<"the contents of dequeue are: ";
    mfShowDeque(test);

    cout<<"size of deque="<<test.size()<<endl;
    cout<<"max size of deque="<<test.max_size()<<endl;
    cout<<"element at 2nd position of deque="<<test.at(2)<<endl;
    cout<<"front element of deque="<<test.front()<<endl;
    cout<<"back of deque="<<test.back()<<endl;
    test.pop_front();
    mfShowDeque(test);
    test.pop_back();
    mfShowDeque(test);
    return 0;
}


