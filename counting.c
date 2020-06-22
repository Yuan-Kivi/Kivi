#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ch;
    int char_num = 0;
    int line_num = 0;

    int *count = malloc(10 * sizeof(int));
    int i;
    for (i = 0; i < 10; i++)
    {
        *(count + i) = 0;
    }

    FILE *fp = fopen("data.txt", "r");

    ch = getc(fp);
    while (ch != EOF)
    {
        char_num++;
        if (ch == '0')
            count[0]++;
            if (ch == '1')
                count[1]++;
            if (ch == '2')
                count[2]++;
            if (ch == '3')
                count[3]++;
            if (ch == '4')
                count[4]++;
            if (ch == '5')
                count[5]++;
            if (ch == '6')
                count[6]++;
            if (ch == '7')
                count[7]++;
            if (ch == '8')
                count[8]++;
            if (ch == '9')
                count[9]++;
            if (ch == '\n')
        {
            line_num++;
        }
        ch = getc(fp);
    }
    printf("Number of characters: %d.\n", char_num);
    printf("Number of lines: %d.\n", line_num);
    printf("Number of digits:\n");
    printf("0: %d\n", count[0]);
    printf("1: %d\n", count[1]);
    printf("2: %d\n", count[2]);
    printf("3: %d\n", count[3]);
    printf("4: %d\n", count[4]);
    printf("5: %d\n", count[5]);
    printf("6: %d\n", count[6]);
    printf("7: %d\n", count[7]);
    printf("8: %d\n", count[8]);
    printf("9: %d\n", count[9]);
    free(count);
    fclose(fp);
}