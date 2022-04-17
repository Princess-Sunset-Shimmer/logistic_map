// if input number is bigger; then out put line is bigger
    void printPopulation(
    register void* a1,              // a1 is where to be printed
    register long a2                // a2 is how much should prtint
) {
    register long t1;

loop_0:
    t1 = *(unsigned*)a1;
    a1 = a1 + 0x4;
    t1 = t1 >> 0x9;                 // rounded cut

    goto test;
loop_1:
    putchar('-');
    t1 = t1 + (char signed)0xff;
test:
    if(t1 != 0)goto loop_1;

    putchar('O');
    putchar('\n');
    a2 = a2 + (char signed)0xff;
    if(a2 != 0)goto loop_0;
}
