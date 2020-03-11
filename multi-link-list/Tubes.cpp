#include "Tubes.h"

void createlistInstitution(listInst &L){
    //Create an Institution list
    first(L) = NULL;
}

void createlistAuthor(listAuth &L){
    //Create an Author list
    first(L) = NULL;
}

void createlistJournal(listJour &L){
    //Create an Journal list
    first(L) = NULL;
}

void createlistKeyword(listKey &L){
    //Create an Keyword list
    first(L) = NULL;
}

void createlistRelation(listRel &L){
    //Create an Relation list
    first(L) = NULL;
}

adrInst allocateInstitution(infoInst nameofinstitution){
    //Create an Element on list Institution
    adrInst p   = new elmlistInstitiution;
    mid(p)      = NULL;
    info(p)     = nameofinstitution;
    next(p)     = NULL;
    return p;
}

adrAuth allocateAuthor(infoAuth name){
    //Create an Element on list Author
    adrAuth p   = new elmlistAuthor;
    mid(p)      = NULL;
    info(p)     = name;
    next(p)     = NULL;
    return p;
}

adrJour allocateJournal(infoJour Journal){
    //Create an Element on list Journal
    adrJour p       = new elmlistJournal;
    info(p)         = Journal;
    next(p)         = NULL;
    mid(p)          = NULL;
    return p;
}

adrKey allocateKeyword(infoKey keyword){
    //Create an Element on list Keyword
    adrKey p    = new elmlistKeyword;
    info(p)     = keyword;
    next(p)     = NULL;
    mid(p)      = NULL;
    return p;
}

adrRel allocateRelation(adrAuth a, adrInst i, adrJour j, adrKey k){
    //Create an Element on list Relation
    adrRel p     = new elmlistRelation;
    next(p)      = NULL;
    p->info.auth      = a;
    p->info.inst      = i;
    p->info.jour      = j;
    p->info.key       = k;
    return p;
}

void deallocateAuthor(adrAuth &p){
    //Delete element type
    delete p;
}

void deallocateInstitution(adrInst &p){
    //Delete element type
    delete p;
}

void deallocateJournal(adrJour &p){
    //Delete element type
    delete p;
}

void deallocateKeyword(adrKey &p){
    //Delete element type
    delete p;
}

void deallocateRelation(adrRel &p){
    //Delete element type
    delete p;
}

void insertfirstAuthor(listAuth &L, adrAuth p){
    //INSERT FIRST IN LIST AUTHOR
        if (L.first == NULL){
            L.first = p;
        }
        else {
            p->next = L.first;
            L.first = p;
        }
}

void insertfirstInstitution(listInst &L, adrInst p){
    //INSERT FIRST IN LIST INSTITUTTION
        if (L.first == NULL){
            L.first = p;
        }
        else {
            p->next = L.first;
            L.first = p;
        }
}

void insertfirstJournal(listJour &L, adrJour p){
    //INSERT FIRST IN LIST JOURNAL
        if (L.first == NULL){
            L.first  = p;
            L.newest = p;
            L.oldest = p;
        }
        else {
            if (p->info.date >= L.newest->info.date){
                L.newest = p;
                p->next  = L.first;
                L.first  = p;
            }else if(p->info.date < L.oldest->info.date){
                L.oldest = p;
                p->next  = L.first;
                L.first  = p;
            }
        }
}

void insertfirstKeyword(listKey &L, adrKey p){
    //INSERT FIRST IN LIST KEYWORD
        if (L.first == NULL){
            L.first = p;
        }
        else {
            p->next = L.first;
            L.first = p;
        }
}

void insertfirstRelation(listRel &L,adrRel p){
    //INSERT FIRST IN LIST RELATION
        if (L.first == NULL){
            L.first = p;
        }
        else {
            p->next = L.first;
            L.first = p;
        }
}

adrAuth findelmAuthor(listAuth L, string x){
    //FIND ELMEMENT IN LIST AUTHOR
    adrAuth p = L.first;
    if (p == NULL)
        return NULL;
    else {
        while (p != NULL){
            if (p->info.name == x)
                return p;
            else
                p = p->next;
    }
    return NULL;
    }
}


adrInst findelmInstitution(listInst L, string x){
    //FIND ELMEMENT IN LIST INSTITUTION
    adrInst p = L.first;
    if (p == NULL)
        return NULL;
    else {
        while (p != NULL){
            if (p->info.name == x)
                return p;
            else
                p = p->next;
    }
    return NULL;
    }
}

adrJour findelmJournalName(listJour L, string x){
    //FIND ELMEMENT IN LIST JOURNAL BY TITLE
    adrJour p = L.first;
    if (p == NULL)
        return NULL;
    else {
        while (p != NULL){
            if (p->info.title == x)
                return p;
            else
                p = p->next;
    }
    return NULL;
    }
}

adrJour findelmJournalDate(listJour L, int x){
    //FIND ELMEMENT IN LIST JOURNAL BY DATE
    adrJour p = L.first;
    if (p == NULL)
        return NULL;
    else {
        while (p != NULL){
            if (p->info.date == x)
                return p;
            else
                p = p->next;
    }
    return NULL;
    }
}

adrKey findelmKeyword(listKey L, string x){
    //FIND ELMEMENT IN LIST KEYWORD
    adrKey p = L.first;
    if (p == NULL)
        return NULL;
    else {
        while (p != NULL){
            if (p->info.name == x)
                return p;
            else
                p = p->next;
    }
    return NULL;
    }
}

adrRel findelmRelationInst(listRel L, infoRel x){
    //FIND ELMEMENT IN LIST RELATION
    adrRel p = L.first;
    if (p == NULL){
        return NULL;
    }else {
        while (p != NULL){
            if (p->info.inst == x.inst){
                return p;
            }else {
                p = p->next;
            }
        }
        return NULL;
    }
}

adrRel findelmRelationAuth(listRel L, infoRel x){
    //FIND ELMEMENT IN LIST RELATION
    adrRel p = L.first;
    if (p == NULL){
        return NULL;
    }else {
        while (p != NULL){
            if (p->info.auth == x.auth){
                return p;
            }else {
                p = p->next;
            }
        }
        return NULL;
    }
}

adrRel findelmRelationJour(listRel L, infoRel x){
    //FIND ELMEMENT IN LIST RELATION
    adrRel p = L.first;
    if (p == NULL){
        return NULL;
    }else {
        while (p != NULL){
            if (p->info.jour == x.jour){
                return p;
            }else {
                p = p->next;
            }
        }
        return NULL;
    }
}

adrRel findelmRelationKey(listRel L, infoRel x){
    //FIND ELMEMENT IN LIST RELATION
    adrRel p = L.first;
    if (p == NULL){
        return NULL;
    }else {
        while (p != NULL){
            if (p->info.key == x.key){
                return p;
            }else {
                p = p->next;
            }
        }
        return NULL;
    }
}

adrRel findelmRelation(listRel L, infoRel x) {
    adrRel p = L.first;
    if (p == NULL){
        return NULL;
    }else{
        while (p != NULL){
            if ((findelmRelationInst(L, x)!=NULL)&&(findelmRelationAuth(L, x)!=NULL)&&(findelmRelationJour(L, x)!=NULL)&&(findelmRelationKey(L, x)!=NULL)){
                return p;
            }else {
                p = next(p);
            }
        }
        return NULL;
    }
}

void inputRelation(listRel &Lr, listJour &Lj, listAuth &La, listInst &Li, listKey &Lk){
    infoJour J;
    infoAuth A;
    infoInst I;
    infoKey  K;

    cout << "Welcome to the Journal. \nPlease insert Data" << endl;
    cout << "Title          :   " ; cin >> J.title;
    cout << "Published in   :   " ; cin >> J.date;
    cout << "Author         :   " ; cin >> A.name;
    cout << "Institution    :   " ; cin >> I.name;
    cout << "Keyword        :   " ; cin >> K.name;

    insertfirstJournal(Lj, allocateJournal(J));
    insertfirstAuthor(La, allocateAuthor(A));
    insertfirstInstitution(Li, allocateInstitution(I));
    insertfirstKeyword(Lk, allocateKeyword(K));

    adrRel Rel   = allocateRelation(first(La), first(Li), first(Lj), first(Lk));
    adrRel found = findelmRelation(Lr, Rel->info);

    if (found == NULL) {
        insertfirstRelation(Lr, Rel);
        cout << "Success!" << endl;
    }else {
        cout << "This relation is already included." << endl;
    }
}
void printAuth(listAuth L){
    adrAuth p = first(L);
    if (p==NULL){
        cout<< "Author is empty" <<endl;
    }else {
        while (p != NULL){
            cout << "Author = " << p->info.name <<endl;
            p = next(p);
        }
    }
    getch();
    system("cls");
}

void printRel(listRel L){
        adrRel p = L.first;
        if (p==NULL){
            cout << "Library is empty" << endl;
        }
        else{
            while (p != NULL ){
                cout << "Institution    : " << p->info.inst->info.name  <<endl;
                cout << "Author         : " << p->info.auth->info.name  <<endl;
                cout << "Title          : " << p->info.jour->info.title <<endl;
                cout << "Published in   : " << p->info.jour->info.date  <<endl;
                cout << "Keyword        : " << p->info.key->info.name   <<endl;
                cout << endl;
                p = p->next;
            }
        }
        getch();
        system("cls");
}

void newold (listJour L){
    adrJour p = L.newest ;
    cout<< "The newest Journal = " << p->info.title <<endl;
    cout<< "It was published   = " << p->info.date  <<endl;
    p =L.oldest;
    cout<< "The oldest Journal = " << p->info.title <<endl;
    cout<< "It was published   = " << p->info.date  <<endl;
}

void searchJourbyKey(listJour Lj, listKey Lk, listRel Lr){
    adrRel p = first(Lr);
    string k;
    cout<< "Please insert keyword : ";
    cin>> k;
    cout<<endl;
    while (p != NULL){
        if (p->info.key->info.name == k) {
            cout<< "Journal     = " << p->info.jour->info.title << endl;
            cout<< "Author      = " << p->info.auth->info.name  << endl;
        }
        p = p->next;
    }
}

void searchAuthbyKey(listAuth La, listKey Lk, listRel Lr){
    adrRel p = first(Lr);
    string k;
    cout<< "Please insert keyword : ";
    cin>> k;
    cout<<endl;
    while (p != NULL){
        if (p->info.key->info.name == k) {
            cout<< "Author      = " << p->info.auth->info.name  << endl;
        }
        p = p->next;
    }
}

void searchInstbyKey(listInst Li, listKey Lk, listRel Lr){
    adrRel p = first(Lr);
    string k;
    cout<< "Please insert keyword : ";
    cin>> k;
    cout<<endl;
    while (p != NULL){
        if (p->info.key->info.name == k) {
            cout<< "Institution = " << p->info.inst->info.name  << endl;
            cout<< "Author      = " << p->info.auth->info.name  << endl;
        }
        p = p->next;
    }
}

void activeInst(listInst Li){
   adrInst p = Li.first;
   if (p != NULL){
        string active = "none";
        int maxim = 0;
        int temp = 0;
        adrInst q = Li.first;
        while (q != NULL){
            string x = q->info.name;
            temp = 0;
            while (p != NULL){
                if (p->info.name == x){
                    temp = temp + 1;
                }
                p = p->next;
            }
            if (temp > maxim){
                maxim = temp;
                active = p->info.name;
            }
            if (p != NULL){
                q = q->next;
                p = q;
            }
        }
        cout<< "Most active institution :"<<active<<endl;
   }else{
        cout<<" List is empty"<<endl;
   }

}


void menu(){
    listAuth La;
    listInst Li;
    listJour Lj;
    listKey  Lk;
    listRel  Lr;
    createlistAuthor(La);
    createlistInstitution(Li);
    createlistJournal(Lj);
    createlistKeyword(Lk);
    createlistRelation(Lr);

    char a;
    while (a != '0'){
        switch(a){
            case '1' : inputRelation(Lr, Lj, La, Li, Lk); break;
            case '2' : printRel(Lr); break;
            case '3' : newold (Lj); break;
            case '4' : searchJourbyKey(Lj, Lk, Lr); break;
            case '5' : searchAuthbyKey(La, Lk, Lr); break;
            case '6' : searchInstbyKey(Li, Lk, Lr); break;
            case '7' : activeInst(Li); break;
            case '0' : break;
        }
        cout << "    Selamat Datang" << endl;
        cout << "         Menu" << endl;
        cout << "1. New Entry" << endl;
        cout << "2. Show Entries" << endl;
        cout << "3. Show the oldest ans newest Journal" << endl;
        cout << "4. Search Journal by Keyword" << endl;
        cout << "5. Search Author by Keyword" << endl;
        cout << "6. Search Institution by Keyword" << endl;
        cout << "7. Most Active Institution" << endl;
        cout << "0. Keluar" << endl;
        cout << "PILIH MENU     : "; cin >> a;
        system("cls");
        }
}


