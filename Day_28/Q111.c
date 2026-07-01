#include <stdio.h>

int main()
{
    int totalSeats = 50;
    int bookedSeats = 0;
    int choice, seats;

    while(1)
    {
        printf("\n===== TICKET BOOKING SYSTEM =====\n");
        printf("1. Book Ticket\n");
        printf("2. Check Available Seats\n");
        printf("3. Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter number of seats to book: ");
                scanf("%d", &seats);

                if(seats <= (totalSeats - bookedSeats))
                {
                    bookedSeats += seats;
                    printf("Ticket Booked Successfully!\n");
                }
                else
                {
                    printf("Not Enough Seats Available!\n");
                }
                break;

            case 2:
                printf("Available Seats: %d\n",
                       totalSeats - bookedSeats);
                break;

            case 3:
                printf("Thank You!\n");
                return 0;

            default:
                printf("Invalid Choice!\n");
        }
    }

    return 0;
}