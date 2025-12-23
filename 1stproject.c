#include<stdio.h>
#include<string.h>

int main()
{

char username[20];
char password[20];
int choice;

printf("********BUS RESERVATION SYSTEM********");


printf("\n1. login");
printf("\n2. exit");

printf("\nplease enter your choice: ");
scanf("%d",&choice);

if(choice==1)
{

    printf("please enter your user name: ");
    scanf("%s",&username);

    printf("please enter your password: ");
    scanf("%s",&password);
}
printf("\n===user menu ===\n");
printf("1. book a tick\n");
printf("2. cancel a ticket\n");
printf("3. check a bus status\n");
printf("4. logout\n");
printf("enter your choice: ");
scanf("%d",&choice);

    return 0;

}

