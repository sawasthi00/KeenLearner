#include <iostream>
#include <forward_list>

using namespace std;

int main()
{
    forward_list<int> fwList = {4,10,2,1,10};

    //Insert 20 at front
    fwList.push_front(20);

    cout<<"the fwList after front insertion: ";
    for (int&c : fwList) 
        cout << c << " ";
    cout << endl;

    //Inserting value 50 at front using emplace_front()
    fwList.emplace_front(50);

    cout<<"the fwList after emplace_front insertion: ";
    for (int&c : fwList) 
        cout << c << " ";
    cout << endl;

    //poping front
    fwList.pop_front();
    cout<<"the fwList after pop_front: ";
    for (int&c : fwList)
        cout << c << " ";
    cout << endl;

    //usage of insert_after()
    fwList.insert_after(fwList.begin(), {70,71,72});

        
        
    return 0;
}
