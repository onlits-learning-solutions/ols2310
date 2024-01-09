#include <stdio.h>
int main(void)
{
    char c;
    FILE *fp;
    fp = fopen("file.txt", "w");
    printf("Type your content below then press ctrl+d to close the file:\n");
    while((c=getchar()) != EOF)
    {
        putc(c, fp);
    }
    fclose(fp);
    return 0;
}