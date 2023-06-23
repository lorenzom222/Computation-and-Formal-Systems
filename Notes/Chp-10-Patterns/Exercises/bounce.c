#include <stdio.h>

void bounce(const char *bitString)
{
    int i = 0;
a:
    printf("0\n");
    if (bitString[i] == '0')
    {
        i++;
        goto a;
    }
    else if (bitString[i] == '1')
    {
        printf("1\n");
        i++;
        goto b;
    }

b:
    printf("0\n");

    if (bitString[i] == '0')
    {
        i++;
        goto a;
    }

    else if (bitString[i] == '1')
    {
        i++;
        goto c;
    }
c:
    printf("1\n");
    if (bitString[i] == '0')
    {
        i++;
        goto d;
    }
    else if (bitString[i] == '1')
    {
        i++;
        goto c;
    }
d:
    printf("1\n");
    if (bitString[i] == '0')
    {
        i++;
        goto a;
    }
    else if (bitString[i] == '1')
    {
        i++;
        goto c;
    }
finis:;
    printf("Finished\n");
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
