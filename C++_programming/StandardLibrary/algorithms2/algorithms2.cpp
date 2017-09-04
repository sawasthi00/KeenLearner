#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
    //vector initialization
    vector<int> test={6,3,5,4,2,7};

    //check if the vector is already partitioned based on some logic
    is_partitioned(test.begin(), test.end(), [](int x){return x%2==1;})?
        cout<<"the vector is partioned":
        cout<<"the vector is not partioned";
    
    cout<<endl;
    //partition the vector using partition
    partition(test.begin(), test.end(), [](int x){return x%2==1;});

    //check if the vector is partitioned based on some logic
    is_partitioned(test.begin(), test.end(), [](int x){return x%2==1;})?
        cout<<"the vector is partioned successfully":
        cout<<"the vector is not partioned successfully";

    //printing the output
    cout<<"below is the partition vector:";
    for(int &x : test)
        cout<<x<<" : ";

     cout<<endl;
    //stable_partition, it palces the elements of partitions in sorted order
    vector<int> test1={100,133,120,145,147,198};
    stable_partition(test1.begin(), test1.end(), [](int x){return x%2==1;});
    
    //display the partition vector
    cout << "The partitioned vector is : ";
    for(int &x : test1)
        cout<<x<<" : ";

    cout<<endl;

    //fetching the partition point
    auto iter = partition_point(test1.begin(), test1.end(), [](int x){return x%2==1;});
    for(auto iter1=test1.begin(); iter1 != iter; iter1++ )
        cout<<*iter1<<":";
    cout<<endl;

    //partition_copy, copying the partitioned containers elements to other loacation(containers)
    vector<int> test2={2, 1, 5, 6, 8, 7};
    vector<int> test3;
    vector<int> test4;

    //checking for number of elements in the vector which meet the below condition (odd elements)
    int n = count_if(test2.begin(), test2.end(), [](int x){return x%2==1;});

    //resizing vector test3, test4
    test3.resize(n);
    test4.resize(test2.size() - n);

    //using partition_copy
    partition_copy(test2.begin(), test2.end(), test3.begin(), test4.begin(), [](int x){return x%2==1;});

    cout << "The original vector is : ";    
    for(int &x : test2)
        cout<<x<<" : ";
    cout<<endl;
    
    cout << "The vector having odd elements : ";
    for(int &x : test3)
        cout<<x<<" : ";
    cout<<endl;

    cout << "The vector having even elements : ";
    for(int &x : test4)
        cout<<x<<" : ";
    cout<<endl;
    
    return 0;
}
