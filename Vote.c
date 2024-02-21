#include<stdio.h>
int main()
{
    int age ;
    printf("Enter the Age ");
    scanf("%d",&age);
    if(age>=18){
        printf("Your okey for voting");
    }
    else{
        printf("You don't try again");
    }
    return 0;
}