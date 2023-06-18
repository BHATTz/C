#include <stdio.h>

int main()
{
    // int age, marks;
    // printf("Enter your age\n");
    // scanf("%d", &age);

    // printf("Enter your marks\n");
    // scanf("%d", &marks);

    // switch (age)
    // {
    //     case 3:
    //         printf("The age is 3\n");
    //         switch (marks)
    //         {
    //             case 45:
    //                 printf("Your marks are 45");
    //                 break;

    //             default:
    //                 printf("your marks are not 45");
    //         }
    //         break;

    //     case 13:
    //         printf("The age is 13\n");
    //         break;

    //     case 23:
    //         printf("The age is 23\n");
    //         break;

    //     default:
    //         printf("Age is not 3, 13 or 23\n");

    // }

    // int i = 9;

    // switch (i)
    // {
    // case 5:
    //     printf("Value is 7");
    //     break;

    // case 0:
    //     printf("Value is 8");
    //     break;

    // case 9:
    //     printf("Value is 9");
    //     break;

    // default:
    //     printf("Value is not present");
    //     break;
    // }
    
    // print weeks as per user input
    int a;
    printf("ENTER A NUMBER BETWEEN 1 TO 7 :  \n");
    scanf("%d", &a);
    printf("YOU ENTER %d", a);
    switch (a)
    {
    case 1:
        printf("\n MONDAY");
        break;
    case 2:
        printf("\n TUESDAY");
        break;
    case 3:
        printf("\n WEDNESDAY");
        break;
    case 4:
        printf("\n THURSDAY");
        break;
    case 5:
        printf("\n FRIDAY");
        break;
    case 6:
        printf("\n SATURDAY");
        break;
    case 7:
        printf("\n SUNDAY");
        break;

    default:
        printf("\n PLEASE SELECT VALID NUMBER BETWEEN 1 TO 7 !");
        break;
    }
    return 0;
}
