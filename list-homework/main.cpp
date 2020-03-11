#include<iostream>
#include "list.cpp"
#include "list.h"

using namespace std;

int main()
{
    emptyList(L);
    createNewElmt(12, 10);
    insertFirst(L,P);
    createNewElmt(5, 3);
    insertFirst(L,P);
    createNewElmt(1, 1);
    insertFirst(L,P);
    createNewElmt(45, 0);
    insertFirst(L,P);
    cout<<"Problem No. 1 (procedure insertFirst)"<<endl;
    cout<<"your list: " <<printInfo(L);

    cout<<"Problem No. 2 (function SearchPangkat)"<<endl;

    return 0;
}
