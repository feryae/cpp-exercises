#include <iostream>
#include algorithm.cpp

using namespace std;

int main()
{
    int x,y;
    cout<<"Input the first number : "<<endl;
    cin>>x>>endl;
    cout<<"Input the second number : "<<endl;
    cin>>y>>endl;
    cout<<"These are the outputs : "<<endl;

    while (x <= y){
        if (isPrime(x)){
            cout<<x<<endl;
        }
        x = x+1;
    }

    return 0;
}
