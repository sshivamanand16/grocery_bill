#include <stdio.h>

char registers[1000][2] = {0};
int users = 0;


int reg()
{
    return 1;
}

int verify(char u[],char p[])
{
   return 1;
}

int log_func()
{
    int input;
    char username[100];
    char password[100];

    while (1)
    {
        printf("1. Login.\n");
        printf("2. Register.\n");
        printf("Input : ");
        scanf("%d",&input);

        switch(input)
        {
            case 1:
                printf("Login Success\n");
                printf("\n");
                return 1;
            case 2:
                printf("Username : ");
                scanf("%s",&username);
                printf("Password : ");
                scanf("%s",&password);
                int check = verify(username,password);

                if (check == 1)
                {
                    printf("\nSuccess.\n");
                    break;
                }

                else
                {
                    printf("Login Failed.\n");
                }
                break;
            default:
                {}
        }
    }

}