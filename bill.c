#include <stdio.h>

float bill_func(int *itemIds, int *quantities, int itemCount) 
{
    float total = 0.0;
    printf("Item\t\tQuantity\tPrice\n");
    printf("--------------------------------------------\n");

    for (int i = 0; i < itemCount; ++i)
    {
        int itemId = itemIds[i];
        float price = 0.0;
        const char* itemName = "Unknown"; 

        switch (itemId)
        {
            case 1:
                itemName = "Rice";
                price = 50.0;
                break;
            case 2:
                itemName = "Wheat Flour";
                price = 30.0;
                break;
            case 3:
                itemName = "Sugar";
                price = 40.0;
                break;
            case 4:
                itemName = "Milk";
                price = 50.0;
                break;
            case 5:
                itemName = "Eggs";
                price = 60.0;
                break;
            case 6:
                itemName = "Bread";
                price = 25.0;
                break;
            case 7:
                itemName = "Potatoes";
                price = 20.0;
                break;
            case 8:
                itemName = "Onions";
                price = 25.0;
                break;
            case 9:
                itemName = "Tomatoes";
                price = 30.0;
                break;
            case 10:
                itemName = "Salt";
                price = 10.0;
                break;
        }

        printf("%-15s\t%d\t\tRs. %.2f\n", itemName, quantities[i], price);
        total += price * quantities[i];
    }

    printf("--------------------------------------------\n");
    printf("Total\t\t\t\tRs. %.2f\n", total);
    return total;
}
