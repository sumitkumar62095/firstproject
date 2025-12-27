#include<stdio.h>
#include<string.h>

void signup()
{


    char name[20];
    char password[20];

    printf("please enter your name: ");
    scanf(" %[^\n]",name);

    printf("please enter your password: ");
    scanf(" %[^\n]",password);

}
void loginmenu()
{

    char username[20];
    char password[20];
    char choice;
    while(1)  
    {

        printf("\n**********BUS RESERVATION SYSTEM**********\n");

        printf("\n1. login");
        printf("\n2. exit");

        printf("\nplease enter your choice: ");
        scanf("%d",&choice);


        if(choice==1)
        {


            printf("please enter your name: ");
            scanf(" %[^\n]",username);

            printf("please enter your password: ");
            scanf(" %[^\n]",password);

            if(strcmp(username, "sumitkumar")==0 && strcmp(password, "sumit@25")==0)

            {

                printf("login successful.welcome:%s\n",username);
            }
            else
            {


                printf("envailed user name or password!\n");
            }




        }
        else if(choice==2)
        {

            printf("invailed choice!\n");

        }









    }

}





int main()
{
    
    signup();
    loginmenu();
    usermenu();
    return 0;
}