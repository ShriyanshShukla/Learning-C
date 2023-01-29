#include <stdio.h>

int main()
{
    char c;
    FILE* ptr1;
    ptr1 = fopen("Q3_A.txt", "r");
    FILE* ptr2;
    ptr2 = fopen("Q3_B.txt", "w");

    c = fgetc(ptr1);
    while (c!=EOF)
    {
        printf("%c", c);
        fputc(c, ptr2);
        c = fgetc(ptr1);
        
        if (c==EOF)
        {
            rewind(ptr1);
            fprintf(ptr2, "\n");
            c = fgetc(ptr1);

            while (c!=EOF)
            {
                fputc(c, ptr2);
                c = fgetc(ptr1);
            }
        }
    }
    fclose(ptr1);
    fclose(ptr2);
    return 0;
}

