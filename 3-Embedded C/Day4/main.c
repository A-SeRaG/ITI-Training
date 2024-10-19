#include <stdio.h>

void set_bit(int *num, int bit)
{
    *num = *num | (1 << bit);
}

void clear_bit(int *num, int bit)
{
    *num = *num & ~(1 << bit);
}

void toggle_bit(int *num, int bit)
{
    *num = *num ^ (1 << bit);
}

int read_bit(int num, int bit)
{
    if ((num >> bit) == 1)
        return 1;
    else
        return 0;
}

void write_bit(int *num, int bit, int value)
{
    if (value == 1)
        set_bit(num, bit);
    else
        clear_bit(num, bit);
}

int main()
{
    int num = 5; //-> [00101]
    int bit = 1; //-> [00010]
    int value = 1;

    set_bit(&num, bit); //-> [00111] = 7
    printf("number after setting %d\n", num);
    bit = 0;
    clear_bit(&num, bit); //-> [00110] = 6
    printf("number after clearing %d\n", num);
    bit = 2;
    toggle_bit(&num, bit); //-> [00010] = 2
    printf("number after toggling %d\n", num);
    bit = 3;
    int x = read_bit(num, bit);
    printf("read the bit %d\n", x);
    bit = 3;
    write_bit(&num, bit, value); //-> [01010] = 10
    printf("number after writing %d\n", num);
    return 0;
}
