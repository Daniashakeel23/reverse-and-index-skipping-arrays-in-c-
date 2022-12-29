#include<iostream> 
using namespace std; 
int main()
{
int arr[10], i, sum = 0 ;
cout<<"enter 10 numbers"<<endl;
 for (i=0;i<10;i++)
{

cin>>arr[i];
}

 for (i=0;i<=10;i++)
  {
  	if(arr[3]==i||arr[5]==i)
continue;
sum=sum+i ;
}

cout <<"sum of array" <<sum<<endl;
return 0;

}
