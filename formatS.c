//format specifier
// #include<stdio.h>
// int main()
// {
//     printf("hello \t hy \n !");
//     int a;
//     float x;
//     char i;
//     printf("\n ENTER A CHARACTER : ");
//     scanf("%c",&i);
//     printf("\n your entered character is %c\t\a",i);
//     printf("\n ENTER A NUMBER : ");
//     scanf("%d",&a);
//     printf("\n your entered number is %d\t\a",a);
//     printf("\n ENTER A DECIMAL NUMBER : ");
//     scanf("%f",&x);
//     printf("\n your entered number is %f\t\a",x);
// }

//use of constant
#include <stdio.h>
#define PI 3.14
/* this is a multiline comment
this is ignored by my compiler
*/
int main()
{
    int a = 8;
    const float b = 7.333;
    // PI = 7.33; //cannot do this since PI is a constant
    printf(" tab character \t\t my backslash  %f", PI);
    // b = 7.22; //cannot do this since b is a constant
    // printf("Hello World\n");
    // printf("The value of a is %d and the value of b is %2.4f\n", a, b);
    // printf("%18.4f this",b);
    return 0;
}

