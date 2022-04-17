// this function using fixed point number; high 16-bit for intger part; low 16-bit for fractional part
    #define SCALE 0x10

    void logisticMap_fixPoint(
    register long a1,               // a1 is rate
    register long a2,               // a2 is current gen population now
    register long a3,               // a3 is how many times do you wanna compute about?
    register void* a4               // a4 is where to save every generation
) {
    register long t1;

loop:
    t1 = 0x10000;                   // represent 0x1.0 by defined fixed point number
    t1 = t1 - a2;
    a1 = a1 * a2;
    a1 = a1 >> SCALE;               // result of rate x population
    a2 = a1 * t1;
    a2 = a2 >> SCALE;               // generated the next gen population into a2 now
    *(int*)a4 = a2;
    a4 = a4 + 0x4;
    a3 = a3 + (char signed)0xff;
    if(a3 != 0)goto loop;
}

// the simulational world must exist in reality world;
// the reality world just can be simulated;
// something cannot be simulated in simulational world;
// the something is immortal infinity;
