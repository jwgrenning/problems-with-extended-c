#include <stdio.h>
#include <string.h>

static char * byte_to_binary(int byte)
{
    static char b[9];
    b[0] = '\0';

    int bit;
    int i = 0;
    for (bit = 0x80, i = 0; i < 8; bit >>= 1, i++)
    {
        b[i] = ((byte & bit) == bit) ? '1' : '0';
    }

    return b;
}


int main()
{
	int i;
	for (i = 0; i < 256; i++)
	{
		printf ("#define b%s 0x%x\n", byte_to_binary(i), i);
	}
}

