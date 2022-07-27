#include<stdio.h>
int main()
{
    int choice,num1,num2,add,sub,mul,div;
    printf("******************************************\n");
    printf("Enter any two number\n");
    scanf("%d%d",&num1,&num2);
    printf("******************************************\n");
    printf("Enter your choice 1. for addition, 2 for subtraction , 3 for multiplication and 4 for division\n");
    scanf("%d",&choice);
    printf("\n******************************************\n");

    switch (choice)
    {
    case 1:
        add=num1+num2;
        printf("Print the addition of given numbers is %d",add);
        break;
    case 2:
        sub=num1-num2;
        printf("Print the subtraction of given numbers is %d",sub);
        break;
    case 3:
        mul=num1*num2;
        printf("Print the multiplication of given numbers is %d",mul);
        break;
    case 4:
        div=num1/num2;
        printf("Print the multiplication of given numbers is %d",div);
        break;
    default:
        printf("Invalid choice please enter valid choice\n");
        break;
    }
    printf("\n******************************************\n");
    return 0;
}