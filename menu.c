#include<stdio.h>
int main()
{
    int choice;
    printf("1 Protaa \n2 Chappatti \n3 Vegitable kuruma \n4 Chikken cuury \n");
    scanf("%d",&choice);
    switch(choice){
        case 1:
        printf("You have selected protta");
        break;
        case 2:
        printf("You have selected CHappatti");
        break;
        case 3:
        printf("You have selected Vegitable kuruma");
        break;
        case 4:
        printf("You have selected Chikken cuury \n");
        break;
        default:
        printf("Sooory your need are not available in hotel \nDou want any other items");
    }
    
    return 0;
}