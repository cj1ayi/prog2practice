#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS (20)

#include "students.h"

// Objective: Do a linear search on an 1D array of structure
//            Return the memory address of the matching structure

void InputStudents(struct studentTag S[])
{
   for (int i = 0; i < 12; i++) {
     scanf("%d %s %s %f", 
           &S[i].id_number, 
           S[i].name.first,
           S[i].name.last,
           &S[i].grade);
   }
}

void PrintStudents(struct studentTag L[], int n)
{
   for (int i = 0; i < n; i++) {
     printf("%d %-15s %-15s %.1f\n", L[i].id_number, L[i].name.first, L[i].name.last, L[i].grade);
   }
}

// Linear search 
struct studentTag *SearchByID(int key, struct studentTag A[], int n)
{
    for (int i = 0; i < n; i++) {
        if (key == A[i].id_number)  // Eureka!
           return &A[i];  // return the address of A[i]
    }

    return 0; // int 0 will be promoted/converted to (struct studentTag *) 0
              // not found :-(
}


struct studentTag *SearchByName(char *first_name, char *last_name, struct studentTag A[], int n)
{
   for (int i = 0; i < n; i++)
   {
      if (strcmp(first_name, A[i].name.first) == 0 && strcmp(last_name, A[i].name.last) == 0)
      {
         return &A[i];
      }
   }
    return 0; // int 0 will be promoted/converted to (struct studentTag *) 0
              // not found :-(
}



int main()
{
   struct studentTag A[MAX_STUDENTS]; // 1D array of structures
   struct studentTag *ptemp; // is a temporary pointer variable

   InputStudents(A);
   PrintStudents(A, 12);
   
   // test Linear search
   //ptemp = SearchByID(2288, A, 12);
   ptemp = SearchByID(8888, A, 12);
   if (ptemp != 0) {
      printf("Key = %d, match = %d found at mem. address %p\n", 
              8888, ptemp->id_number, ptemp);
      printf("%d %s %s %.1f\n", ptemp->id_number, 
             ptemp->name.first, ptemp->name.last, ptemp->grade);
   } 
   else
     printf("Key = %d NOT FOUND!\n", 8888);  
   
   return 0;
}
