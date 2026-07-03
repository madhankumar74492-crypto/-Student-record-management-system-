#include"header.h"
void stud_save(struct st**head)
       {
        FILE *fp;
       struct st *temp;

      fp = fopen("studentdata.txt", "w");

      if(fp == NULL)
      {
      printf("File cannot be opened.\n");
      return;
      }

      temp = *head;

       while(temp != NULL)
       {
        fprintf(fp, "roll no->%d\nname->%s\npercentage->%.2f\n",
            temp->roll_no,
            temp->n,
            temp->percent);

        temp = temp->next;
        }

        fclose(fp);

        printf("Data saved successfully.\n");
        }

