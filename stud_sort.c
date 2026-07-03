#include"header.h"
void stud_sort(struct st**head)
{
    struct st *temp,*swap;
    char choice,count;
    int d,i,j;

    printf("+-----------------------------------------+\n");
    printf("|  N/n  |  Sort by name                   |\n");
    printf("+-----------------------------------------+\n");
    printf("|  P/p  |  sort by percentage             |\n");
    printf("+-----------------------------------------+\n");
    printf("Enter your choice: ");
    scanf(" %c", &choice);
    temp=*head;
      while(temp!=0)
          {
              count++;
              temp=temp->next;
           }
      struct st *arr[count];
      temp=*head;
      for(i=0;i<count;i++)
	   {
		arr[i]=temp;
	       temp=temp->next;
           }	       

  // sort linked list by name
    if(choice=='n' || choice=='N')
    {
     for(i=0;i<count-1;i++)
         {
           for(j=0;j<count-1-i;j++)
            {
                 if(strcasecmp(arr[j]->n,arr[j+1]->n)>0)
                 {
                  swap=arr[j];
                  arr[j]=arr[j+1];
                  arr[j+1]=swap;
                 }
             }
         }

      //printing in sort by name
        printf("+-------------------------------------------------+\n");
        printf("| ROLL NO |          NAME        |    PERCENTAGE  |\n");
        for(i=0;i<count;i++)
        {
        printf("+-------------------------------------------------+\n");
        printf("| %-7d | %-20s | %8.2f%%      |\n",arr[i]->roll_no,arr[i]->n,arr[i]->percent);
        }
        printf("+-------------------------------------------------+\n");
	return;
    }// sort by name end here

   //sort by percentage
   if(choice=='p' || choice=='P')

    {
      for(i=0;i<count-1;i++)
	 {
	   for(j=0;j<count-1-i;j++)
	    {	   
		 if(arr[j]->percent<arr[j+1]->percent)
		 {
                  swap=arr[j];
		  arr[j]=arr[j+1];
		  arr[j+1]=swap;
		 }
	     }
	 }
       
      //printing in sort by percent
        printf("+-------------------------------------------------+\n");
        printf("| ROLL NO |          NAME        |    PERCENTAGE  |\n");
	for(i=0;i<count;i++)
	{
	printf("+-------------------------------------------------+\n");
        printf("| %-7d | %-20s | %8.2f%%      |\n",arr[i]->roll_no,arr[i]->n,arr[i]->percent);
        }
	printf("+-------------------------------------------------+\n");

       return;
     }

   //inavlid option loop 
    else
    {
	printf("invalid input\n");
    }


}//main fun  end



