#include<stdio.h>
#include<string.h>

int main()
{

char username[20];
char password[20];
int choice;
int bus_number;
int number_seats;

printf("********BUS RESERVATION SYSTEM********");


printf("\n1. login");
printf("\n2. exit");

printf("\nplease enter your choice: ");
scanf("%d",&choice);

while(1)
{

    printf("please enter your user name: ");
    scanf(" %[^\n]",username);

    printf("please enter your password: ");
    scanf(" %[^\n]",password);
    break;
}
printf("\nlogin successful. welcome,%s\n",username);


printf("\n===user menu===\n");
printf("1. book a ticket\n");
printf("2. cancel a ticket\n");
printf("3. check a bus status\n");
printf("4. logout\n");
printf("enter your choice: ");
scanf("%d",&choice);


if(choice==1)
{

    printf("enter bus number: ");
    scanf("%d",&bus_number);
    printf("enter number of seats: ");
    scanf("%d",&number_seats);
    printf("booking successful! seats booked on bus number:%d,\n",bus_number,number_seats);

    printf("\n===user menu===\n");
    printf("1. book a ticket\n");
    printf("2. cancel a ticket\n");
    printf("3. check a bus status\n");
    printf("4. logout\n");
    printf("enter your choice: ");
    scanf("%d",&choice);

}
else
{

    printf("logout\n");
}


printf("\n===user menu===\n");
printf("1. book a ticket\n");
printf("2. cancel a ticket\n");
printf("3. check a bus status\n");
printf("4. logout\n");
printf("enter your choice: ");
scanf("%d",&choice);


printf("enter your choice: ");
scanf("%d",&choice);

if(choice == 3)
{

    printf("please enter bus number: ");
    scanf("%d",&bus_number);



    if(bus_number==101)
    {

        printf("\nbus number:%d\n",bus_number);
        printf("source city : delhi\n");
        printf("destination city: bihar\n");
        printf("total seats: 50\n");
        printf("available seats: 45\n");
        printf("fare: 500.500\n");


    }else
    {
        printf("bus not found!\n");
    }


}
else if (choice==4)
{
    printf("logged out successfully.\n");
}
else
{

    printf("options not implemented.\n");
}




    return 0;

}

