
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<strings.h>
struct st
{
        int roll_no;
        char n[20];
        float percent;
        struct st *next;
};
void add_end(struct st** );
static int count=0;
void stud_show(struct st** );
void stud_del(struct st** head);
void stud_deln(struct st** head);
void stud_mod(struct st**head);
void stud_sort(struct st**head);
void stud_load(struct st **head);
void stud_exit(struct st **head);
void stud_save(struct st**head);



