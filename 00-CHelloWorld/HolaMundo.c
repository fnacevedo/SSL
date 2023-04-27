#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp = NULL;
    fp = fopen("output.txt", "wt");
    fputs("Hola Mundo Utniano",fp);
    fclose(fp);
    return 0;
}