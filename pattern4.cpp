 #include<stdio.h>
 int main()
 {
    //hollow triangle
     int i,j;
    int n=4;
     for (i = 1; i <=n; i++)
     {
         for(int k=1;k<=n-i;k++){
             printf(" ");}
         for(int j=1;j<=2*i-1;j++){
         	if((j==1||j==(2*i-1))||i==n)
    		printf("*");
			else
			printf(" ");}
         printf(" \n");
 }
}
