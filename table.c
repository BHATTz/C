//print table 
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,i;
    printf("ENTER A NUMBER FOR TABLE : ");
    scanf("%d",&a);
    printf("TABLE OF %d\n",a);
    for(i=1;i<=10;i++)
    {
      printf("%d*%d=%d \n",a,i,(a*i));
    }
    return 0;
}
