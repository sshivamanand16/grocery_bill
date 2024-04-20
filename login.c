#include <stdio.h>
#include <string.h>

int log_func();

struct User 
{
    char username[50];
    char password[50];
};

struct User users[50] = {
    {"trial","1234r"},
    {"virat_kohli", "anushka@123"},
    {"shivam", "123456"},
    {"admin", "admin123"}};

void registerUser() 
{
    static int userCount = 0;
    if (userCount >= 50) {
        printf("Maximum number of users reached!\n");
        return;
    }
    
    printf("Enter username: ");
    scanf("%s", users[userCount].username);
    printf("Enter password: ");
    scanf("%s", users[userCount].password);
    
    printf("User registered successfully!\n");
    userCount++;
    printf("\n");
    printf("Login Now - \n");
    log_func();
}

int log_func() 
{
    char username[50];
    char password[50];
    
    printf("Enter username: ");
    scanf("%s", username);
    printf("Enter password: ");
    scanf("%s", password);
    
    for (int i = 0; i < 50; i++) 
    {
        if (strcmp(users[i].username, username) == 0 && strcmp(users[i].password, password) == 0) 
        {
            printf("Login Successful\n");
            printf("\n");
            return 1; 
        }
    }

    printf("Login unsuccessful\n");
    printf("Do you want to register? (y/n): ");
    char choice;
    scanf(" %c", &choice); 

    if (choice == 'y' || choice == 'Y') 
    {
        registerUser();
    }
    
    else
    {
        return 0;
    }
}
