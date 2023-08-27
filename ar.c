// #include <stdio.h>

// void main() 
// {
//   int ar, x=2, y=2;
//   ar = x * y;
//   printf("\n area of the rectangle is : %d\n", ar);
// }


// #include <stdio.h>

// void main() 
// {
//   int ar, x, y;
//   printf("enter length of a rectangle : ");
//   scanf("%d", &x);
//   printf("enter width of a rectangle : ");
//   scanf("%d", &y);
//   ar = x * y;
//   printf("\n area of the rectangle is : %d\n", ar);
// }


// #include <stdio.h>

// void main() 
// {
//   int r,h;
//   float ar, pi=3.14159265359;
//   printf("enter the radius of a circle : ");
//   scanf("%d", &r);
//   printf("enter the height of a circle : ");
//   scanf("%d", &h);
//   ar = pi*r*r*h;
//   printf("\n volume of the circle is : %f\n", ar);
// }


// #include <stdio.h>

// void main() 
// {
//   int temp, d;
//   printf("enter degree in celsius : ");
//   scanf("%d", &d);
//   temp = (d*9/5)+32;
//   printf("\n degree in Fahrenheit : %d\n", temp);
// }


#include <stdio.h>

void main() 
{
  int si, p, r, t;
  printf("enter profit : ");
  scanf("%d", &p);
  printf("enter rate : ");
  scanf("%d", &r);
  printf("enter time : ");
  scanf("%d", &t);
  si = (p*r*t)/100;
  printf("\Simple Intrest is : %d\n", si);
}