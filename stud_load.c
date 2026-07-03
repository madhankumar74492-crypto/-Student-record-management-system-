#include "header.h"

void stud_load(struct st **head)
{
    FILE *fp;
    struct st *newnode, *last = NULL;

    fp = fopen("studentdata.txt", "r");

    if (fp == NULL)
    {
        printf("No saved file found.\n");
        return;
    }

    while (1)
    {
        newnode = malloc(sizeof(struct st));

        if (newnode == NULL)
        {
            printf("Memory Allocation Failed\n");
            fclose(fp);
            return;
        }

        if (fscanf(fp,
                   "roll no->%d\nname->%s\npercentage->%f\n",
                   &newnode->roll_no,
                   newnode->n,
                   &newnode->percent) != 3)
        {
            free(newnode);
            break;
        }

        newnode->next = NULL;

        if (*head == NULL)
        {
            *head = newnode;
            last = newnode;
        }
        else
        {
            last->next = newnode;
            last = newnode;
        }
    }

    fclose(fp);
    printf("Student data loaded successfully.\n");
}
