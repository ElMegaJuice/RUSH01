#include <unistd.h>
#include "tables.h"

void put_str(const char *str)
{
    int i = 0;
    while (str[i])
        i++;
    write(1, str, i);
}

void put_space(void)
{
    write(1, " ", 1);
}

void convert_block(int n)
{
    if (n == 0)
        return;

    if (n < 10)
    {
        put_str(units[n]);
        return;
    }

    if (n < 20)
    {
        put_str(teens[n - 10]);
        return;
    }

    if (n < 100)
    {
        put_str(tens[n / 10]);
        if (n % 10 != 0)
        {
            put_space();
            put_str(units[n % 10]);
        }
        return;
    }

    put_str(units[n / 100]);
    put_space();
    put_str("hundred");

    if (n % 100 != 0)
    {
        put_space();
        convert_block(n % 100);
    }
}
