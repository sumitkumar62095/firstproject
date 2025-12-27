#include<stdio.h>

void add (int x, int y)
{

    printf("%d",x+y);


}

void subtract(int x, int y)
{

    printf("%d",x-y);
}
void multiply(int x, int y)
{

    printf("%d",x*y);
}



int main()
{


    add(20,30);
    printf("\n");
    subtract(20,10);
    printf("\n");
    multiply(2,2);


    return 0;
}