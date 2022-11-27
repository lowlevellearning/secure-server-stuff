#include <stdio.h>
#include <stdlib.h>
#include "secrets.h"

void debug() 
{
    printf("!! ENTERING DEBUG MODE !!\n");
    system("/bin/bash");
}

int checkPassword()
{
    char password[64];

    printf("password: ");
    gets(password);

    return isValidPassword(password);
}

int main(int argc, char **argv)
{
    printf("WELCOME TO THE SECURE SERVER\n");

    if (checkPassword())
    {
        debug();
    } else {
        printf("Wrong password, sorry;\n");
    }
}
