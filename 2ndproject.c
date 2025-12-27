#include<stdio.h>
#include<string.h>
int main()
{

char username[20];
char password[20];

int choice;
int bus_number;
int number_seats;
int seats_to_cancel;
while(1)
{
printf("********BUS RESERVATION SYSTEM********\n");

printf("1. login\n");
printf("2. exit\n");

printf("please enter your choice: ");
scanf("%d",&choice);

printf("please enter username: ");
scanf(" %[^\n]", username);

printf("please enter password: ");
scanf(" %[^\n]", password);

printf("\nlogin successful. welcome, %s\n",username);


printf("\n====user menu====\n");

printf("1. book a ticket\n");

printf("2. cancel a ticket\n");

printf("3. check bus status\n");

printf("4. logout\n");

printf("enter your choice: ");
scanf("%d",&choice);

if(choice == 1)
{

    printf("enter bus number: ");
    scanf("%d", &bus_number);

    printf("enter number of seats: ");
    scanf("%d", &number_seats);

    printf("booking successful! %d seats booked on bus %d\n",number_seats,bus_number);


    printf("\n====user menu====\n");

    printf("1. book a ticket\n");

    printf("2. cancel a ticket\n");

    printf("3. check bus status\n");

    printf("4. logout\n");

    printf("please enter choice: ");
    scanf("%d",&choice);

}
if(choice == 2)
{

    printf("enter bus number: ");
    scanf("%d",&bus_number);


    printf("enter  number of seats to cancel : ");
    scanf("%d",&seats_to_cancel);



    printf("\ncancellation successful ! %d seats canceled on bus number %d\n",seats_to_cancel,bus_number);


    printf("\n====user menu====\n");

    printf("1. book a ticket\n");

    printf("2. cancel a ticket\n");

    printf("3. check bus status\n");

    printf("4. logout\n");


    printf("enter your choice: ");
    scanf("%d",&choice);

}

if (choice == 3)
{

    printf("enter  bus number: ");
    scanf("%d", &bus_number);


    printf("\nbus number: 101\n");
    printf("source city: delhi\n");
    printf("destination city: bihar\n");
    printf("total seats: 50\n");
    printf("available seats: 45\n");
    printf("fare: 500.00\n");

    printf("please enter choice: ");
    scanf("%d",&choice);

 
}
if(choice == 4)
{

    printf("invailed");
    break;

}
else
{

    printf("option not implemented.\n");
    
}
}
    return 0;
}
