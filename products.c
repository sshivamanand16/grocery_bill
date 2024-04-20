    #include <stdio.h>

    void items_func() 
    {
        printf("Price in Rupees -\n");
        printf("1. Rice (1 kg) - 50\n");
        printf("2. Wheat Flour (1 kg) - 30\n");
        printf("3. Sugar (1 kg) - 40\n");
        printf("4. Milk (1 liter) - 50\n");
        printf("5. Eggs (12 pieces) - 60\n");
        printf("6. Bread (1 loaf) - 25\n");
        printf("7. Potatoes (1 kg) - 20\n");
        printf("8. Onions (1 kg) - 25\n");
        printf("9. Tomatoes (1 kg) - 30\n");
        printf("10. Salt (1 kg) - 10\n");
        return;
    }

    float cost_func(int id) 
    {
        float cost = 0.0;
        switch (id) 
        {
            case 1:
                cost = 50.0;
                break;
            case 2:
                cost = 30.0;
                break;
            case 3:
                cost = 40.0;
                break;
            case 4:
                cost = 50.0;
                break;
            case 5:
                cost = 60.0;
                break;
            case 6:
                cost = 25.0;
                break;
            case 7:
                cost = 20.0;
                break;
            case 8:
                cost = 25.0;
                break;
            case 9:
                cost = 30.0;
                break;
            case 10:
                cost = 10.0;
                break;

            default:
                printf("Invalid item ID.\n");
                break;
        }
        return cost;
    }
