#include<stdio.h>
int main()
{


int number[3][4]={{10,20,30,40},{10,20,30,40,},{10,20,30,40}};

for(int i=0; i<3; i++)
{

    for(int j=0; j<4; j++)
    {

        printf("%d",number[i][j]);
    }

    printf("\n");
}

    return 0;
}