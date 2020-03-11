#include header.h

bool IsPrime(int n){

    bool prime = True;
    int i = 2;
    if (n = 1){
        prime = False;
    }else{
        while ((prime) && (i < n)){
            if (n % i == 0 ){
                prime = False;
        }else{
            i = i + 1;
        }
        }
    }
    return prime;

}

