#include <stdio.h>
#include <sys/mman.h>
#include <sys/stat.h>
#include <stdlib.h>

void main(int argc, char *argv[])
{
    FILE *file = fopen(argv[1], "r");
    unsigned char *buf;
    int length = 0;
    struct stat st;
    int v;

    // get file size and allocate. We're going to convert to bytes 
    // from text, so this allocation will be safely large enough
    fstat(fileno(file), &st);
    buf = valloc(st.st_size);
    while (fscanf(file, "\\x%02x", &v) == 1)
    {
        buf[length++] = v;
    }

    fclose(file);

    mprotect(buf, length, PROT_EXEC);

    int (*ret)() = (int (*)())buf;
    ret();

    return 0;
}