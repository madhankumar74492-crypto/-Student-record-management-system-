#include"header.h"
void stud_show(struct st** head)
      {
        struct st *temp;
        temp=*head;
	if (*head == NULL)
        {
        printf("No records found.\n");
        return;
        }
	printf("+-------------------------------------------------+\n");
        printf("| ROLL NO |          NAME        |    PERCENTAGE  |\n");
        while(temp!=NULL)
        {
	printf("+-------------------------------------------------+\n");
        printf("| %-7d | %-20s | %8.2f%%      |\n",temp->roll_no,temp->n,temp->percent);
       temp=temp->next;
        }
	printf("+-------------------------------------------------+\n");
      }
