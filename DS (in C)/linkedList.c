#include <stdio.h>
int linkedList[20][2];
int size, int begin;
int used = 0;
int main () {

    do
    {
        printf ("Enter Your Choice .... \n");
        printf ("Unused Space in List is %d", size - used);
        printf ("1. Insertion \n2. Deletion \n3. Trasversing (Printing) \n4. Print (in Array) \n5. Exit");
        int choice;
        scanf ("%d", &choice);
        if (choice == 1)
            insertion();
        else if (choice == 2)
            deletion();
        else if (choice == 3)
            traverse();
        else if (choice == 4)
            printArray();
        else if  (choice == 5)
            break;
        else printf ("\nWrong Input Provided .. \n");
    }
    while (choice != 5);
    printf ("\n Program Terminated.. \n");

}
