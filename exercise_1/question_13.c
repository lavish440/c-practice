#include <stdio.h>

#define MAX_WORD_LENGTH 8
#define MAX_FREQUENCY 6

#define MIN(a, b) ((a) < (b) ? (a) : (b))

int main(void)
{
    int c, count = 0;
    int word_length[MAX_WORD_LENGTH + 1];

    for (int i = 0; i <= MAX_WORD_LENGTH; word_length[i++] = 0)
        ;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\n' || c == '\t')
        {
            word_length[MIN(count, MAX_WORD_LENGTH)]++;
            count = 0;
        }
        else
        {
            count++;
        }
    }

    for (int i = MAX_FREQUENCY; i >= 1; i--)
    {
        printf("\n");
        printf("%02d | ", i);
        for (int j = 1; j <= MAX_WORD_LENGTH; j++)
            printf(word_length[j] >= i ? "*  " : "   ");
    }

    printf("\n   +");
    for (int i = 1; i <= MAX_WORD_LENGTH; i++)
        printf("———");

    printf("\nF/L ");

    for (int i = 1; i <= MAX_WORD_LENGTH; i++)
        printf("%02d ", i);

    return 0;
}
