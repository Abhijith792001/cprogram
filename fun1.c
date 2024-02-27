#include<stdio.h>
#include<stdlib.h>
int sum();
int main()
{
    int k;
    k=sum();
    printf("%d",k);
    return 0;
}
int sum(){
int a,b,c;
printf("Enter the two number \n");
scanf("%d%d",&a,&b);
c=a+b;
return c;
}