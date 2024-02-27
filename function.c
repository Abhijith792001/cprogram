#include<stdio.h>
#include<stdlib.h>
int sum(int,int);
int main()

{
    int a,b,res;
    printf("Enter the two number \n");
    scanf("%d%d",&a,&b);
    res=sum(a,b);
    printf("The reslut is %d",res);
    return 0;
}


    int sum(int num1,int num2)
    {
    int result;
    result=num1+num2;
    return result;
    }