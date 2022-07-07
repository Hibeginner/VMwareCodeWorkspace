//gcc -fno-stack-protector -c a.c b.c  //-fno-stack-protector:no need stack protector
//ld a.o b.o -e main -o ab // gcc compile, must use gcc to link
//gcc a.o b.o -o ab
extern int shared;

int main()
{
    int a = 100;
    swap(&a, &shared);
}
