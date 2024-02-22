#include<stdio.h>
int main()
{
    int a[10],i,limit;
    printf("Enter the limti");
    scanf("%d",&limit);
    printf("Enter the value");
    for(i=0;i<limit;i++){
        scanf("%d",&a[i]);
    }
    printf("ENteterd value are ");
    for(i=0;i<limit;i++)
    {
        printf("%d\t",a[i]);
    }
     
}