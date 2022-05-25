//gcc -fno-stack-protector -c a.o b.o  //-fno-stack-protector:no need stack protector
//ld a.o b.o -e main -o ab
extern int shared;

int main()
{
    int a = 100;
    swap(&a, &shared);
}
