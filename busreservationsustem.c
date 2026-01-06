#include<stdio.h>
#include<string.h>

int totalseats[2]={50,50};
int availableseats[2]={50,50};
int busnumber[2]={101,102};
int seats;
int bno;
char source[2][20]={"delhi","bihar"};
char destination[2][20]={"bihar","pune"};
char reg_username[20];
char reg_password[20];
char reg_email[20];

void signup();
void loginmenu();
void usermenu();
void bookticket();
void cancelticket();
void checkstatus();

int isvaildusername(char name[])
{
    

return(strspn(name,"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXZ")==strlen(name));


}


int main()
{

signup();
loginmenu();


    return 0;
}

void signup()
{

    printf("\n***=======SIGNUP=======***\n");
    while(1)
    {
        printf("please enter user name : ");
        scanf(" %[^\n]",reg_username);

        if(isvaildusername(reg_username))
        break;

        else
        {

            printf("username me sirf characters allowed\n");
        }

    }

    printf("please enter password: ");
    scanf(" %[^\n]",reg_password);

    printf("please enter emailid: ");
    scanf(" %[^\n]",reg_email);

    printf("\nsignup successful!please login now.\n");

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
        printf("enter your choice: ");
        scanf("%d",&choice);


        if(choice ==1)
        {


            printf("please enter username : ");
            scanf(" %[^\n]",username);

            if(!isvaildusername(username))
            {


                printf("invailed username(sirf characters allowed)\n");
                continue;
            }


            printf("please enter password: ");
            scanf(" %[^\n]",password);


            if(strcmp(username, "sumitkumar")==0 && strcmp(password, "sumit@25")==0)
            {

                printf("\nlogin successful!welcome:%s\n",username);
                usermenu();
            }
            else
            {

                printf("\nenvailed username or password!\n");
            }

        }
        else if(choice ==2)
        {


            printf("\nthanks you!program exited.\n");
            break;
        }
        else
        {

            printf("\ninvailed choice!\n");
        }

    }
}

void usermenu()
{

    int choice;

    while(1)
    {


        printf("\n======USER MENU======\n");
        printf("1. book a ticket\n");
        printf("2. cancel a ticket\n");
        printf("3. check bus status\n");
        printf("4. logout\n");

        printf("please enter  choice: ");
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

                printf("\nlogout successful.\n");
                return;
            default:

                printf("\ninvailed choice!\n");

        }


    }

}

void bookticket()
{


    printf("\nenter your busnumber(101/102): ");
    scanf("%d",&bno);


    printf("enter number of seats: ");
    scanf("%d",&seats);

    for(int i=0;  i<2; i++)
    {

        if(busnumber[i] == bno)
        {

            if(seats <= availableseats[i])
            {

                availableseats[i] -= seats;

                printf("\nbooking successful!%d seats booked on bus %d\n",seats,bno);



            }
            else
            {

                printf(" No seats available!\n");
            }
            return ;

        }


    }


}

void cancelticket()
{


    printf("please enter busnumber: ");
    scanf("%d",&bno);

    printf("enter number seats cancel: ");
    scanf("%d",&seats);


    for(int i=0; i<2; i++)
    {

        if(busnumber[i]== bno)
        {

            availableseats[i] += seats;

            if(availableseats[i] > totalseats[i])
                availableseats[i] =totalseats[i];


            printf("\nticket cancelled successfully bus %d\n",bno);

            return ;



        }


    }

}

void checkstatus()
{
    printf("please enter number bus check status: ");
    scanf("%d",&bno);

    for(int i=0; i<2; i++)

    {
        if(busnumber[i]==bno)
        {
            printf("\nbus number:%d\n",busnumber[i]);
            printf("source city:%s\n",source[i]);
            printf("destination city: %s\n",destination[i]);
            printf("total seats:%d\n",totalseats[i]);
            printf("available seats:%d\n",availableseats[i]);
            printf("fare: 500.00\n");
            
        }

    }

}
