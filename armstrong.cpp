#include <iostream>
using namespace std;
int main()
{
    int num,rem,ans=0;
    cin>>num;
    int temp=num;
    while(num!=0){
    rem=num%10;
    ans+=rem*rem*rem;
    num=num/10;
    }
    if(ans==temp){
	
    cout<<"number is armstrong"<<endl;
    }else{
    cout<<"number is not armstrong"<<endl;}
}