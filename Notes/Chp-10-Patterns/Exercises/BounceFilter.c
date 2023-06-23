#include <stdio.h>

void bounce(const char *bitString)
{
    int currentLabel = 'a';

    for (int i = 0; bitString[i] != '\0'; i++)
    {

        switch (currentLabel)
        {
        case 'a':
            printf("0");
            if (bitString[i] == '0')
            {
                currentLabel = 'a';
            }
            else if (bitString[i] == '1')
            {
                currentLabel = 'b';
            }
            break;

        case 'b':
            printf("0");

            if (bitString[i] == '0')
            {
                // i++;
                currentLabel = 'a';
            }
            else if (bitString[i] == '1')
            {
                // i++;
                currentLabel = 'c';
            }
            break;

        case 'c':
            printf("1");

            if (bitString[i] == '0')
            {
                // i++;
                currentLabel = 'd';
            }
            else if (bitString[i] == '1')
            {
                // i++;
                currentLabel = 'c';
            }
            break;

        case 'd':
            printf("1");

            if (bitString[i] == '0')
            {
                // i++;
                currentLabel = 'a';
            }
            else if (bitString[i] == '1')
            {
                // i++;
                currentLabel = 'c';
            }
            break;
        }
    }
}

int main(int argc, char *argv[])
{
    // if (argc < 2)
    // {
    //     printf("Please provide a bit string as an argument.\n");
    //     return 1;
    // }

    const char *bitString = argv[1];
    bounce(bitString);

    return 0;
}
