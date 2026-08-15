 #include<stdio.h>
 int main()
 {

     int i,j;
    int count=5;
     for (i = 1; i <=count; i++)
     {
         for(int k=1;k<=count-i;k++){
             printf(" ");}
         for(j=1;j<=2*i-1  ;j++){
            if((j==1||j==2*i-1)||i==count)
         printf("*");
        else
    printf(" ");}
         printf(" \n");
 }
}