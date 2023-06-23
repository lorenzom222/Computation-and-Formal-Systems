#include <stdio.h>
#include <string.h>

void evenparity(char string[])
{
    int length = strlen(string);
    char *state = "p0";

    for (int i = 0; i < length; i++)
    {
        if (strcmp(state, "p0") == 0)
        {
            if (string[i] == '0')
            {
                state = "p0";
            }
            else if (string[i] == '1')
            {
                state = "p1";
            }
        }
        else if (strcmp(state, "p1") == 0)
        {
            if (string[i] == '0')
            {
                state = "p3";
            }
            else if (string[i] == '1')
            {
                state = "p2";
            }
        }

        else if (strcmp(state, "p2") == 0)
        {
            if (string[i] == '0')
            {
                state = "p0";
            }
            else if (string[i] == '1')
            {
                state = "p4";
            }
        }

        else if (strcmp(state, "p3") == 0)
        {
            if (string[i] == '0')
            {
                state = "p3";
            }
            else if (string[i] == '1')
            {
                state = "p5";
            }
        }
        else if (strcmp(state, "p5") == 0)
        {
            if (string[i] == '0')
            {
                state = "p3";
            }
            else if (string[i] == '1')
            {
                state = "p6";
            }
        }
        else if (strcmp(state, "p6") == 0)
        {
            if (string[i] == '0')
            {
                state = "p3";
            }
            else if (string[i] == '1')
            {
                state = "p4";
            }
        }
        printf("%s\n", state);
    }
    if (strcmp(state, "p0") == 0 || strcmp(state, "p2") == 0 || strcmp(state, "p5") == 0)
    {
        printf("%s\n", "Accepted");
    }
    else if (strcmp(state, "p1") == 0 || strcmp(state, "p4") == 0 || strcmp(state, "p3") == 0 || strcmp(state, "p6") == 0)
    {
        printf("%s\n", "Rejected");
    }
}

int main()
{
    char string[100];
    printf("Enter a string: ");
    scanf("%s", string);
    // printf("%s\n", string);
    evenparity(string);
    return 0;
}