#include<iostream>
using namespace std;
int main()
{
int arr[10] ,a,sum=0;
cout<<"Enter 10 numbers"<<endl;
for(a=0;a<10;a++)
{
cin>>arr[a];
}
for(a=0;a<=10;a++)
{
if(arr[3]==a||arr[5]==a)	
continue;
sum=sum+a;
}
cout<<"sum of array"<<sum<<endl;
return 0;
}
    