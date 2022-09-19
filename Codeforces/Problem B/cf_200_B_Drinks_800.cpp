#include<iostream>
#include <iomanip>
using namespace std;
int main(){
    long long n;
    cin>>n;
    long long d,sum=0;
    for(long long i=0;i<n;i++){
        cin>>d;
        sum+=d;
    }
    double a=(double)sum/(double)n;
    cout<<setprecision(12)<<fixed;

    cout<<a<<endl;
    return 0;
}

