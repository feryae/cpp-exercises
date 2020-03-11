#include <iostream>
#include "algorithm.cpp"
#include "header.h"

using namespace std;

int main() {
    emptyList(L);
    createPersamaan(L);
    insertFirst(L,P,1,0);
    insertFirst(L,P,2,1);
    insertFirst(L,P,2,3);
    printInfo(L);

    return 0;
}


