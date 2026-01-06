#include<stdio.h>

int main()
{


   
    int number[5][5]={{12,23,45,67,89},{54,67,98,76,65},{76,78,65,56,54,},{78,65,56,54,43,},{87,76,98,65,56,}};


   for(int i=0; i<5; i++)
   {


        for(int j=0; j<5; j++)
        {


            printf("%d",number[i][j]);



        }
        printf("\n");


   }
    

    return 0;
}