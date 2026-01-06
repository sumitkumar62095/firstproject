#include<stdio.h>

int sum(int a, int b)
{




    printf("%d",a+b);
}
int subtract(int a, int b)
{


    printf("%d",a-b);
}
int multiply(int a ,int b)
{



    printf("%d",a*b);
}









int main()
{


int n;


    printf("1. addition\n");
    printf("2. subtract\n");
    printf("3. multiply\n");

    printf("please enter your number: ");
    scanf("%d",&n);

    int first_number;
    int secoand_number;

    printf("please enter your first number: ");
    scanf("%d",&first_number);

    printf("please enter your secoand number: ");
    scanf("%d",&secoand_number);


    int sum(first_number,secoand_number);
    int subtract(first_number,secoand_number);
    int multiply(first_number,secoand_number);




    return 0;
}