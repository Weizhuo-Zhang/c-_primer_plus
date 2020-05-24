// usedma.cpp -- inheritance, friends, and DMA
// compile with dma.cpp
#include "dma.h"

void display(DmaABC &dma) {
    dma.View();
}

int main()
{
    baseDMA shirt("Portabelly", 8);
    lacksDMA balloon("red", "Blimpo", 4);
    hasDMA map("Mercator", "Buffalo Keys", 5);

    display(shirt);
    display(balloon);
    display(map);

    lacksDMA balloon2(balloon);
    display(balloon2);

    hasDMA map2;
    map2 = map;
    display(map2);
    return 0;
}
