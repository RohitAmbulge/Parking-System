#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int bus_slot = 5, car_slot = 5, bike_slot = 20, auto_slot = 15;
int earings = 0, bus_count = 0, car_count = 0, bike_count = 0, auto_count = 0;
int i1 = 0, i2 = 0, i3 = 0;
struct customer
{
    char customerName[10][20], date[10][13];
    int vehicleNumber[10];
} c_data;
void print_receipt(int fees)
{
   
    printf("\nHere you receipt!\n");
    printf("***************************************\n");
    printf("Name: %s\n", c_data.customerName[i2]);
    printf("Vehicle numebr: %d\n", c_data.vehicleNumber[i1]);
    printf("Date: %s\n", c_data.date[i3]);
    printf("Your fees :%d\n", fees);
    printf("***************************************\n");
}
void bus_park()
{
    
    int fees;
    printf("Enter your name: ");
    fflush(stdin);
    gets(c_data.customerName[i2]);
    printf("Enter vehicle number: ");
    scanf("%d", &c_data.vehicleNumber[i1]);
    printf("Enter today's date: ");
    fflush(stdin);
    gets(c_data.date[i3]);
repeat:
    printf("Please enter fees: ");
    scanf("%d", &fees);
    if (fees < 200 || fees > 200)
    {
        printf("Please enter valid amount");
        goto repeat;
    }
    else
    {
        earings = earings + fees;
        printf("Your payment is successfully done\n");
    }
    print_receipt(fees);
    i1++;
    i2++;
    i3++;
    bus_count++;
}
void car_park()
{
    
    int fees;
    printf("Enter your name: ");
    fflush(stdin);
    gets(c_data.customerName[i2]);
    printf("Enter vehicle number: ");
    scanf("%d", &c_data.vehicleNumber[i1]);
    printf("Enter today's date: ");
    fflush(stdin);
    gets(c_data.date[i3]);
repeat:
    printf("Enter parking fees: ");
    scanf("%d", &fees);
    if (fees < 150 || fees > 150)
    {
        printf("Please enter valid amount");
        goto repeat;
    }
    else
    {
        earings = earings + fees;
        printf("Your payment is successfully done\n");
    }
    print_receipt(fees);
    i1++;
    i2++;
    i3++;
    car_count++;
}
void bike_park()
{
   
    int fees;
    printf("Enter your name: ");
    fflush(stdin);
    gets(c_data.customerName[i2]);
    printf("Enter vehicle number: ");
    scanf("%d", &c_data.vehicleNumber[i1]);
    printf("Enter today's date: ");
    fflush(stdin);
    gets(c_data.date[i3]);
repeat:
    printf("Enter parking fees: ");
    scanf("%d", &fees);
    if (fees < 50 || fees > 50)
    {
        printf("Please enter valid amount");
        goto repeat;
    }
    else
    {
        earings = earings + fees;
        printf("Your payment is successfully done\n");
    }
    print_receipt(fees);
    i1++;
    i2++;
    i3++;
    bike_count++;
}
void auto_park()
{
    
    int fees;
    printf("Enter your name: ");
    fflush(stdin);
    gets(c_data.customerName[i2]);
    printf("Enter vehicle number: ");
    scanf("%d", &c_data.vehicleNumber[i1]);
    printf("Enter today's date: ");
    fflush(stdin);
    gets(c_data.date[i3]);
repeat:
    printf("Enter parking fees: ");
    scanf("%d", &fees);
    if (fees < 100 || fees > 100)
    {
        printf("Please enter valid amount");
        goto repeat;
    }
    else
    {
        earings = earings + fees;
        printf("Your payment is successfully done\n");
    }
    print_receipt(fees);
    i1++;
    i2++;
    i3++;
    auto_count++;
}
void park_vehicle()
{
   
    int choose;
again:
    printf("\n1.Bus                     2.Car\n");
    printf("3.Bike                    4.Auto\n");
    printf("Which vehicle you want to park: ");
    scanf("%d", &choose);
    switch (choose)
    {
    case 1:
        if (bus_slot == 0)
        {
            printf("\nSorry! Bus parking slot is not available\n");
        }
        else
        {
            bus_park();
            bus_slot--;
        }
        break;
    case 2:
        if (car_slot == 0)
        {
            printf("\nSorry! Car parking slot is not available\n");
        }
        else
        {
            car_park();
            car_slot--;
        }
        break;
    case 3:
        if (bike_slot == 0)
        {
            printf("\nSorry! Bike parking slot is not available\n");
        }
        else
        {
            bike_park();
            bike_slot--;
        }
        break;
    case 4:
        if (auto_slot == 0)
        {
            printf("\nSorry! Auto parking slot is not available\n");
        }
        else
        {
            auto_park();
            auto_slot--;
        }
        break;
    default:
        printf("Invalid number try again\n");
        goto again;
    }
}
void check_vehicle()
{
    
    char customerName1[20], date1[13];
    int vehicleNumber;
    int i = 0, check1, check2, check3;
    printf("\nPlease enter some details\n");
    printf("Enter Name: ");
    fflush(stdin);
    gets(customerName1);
    printf("Enter vehicle number: ");
    scanf("%d", &vehicleNumber);
    printf("Enter date: ");
    fflush(stdin);
    gets(date1);
    while (1)
    {
        check1 = strcmp(customerName1, c_data.customerName[i]);
        check3 = strcmp(date1, c_data.date[i]);
        if (vehicleNumber == c_data.vehicleNumber[i])
        {
            check2 = 0;
        }
        if (check1 == 0 && check2 == 0 && check3 == 0)
        {
            printf("\nYour vehicle is available here\n");
            break;
        }
        else
        {
            if (i1 == 9)
            {
                printf("\nSorry! your vehicle is not available here\n");
                break;
            }
        }
        i++;
    }
}
void check_insight()
{
    
    printf("\n*************Today's insight***************\n");
    printf("Total earnings: %d\n", earings);
    printf("Total Bus parked: %d\n", bus_count);
    printf("Total Car parked: %d\n", car_count);
    printf("Total Bike parked: %d\n", bike_count);
    printf("Total Auto parked: %d\n", auto_count);
}



void main()
{

    
    
    int choose;
    do
    {
        printf("\n*************Welcome to parking stand**********\n");
        printf("This is vehicle fees chart\n");
        printf("Bus fees 200               Car fees 150\n");
        printf("Bike fees 50               Auto fees 100\n");
        printf("\nEnter 1 for park your vehicle\n");
        printf("Enter 2 for check your vehicle\n");
        printf("Enter 3 for show today insight\n");
        printf("Enter 4 for exit\n");
    again:
        printf("Please choose any option: ");
        scanf("%d", &choose);
        switch (choose)
        {
        case 1:
            park_vehicle();
            break;
        case 2:
            check_vehicle();
            break;
        case 3:
            check_insight();
            break;
        case 4:
            printf("Thank you for using our parking stand\n");
            exit(0);
            break;
        default:
            printf("Invalid number try again\n");
            goto again;
            break;
        }
    } while (choose != 4);
}