#include <stdio.h>
#include <string.h>
#include <locale.h>
 
int blah()
{
    char data[2] = { -17, 0 };
    char out[2];
    int size = strlen(data);
 
    printf("Size %d\n", size);
 
    memset (out, '\0', sizeof(out));
 
    sprintf(out, "%.*s", size, data);
    if (strlen(out) != size)
    {
        printf("Mismatch\n");
        printf("old[0] = %x, new[0] = %x\n", data[0], out[0]);
    }
    else
    {
        printf("Match\n");
    }

    return 0;
}
 
int main(int argc, char*argv[])
{
    blah();
    setlocale(LC_ALL, "en_US.UTF-8");
    blah();
}


