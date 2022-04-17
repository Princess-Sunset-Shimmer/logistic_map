// this program needs debuging
    #include <stdio.h>
    #include "logisticmap.c"
    #include "printGen.c"

    #define TIMES 0x10

    static char logisticMap_generation[0x40];  // size is enough for generate 0x10 times of logisticMap generation

    int main(
    void
) {
    logisticMap_fixPoint(0x80000, 0x1000, TIMES, &logisticMap_generation[0]);    // initial_rate: 0x3.0, initial_population: 0x0.1111
    printPopulation(&logisticMap_generation[0], TIMES);
    return 0;
}
