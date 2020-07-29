#include<stdio.h>
int main()
{
    int a,b,choice;
    printf("1 for addition\n");
    printf("2 for subtraction\n");
    printf("3 for multiplication\n");
    printf("4 for division \n");
    printf("Enter your choice:\n");
    scanf("\n%d",&choice);
    switch(choice)
    {
    case 1:
        {
            printf("Enter the number 1:");
            scanf("%d",&a);
            printf("Enter the number 2:");
            scanf("%d",&b);

            printf("result is :\n %d",a+b);
            break;

        }
    case 2:
        {
            printf("Enter the number 1:");
            scanf("%d",&a);
            printf("Enter the number 2:");
            scanf("%d",&b);



            printf("result is :\n %d",a-b);
            break;



        }
         case 3:
        {
            printf("Enter the number 1:");
            scanf("%d",&a);
            printf("Enter the number 2:");
            scanf("%d",&b);

            printf("result is :\n %d",a*b);
            break;

        }
         case 4:
        {
            printf("Enter the number 1:");
            scanf("%d",&a);
            printf("Enter the number 2:");
            scanf("%d",&b);

            printf("result is :\n %d",a/b);
            break;

        }
    }while(choice<4);
}
