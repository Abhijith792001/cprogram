#include<stdio.h>
int main(){
int value[100],i,limit,searchKey,flag=0;
printf("enter the number limit of array \n ");
scanf("%d",&limit);

printf("Enter the values \n");
for(i=0;i<limit;i++){
    scanf("%d",&value[i]);
}

printf("Enter the searcKey \n");
scanf("%d",&searchKey);

for(i=0;i<limit;i++){
    if(searchKey==value[i]){
    flag=1;
    break;
    }
}
if (flag==1)
{
    printf("the postion found %d",i+1);
}
else{
    printf("Can't found");
}

return 0;
}
