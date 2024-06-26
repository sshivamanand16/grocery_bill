#include <stdio.h>
#include <stdlib.h> 
#include <conio.h>
#include "login.c"
#include "products.c"
#include "bill.c"

int main() 
{
    char ch;
    if (log_func()) 
    {
        items_func();
        int *item; 
        int *qty; 
        int c = 0;
        int input;
        
        item = (int*)malloc(100 * sizeof(int));
        qty = (int*)malloc(100 * sizeof(int)); 
        
        while (1) 
        {   
            printf("\n");
            printf("1. Add an item\n");
            printf("2. Exit and proceed to bill\n");
            printf("Input : ");
            scanf("%d",&input);
            printf("\n");

            if (input == 1)
            {
                printf("Enter item ID: ");
                scanf("%d", &item[c]);
                printf("Enter quantity: ");
                scanf("%d", &qty[c]);
                c++;
            }

            if (input == 2)
            {
                break;
            }
        }

        float bill = bill_func(item, qty, c);
        printf("\n");
        printf("Thank you for shopping!\n");
        printf("Press Enter to close the application.");
        
        while ((ch = getch()) != '\n')
        {
            break;
        }
        
        free(item);
        free(qty);
    }

    else
    {
        printf("Login failed.");
    }
    return 0;
}
