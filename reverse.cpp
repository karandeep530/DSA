#include <iostream>
using namespace std;
int main()
{
    int num,ans=0,sum=0,rem;
    cin>>num;
    while(num)
    {
        rem=num%10;
        ans=ans*10+rem;
        sum=sum+rem;
        num=num/10;
    }
    cout<<"reverse of the number is: "<<ans<<endl;
    cout<<"sum of the nummber is: "<<sum<<endl;
    return 0;
}