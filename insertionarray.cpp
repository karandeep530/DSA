#include<iostream>
using namespace std;
int main()
{
    int n;
    int arr[n+1];
    cout<<"Enter size of array"<<endl;
    cin>>n;
    cout<<"Enter elements of array"<<endl;6
    for(int i=0;i<n;i++)
    cin>>arr[i];
    for(int i=n-1;i>=2;i--)
    arr[i+1]=arr[i];
    arr[2]=25;
    cout<<"array after insertion is"<<endl;
    for(int i=0;i<=n;i++)
    cout<<arr[i]<<" ";
    return 0;
}