#include <stdio.h>
#include <stdlib.h>

#define IN 1  /* inside a word */
#define OUT 0 /* outside a word */

int main()
{
    char lines = 0;
    char words = 0;
    char chars = 0;

    int state;

    state = OUT;

    int c;

    while ((c = getchar()) != EOF)
    {
        ++chars;

        if (c == '\n')
        {
            ++lines;
        }

        if (c == ' ' || c == '\n' || c == '\t')
        {
            state = OUT;
        }
        else if (state == OUT)
        {
            state = IN;
            ++words;
        }
    }

    printf("Lines: %d\n", lines);
    printf("Words: %d\n", words);
    printf("Characters: %d\n", chars);

    return EXIT_SUCCESS;
}
