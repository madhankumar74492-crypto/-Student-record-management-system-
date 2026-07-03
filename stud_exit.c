#include"header.h"

void stud_exit(struct st **head)
{
    char op;

    printf("S/s : Save and Exit\n");
    printf("E/e : Exit Without Saving\n");
    printf("Enter your choice : ");

    scanf(" %c", &op);   // Space before %c

    switch(op)
    {
        case 'S':
        case 's':
            stud_save(head);
            exit(1);

        case 'E':
        case 'e':
            printf("Exiting Without Saving Data...\n");
            exit(0);

        default:
            printf("Invalid Option!!\n");
            break;
    }
}

