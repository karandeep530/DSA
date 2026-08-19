#include<iostream>
using namespace std;
int main()
{
    int n;
    int arr[n+1];
    int p;
    cout<<"Enter size of array"<<endl;
    cin>>n;
    cout<<"Enter elements of array"<<endl;
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cout<<"Enter index to be deleted"<<endl;
    cin>>p;
    if(p>n)
    cout<<"Index not found"<<endl;
    else{
	for(int i=p+1;i<n;i++)
    arr[i-1]=arr[i];
    cout<<"array after deletion is"<<endl;
    for(int i=0;i<n-1;i++)
    cout<<arr[i]<<" ";}
    return 0;
}