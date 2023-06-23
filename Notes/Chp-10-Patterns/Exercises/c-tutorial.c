#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_string_chars(char *string)
{
    size_t length = strlen(string);
    size_t i = 0;
    for (; i < length; i++)
    {
        printf("%c\n", string[i]);
    }
}

void allocate_and_print_array()
{
    int *array = malloc(9 * sizeof(int));
    if (array == NULL)
    {
        printf("Memory allocation failed\n");
        return;
    }

    for (int i = 0; i < 10; i++)
    {
        array[i] = i;
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", array[i]);
    }

    free(array);
}

// int main()
// {
//     char *string = "hello world";
//     print_string_chars(string);

//     allocate_and_print_array();

//     return 0;
// }

int main()
{
    char *binary_string1 = "10101010";  // Point to 1st element (string literal), Read-only memory,
    char binary_string2[] = "10101010"; // Array of chars, modifiable

    printf("binary_string1: %s\n", binary_string1);
    printf("binary_string2: %s\n", binary_string2);
    binary_string2[0] = '0';
    binary_string1[1] = '0'; // Undefined behavior!

    return 0;
}

// int main()
// {
//     char string[] = "hello";
//     printf("Original string: %s\n", string);

//     string[0] = 'j';
//     printf("Modified string: %s\n", string);

//     return 0;
// }
