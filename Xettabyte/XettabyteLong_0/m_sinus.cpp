#include<bits/stdtr1c++.h>

using namespace std;

void A(int n, int position){
    printf("sin(%d",position);
    
    if(position < n){
        if(position & 1) putchar('-');
        else putchar('+');
        
        A(n,position + 1);
    }
    
    putchar(')');
}

void S(int n, int position){
    if(position < n){
        putchar('(');
        S(n,position + 1);
        putchar(')');
    }
    
    A(n + 1 - position,1);
    
    printf("+%d",position);
}

int main(){
    int N;
    
    cin>>N;
    
    S(N,1);
    
    return 0;
}