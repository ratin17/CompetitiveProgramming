#include <iostream>
using namespace std;

int isprime(long long N){
    if(N<2 || (!(N&1) && N!=2))
        return 0;
    for(long long i=3; i*i<=N; i+=2){
        if(!(N%i))
            return 0;
    }
    return 1;
}

void oddDivisor(long long n){
  //checking power of two or not
    if(n&1){
        cout << "YES" << endl;
    }
    else if (((n & (n - 1)) == 0)||(isprime(n))) {
        cout << "NO" << endl;
    }
    else {
        cout << "YES" << endl;
    }
}


int main() {
    int t,i;
    cin>>t;
    long long N = 5;

    // Function Call
    for(i=0;i<t;i++){
        cin>>N;
        oddDivisor(N);
    }


    return 0;
}
