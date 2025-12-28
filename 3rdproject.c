#include<stdio.h>
#include<string.h>

int totalseats=50;
int availableseats=50;

void loginmenu();
void usermenu();
void bookicket();
void cancelticket();
void checkstatus();

int main()
{

    
    loginmenu();

    return 0;
}

void loginmenu()
{


    char username[20];
    char password[20];

    int choice;

    while(1)
    {

        printf("\n**********BUS RESERVATION SYSTEM**********\n");


        printf("1. login\n");
        printf("2. exit\n");


        printf("please enter choice: ");
        scanf("%d",&choice);

        if(choice==1)
        {


            printf("please enter username: ");
            scanf(" %[^\n]",username);


            printf("please enter password: ");
            scanf(" %[^\n]",password);

            if(strcmp(username, "sumitkumar")==0 && strcmp(password, "sumit@25")==0)
            {


                printf("login successful.welcome:%s\n",username);
            }
            else
            {

                printf("\ninvailed username or password!\n");
            }



        }
        else if(choice==2)
        {

            break;
        }
        else
        {
        
            printf("invailed!\n");

        }


    }


}

void usermenu()
{

    int choice;

    while(1)
    {



        printf("\n=====USER MENU=====\n");


        printf("1.book a ticket\n");
        printf("2.cancel a ticket\n");
        printf("check a bus status\n");
        printf("4.logout\n");

        printf("please enter your choice: ");
        scanf("%d",&choice);


        switch (choice)
        {

            case 1:

                bookticket();
                break;
            case 2:
            
                cancelticket();
                break;
            case 3:

                checkstatus();
                break;
            case 4:
            
                printf("\nlogout succssful.\n");

                return;
            default:

                printf("\ninvaild choice!\n");


        }


    }

}

void bookticket()
{

    int busnumber,seat;


    printf("\nenter bus number: ");
    scanf("%d",&busnumber);

    printf("\n enter number seats: ");
    scanf("%d",&seat);

    if(seat <=availableseats)

    {


        availableseats -=totalseats;



        printf("\nbooking successful!%d seats booked on bus number %d\n",seat,busnumber);






    }
    else
    {


        printf("not seats available\n");
    }


}
void cancelticket()
{



    int busnumber,seat;


    printf("\nplease enter a bus number: ");
    scanf("%d",&busnumber);

    printf("\n enter number seats cancel: ");
    scanf("%d",&seat);


    availableseats+=seat;

    if(availableseats > totalseats)



    availableseats =totalseats;

    printf("\n seats cancel successful! %d seats cancel on bus number %d\n,",seat,busnumber);



}

void checkstatus()
{


    int busnumber;

    printf("\nplease enter bus number: ");
    scanf("%d",&busnumber);




    printf("\nbunumber:%d\n",busnumber);
    printf("source city: delhi\n");
    printf("destination city:bihar\n");
    printf("total seats :%d\n",totalseats);
    printf("available seats: %d\n", availableseats);
    printf("fare:500.00\n");

}