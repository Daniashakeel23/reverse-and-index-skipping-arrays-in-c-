#include<iostream>
using namespace std;
int main()
{
    int arr[10], i;
    cout<<"Enter 10 Array Elements: "<<endl;
    for(i=0; i<10; i++)
        cin>>arr[i];
    cout<<"The Original Array is:\n"<<endl;
    for(i=0; i<10; i++)
        cout<<arr[i]<<" ";
    cout<<"\n\nThe Reverse of Given Array is:\n"<<endl;
    for(i=9; i>=0; i--)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}
