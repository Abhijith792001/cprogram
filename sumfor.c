#include<stdio.h>
int main(void)
{
    int n,sum=0,i;
    printf("Enter the number ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum=sum+i;    
    }
    printf("Result is %d",sum);
    return 0;
}