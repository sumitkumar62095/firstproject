#include<stdio.h>
int main()
{


    char name[20];
    char address[20];
    

    printf("please enter your name: ");
    scanf(" %[^\n]",name);

    printf("please enter your adress: ");
    scanf(" %[^\n]",address);


    if(strcmp(name, "sumitkumarshroff")==0 && strcmp(address, "mirganjgopalganj")==0)
    {


        printf("you are right name password.welcome:%s",name);
    }
    else
    {

        printf("you are vailed name or password");
    }






    return 0;
}