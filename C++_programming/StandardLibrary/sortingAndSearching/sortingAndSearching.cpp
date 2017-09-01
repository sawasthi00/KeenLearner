#include <iostream>
#include <algorithm>

using namespace std;

void show(int *start,int len){
     for(int i=0; i<len; i++)
         cout<<start[i]<<" "<<endl;
}

int main()
{
    int numbers[10]={667,1,40,20,700,45,66,70,5,80};

    cout<<"the numbers before sorting="<<endl;

    show(numbers, 10);

    sort(numbers,numbers+10);

    cout<<"the numbers before sorting="<<endl;
   
    show(numbers, 10);

    int num;

    cout<<"enter the number to be searched:"<<endl;
    cin>>num;

    if(binary_search(numbers, numbers+10, num))
        cout<<num<<" is found in the sorted array"<<endl;
    else
        cout<<num<<" is not found in the sorted array"<<endl;

    return 0;
}
