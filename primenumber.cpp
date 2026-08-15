#include<stdio.h>
int main()
{
    int n,i=2,prime=0; 
    printf("Enter any number");
     scanf("%d",&n); 
     if(n<=1) 
     {
         printf("Not prime number") ;
        } 
        else{ while(i<n) 
            { if(n%i==0) 
                { prime=1; 
                } 
                i++ ;
            } 
            if(prime==0) 
            printf("Prime number");
             else printf("Not a prime number"); } return 0; 
}