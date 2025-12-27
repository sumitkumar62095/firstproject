#include<stdio.h>

void sum(int first_number, int secoand_number)
{


    printf("%d",first_number+secoand_number);


}
void subtract(int first_number, int secoand_number)
{


    printf("%d",first_number-secoand_number);

}

int main()
{

int n;

printf("\n1. addition");
printf("\n2. subtract");

printf("please enter your choice: ");
scanf("%d",&n);

int first_number=20;
int secoand_number=30;

if(1==n)
{

    sum(first_number,secoand_number);
}
if(2==n)  
{
    subtract(first_number,secoand_number);
} 

    return 0;
}