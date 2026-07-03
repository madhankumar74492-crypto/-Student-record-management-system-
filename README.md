# Student Record Management System

A menu-driven Student Record Management System implemented in C using a Singly Linked List. This project demonstrates dynamic memory allocation, file handling, linked list operations, modular programming, and Makefile usage.

---

## Features

- Add new student records
- Delete records by Roll Number or Name
- Modify records by Roll Number, Name, or Percentage
- Display all student records
- Sort records by Name or Percentage
- Save records to a file
- Load records automatically when the program starts
- Exit with or without saving

---

## Project Structure

```
.
├── main.c
├── header.h
├── stud_add.c
├── stud_del.c
├── stud_show.c
├── stud_mod.c
├── stud_sort.c
├── stud_save.c
├── stud_load.c
├── stud_exit.c
├── Makefile
├── student.txt
└── README.md
```

---

## Data Structure

```c
struct st
{
    int roll_no;
    char n[20];
    float percent;
    struct st *next;
};
```

---

## Menu

```
**** STUDENT RECORD MENU ****

A/a : Add New Record
D/d : Delete a Record
S/s : Show the List
M/m : Modify a Record
V/v : Save
T/t : Sort the List
E/e : Exit
```

---

## Functionalities

### Add Record

- Automatically assigns Roll Number
- Accepts Student Name
- Accepts Percentage
- Inserts into the linked list

### Delete Record

Delete using

- Roll Number
- Name

### Modify Record

Search using

- Roll Number
- Name
- Percentage

Modify

- Name
- Percentage

### Show Records

Displays all records in a formatted table.

### Sort Records

Sort by

- Name
- Percentage

### Save Records

Stores all student records in

```
student.txt
```

### Load Records

Automatically loads records from

```
student.txt
```

when the program starts.

### Exit

Options

```
S/s : Save and Exit
E/e : Exit Without Saving
```

---

## Compilation

Compile using Makefile

```bash
make
```

Or manually

```bash
cc -c main.c
cc -c stud_add.c
cc -c stud_del.c
cc -c stud_show.c
cc -c stud_mod.c
cc -c stud_sort.c
cc -c stud_save.c
cc -c stud_load.c
cc -c stud_exit.c

cc main.o stud_add.o stud_del.o stud_show.o stud_mod.o stud_sort.o stud_save.o stud_load.o stud_exit.o -o exe
```

Run

```bash
./exe
```

---

## Concepts Used

- C Programming
- Singly Linked List
- Dynamic Memory Allocation
- File Handling
- Modular Programming
- Makefile
- Structures
- Pointers
- Functions

---

## Output Example

```
-----------------------------------------
ROLL NO   NAME            PERCENTAGE
-----------------------------------------
1         Arun             85.50
2         Priya            91.20
3         Rahul            78.60
-----------------------------------------
```

---

## Author

**Madhan Kumar**

Mini Project

Student Record Management System in C
