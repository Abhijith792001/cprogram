#include<stdio.h>
int main()
{
    int num1,num2,choise,result;
    printf("Enter a two number \n");
    scanf("%d%d",&num1,&num2);
    printf("1. Add \n2. Subtract \n3. Multiplication \n4. Division \nEnter Your choice = ");
    scanf("%d",&choise);
    if(choise==1){
    result=num1+num2;
    printf("Result is = %d",result);
}
else if(choise==2){
    result=num1-num2;
    printf("Result is = %d",result);
}
else if (choise==3){
    result=num1*num2;
    printf("Result is = %d",result);
}
else if (choise==4){
    result=num1/num2;
    printf("Result is = %d",result);
}
else{
    printf("Your are floul");
}
return 0;
}