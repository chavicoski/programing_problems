#include <stdio.h>

int main() {
    char c;
    int first = 1;
    c = getchar();
    while (c != EOF)
    {
        if (c == 34)
        {
            if (first)
            {
                putchar(96);
                putchar(96);
                first = 0;
            }
            else
            {
                putchar(39);
                putchar(39);
                first = 1;
            }
        }
        else
        {
            putchar(c);
        }
        c = getchar();
    }
    return 0;
}