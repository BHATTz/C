// use of control statements
#include <stdio.h>
int main()
{
    // program for voting
    //  int n;
    //  printf("ENTER YOUR AGE FOR VOTING : ");
    //  scanf("%d",&n);
    //  if(n>=18)
    //  {
    //      printf("YOU ARE ELIGIBLE FOR VOTE! \n");
    //      printf("PLEASE VOTE! \n");
    //  }
    //  else
    //  {
    //      printf("NOT ELIGIBLE FOR VOTE! \n");
    //      printf("PLEASE CHECK YOUR AGE FOR VOTE!");
    //  }

    // int age;
    // printf("Enter your age\n");

    // scanf("%d", &age);
    // printf("You have entered %d as your age\n", age);
    // if (age >= 18)
    // {
    //     printf("You can vote!");
    // }

    // else if (age >= 10)
    // {
    //     printf("You are between 10 to 18 and you can vote for kids");
    // }

    // else if (age >= 3)
    // {
    //     printf("You are between 3 to 10 and you can vote for babies");
    // }

    // else
    // {
    //     printf("You cannot vote!");
    // }
    // return 0;

// maths and science - 45
// science - 15
// maths - 15

// print the type of gift you are giving to them
    int a;
    printf("TYPE 1 IF YOU PASSED BOTH MATHS AND SCIENCE \n");
    printf("TYPE 2 IF YOU PASSED IN MATHS \n");
    printf("TYPE 3 IF YOU PASSED IN SCIENCE \n");
    printf("SELECT ANY ONE TYPE! \n");
    scanf("%d",&a);
    printf("\n YOU SELECT TYPE : %d",a);
    if(a==2||a==3)
    {
        printf("\n GIFT SEND SUCCESSFULLY YOU GOT $150!");
    }
    else if(a==1)
    {
        printf("\n GIFT SEND SUCCESSFULLY YOU GOT $300!");    
    }
    else{
        printf("\n PLEASE SELECT VALID TYPE!"); 
    }
}
