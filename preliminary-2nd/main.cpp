#include <iostream>
#include "algorithm.cpp"

using namespace std;


int main() {
    List L;
    address P = NULL;
    createList(L);

 while(true) {
        insertFirst(L, alokasi(5));
        deleteFirst(L, P);
    }
/*NOMOR 3.E       while(true) {
        insertFirst(L, alokasi(5));
        deleteFirst(L, P);
        dealokasi(P);

    }**/

}


