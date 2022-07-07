int shared = 1;

int printf(const char *format, ...);

void swap(int *a, int *b)
{
    *a ^= *b ^= *a ^= *b;
    
    printf("%d\n", *a);
}
