#include <iostream>
#include <list>

using namespace std;

void mfShowList(list<int> test)
{
    for(auto it=test.begin(); it != test.end(); it++)
        cout<<"\t"<<*it;
    cout<<endl;
}

int main()
{
    list<int> list1, list2;

    //inserting the elements
    for(int i=0; i<10; i++)
    {
        list1.push_back(i*2);
        list2.push_front(i*3);
    }

    cout<<"list1 contents are: ";
    mfShowList(list1);
    cout<<endl;

    cout<<"list2 contents are: ";
    mfShowList(list2);
    cout<<endl;

    cout<<"list1 front="<<list1.front()<<endl;
    cout<<"list1 back="<<list1.back()<<endl;

    cout<<"poping list1 front"<<endl;
    list1.pop_front();
    mfShowList(list1);
    cout<<endl;
   
    cout<<"poping list2 front"<<endl; 
    list2.pop_front();
    mfShowList(list2);
    cout<<endl;

    cout<<"reversing list1"<<endl;
    list1.reverse();
    mfShowList(list1);
    cout<<endl;
    
    cout<<"sorting list2"<<endl;
    list2.sort();
    mfShowList(list2);
    cout<<endl;

    return 0;
}
