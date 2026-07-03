#include"header.h"
void stud_mod(struct st**head)
{
    struct st *temp;
    struct st *prevnode = NULL;
    char choice;
    int oldroll;

    printf("+-----------------------------------------+\n");
    printf("|  R/r  |  Roll number                    |\n");
    printf("+-----------------------------------------+\n");
    printf("|  N/n  |  Name                           |\n");
    printf("+-----------------------------------------+\n");
    printf("|  P/p  |  Percentage                     |\n");
    printf("+-----------------------------------------+\n");
    printf("\n");
    printf("Enter your choice: ");
    scanf(" %c", &choice);
    
    //rol numebr modify start
    if (choice == 'R' || choice == 'r')
    {
	    int newroll;
            printf("Enter roll number:");
            scanf("%d", &oldroll);
	    printf("enter the new rollnumber\n");
	    scanf("%d",&newroll);
            temp=*head;
            while(temp!=0)
                 {
                   if(temp->roll_no==oldroll)
		    {
                     temp->roll_no=newroll;
		     return;
		    }
                     temp=temp->next;
		  }
            printf("roll no not found\n");  
    }//rol number modify end

    //name to modify start
    if (choice == 'N' || choice == 'n')
    {
	    char newname[20],name[20];
            int oldroll,flag=0;
	    float newpercent;
            printf("Enter the name: ");
            scanf("%s",name);
            temp = *head;
            while (temp != NULL)
                 {
                  if (strcmp(temp->n, name) == 0)
                    {
		     printf("            ***Matching Records***\n");
                     printf("+-------------------------------------------------+\n");
                     printf("| ROLL NO |          NAME        |    PERCENTAGE  |\n");
	             printf("+-------------------------------------------------+\n");
                     printf("| %-7d | %-20s | %8.2f%%      |\n",temp->roll_no,temp->n,temp->percent);
	             printf("+-------------------------------------------------+\n");
		     flag=1;
                    }
                    temp = temp->next;
                  }
	    if(flag==0)
	    {
		    printf("no match found\n");
	            return;
            }
            printf("\nEnter the Roll Number : ");
            scanf("%d", &oldroll);
            printf("modify field\n");
            printf("+-----------------------------------------+\n");
            printf("|  N/n  |  Name                           |\n");
            printf("+-----------------------------------------+\n");
            printf("|  P/p  |  Percentage                     |\n");
            printf("+-----------------------------------------+\n");
            printf("\n");
            printf("Enter your choice: ");
            scanf(" %c", &choice);
            if (choice == 'N' || choice == 'n')
              {
                //chenge name
                printf("enter the new name:");
                scanf("%s",newname);
                temp=*head;
                while(temp!=0)
                   {
                   if(temp->roll_no==oldroll)
		   {
	               strcpy(temp->n,newname);
		       return;
		   }
                   temp=temp->next;
                   }
                  printf("roll no not found\n");
               } 
  
           if (choice == 'p' || choice == 'P')
             {      
              //chenge percent
               printf("enter the new percent:");
               scanf("%f",&newpercent);
               temp=*head;
               while(temp!=0)
                  {
                  if(temp->percent==newpercent)
		      {
                      temp->percent=newpercent;
		      break;
		      }
                  temp=temp->next;
                  }
              }
             else
	       printf("invalid input\n");
      }//name to modiy end


  //precent to modify start here
 if (choice == 'P' || choice == 'p')
    {
            char newname[20],name[20];
            int oldroll,flag=0;
            float newpercent,oldpercent;
            printf("Enter the percent: ");
            scanf("%f",&oldpercent);
            temp = *head;
            while (temp != NULL)
                 {
                  if (temp->percent == oldpercent)
                    {
                     printf("            ***Matching Records***\n");
                     printf("+-------------------------------------------------+\n");
                     printf("| ROLL NO |          NAME        |    PERCENTAGE  |\n");
                     printf("+-------------------------------------------------+\n");
                     printf("| %-7d | %-20s | %8.2f%%      |\n",temp->roll_no,temp->n,temp->percent);
                     printf("+-------------------------------------------------+\n");
                     flag=1;
                    }
                    temp = temp->next;
                  }
            if(flag==0)
            {
                    printf("no match found\n");
                    return;
            }
            printf("\nEnter the Roll Number : ");
            scanf("%d", &oldroll);
            printf("modify field\n");
            printf("+-----------------------------------------+\n");
            printf("|  N/n  |  Name                           |\n");
            printf("+-----------------------------------------+\n");
            printf("|  P/p  |  Percentage                     |\n");
            printf("+-----------------------------------------+\n");
            printf("\n");
            printf("Enter your choice: ");
            scanf(" %c", &choice);
            if (choice == 'N' || choice == 'n')
              {
                //chenge name
                printf("enter the new name:");
                scanf("%s",newname);
                temp=*head;
                while(temp!=0)
                   {
                   if(temp->roll_no==oldroll)
                   {
                       strcpy(temp->n,newname);
                       return;
                   }
                   temp=temp->next;
                   }
                  printf("roll no not found\n");
               }
	     if (choice == 'p' || choice == 'P')
             {
              //chenge percent
               printf("enter the new percent:");
               scanf("%f",&newpercent);
               temp=*head;
               while(temp!=0)
                  {
                  if(temp->percent==newpercent)
                      {
                      temp->percent=newpercent;
                      break;
                      }
                  temp=temp->next;
                  }
              }
             else
               printf("invalid input\n");

    }//percent to modify end here
 else
   {
	 printf("invalid input\n");
         return;
    }
}
