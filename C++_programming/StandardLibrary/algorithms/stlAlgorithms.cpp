#include<iostream>
#include <algorithm>
#include<vector>
#include<numeric>

using namespace std;

int main(){
    int array[]={50,100,10,20,35,66,82,70,66,900,10};
    int size = sizeof(array)/sizeof(array[0]);

    vector<int>arrayData(array, array+size);

    for(int i=0; i<size; i++)
        cout<<arrayData[i]<<" "<<endl;

    //sorting the data
    sort(arrayData.begin(), arrayData.end());

    for(int i=0; i<size; i++)
        cout<<arrayData[i]<<" "<<endl;

    //reversing the vector
    reverse(arrayData.begin(), arrayData.end());

    for(int i=0; i<size; i++)
        cout<<arrayData[i]<<" "<<endl;

    sort(arrayData.begin(), arrayData.end());
    for(int i=0; i<size; i++)
        cout<<arrayData[i]<<" "<<endl;

    cout<<"the maximum elements of the vector="<<*max_element(arrayData.begin(), arrayData.end())<<endl;
    cout<<"the minimum elements of the vector="<<*min_element(arrayData.begin(), arrayData.end())<<endl;
    cout<<"the sum of elements of the vector="<<accumulate(arrayData.begin(), arrayData.end(),0)<<endl;   


    //using count and find
    cout<<"counting number 50 counts in the vector="<<count(arrayData.begin(), arrayData.end(),50)<<endl;
    cout<<"counting number 1 counts in the vector="<<count(arrayData.begin(), arrayData.end(),1)<<endl;
    find(arrayData.begin(), arrayData.end(),2) != arrayData.end() ? cout<<"2 is there in the vector"<<endl : cout<<"2 is there in not the vector"<<endl;
    find(arrayData.begin(), arrayData.end(),900) != arrayData.end() ? cout<<"900 is there in the vector"<<endl : cout<<"900 is there in not the vector"<<endl;

    //lower_bound, upper_bounds
    auto lowerBound=lower_bound(arrayData.begin(), arrayData.end(),10);
    cout<<"lower bound of 10 (not less than  10) in the vector="<<lowerBound-arrayData.begin()<<endl;
    auto upperBound=upper_bound(arrayData.begin(), arrayData.end(),50);
    cout<<"upper bound of 10 (not greater than 50) in the vector="<<upperBound-arrayData.begin()<<endl;

    //erasing/deleting the elements
    arrayData.erase(arrayData.begin()+2);
    size = arrayData.size();
    for(int i=0; i<size; i++)
        cout<<arrayData[i]<<" "<<endl;

    //deleting duplicate entries
    arrayData.erase(unique(arrayData.begin(), arrayData.end()));
    size = arrayData.size();
    for(int i=0; i<size; i++)
        cout<<arrayData[i]<<" "<<endl;

    //next and previous permutations of the vector
    next_permutation(arrayData.begin(), arrayData.end());
    for(int i=0; i<size; i++)
        cout<<arrayData[i]<<" "<<endl;
    
    prev_permutation(arrayData.begin(), arrayData.end());
    for(int i=0; i<size; i++)
        cout<<arrayData[i]<<" "<<endl;

    cout<<"distance between forst and the maximum element="<<distance(arrayData.begin(), max_element(arrayData.begin(), arrayData.end()))<<endl;

    return 0;
}
