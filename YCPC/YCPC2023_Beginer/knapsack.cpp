#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007


int const N=1000000;
int wt[N];
int val[N];
int n,b;

int knapSack(int W, int n){
 
    if (n == 0 || W == 0)
        return 0;
 
    if (wt[n - 1] > W)
        return knapSack(W, n - 1);
 
    
    else
        return max(val[n - 1]+ knapSack(W - wt[n - 1],n - 1),knapSack(W, n - 1));
}

int main(){
    cin>>n>>b;
   
    for(int i=0;i<n;i++){
        cin>>wt[i];
    }
    for(int i=0;i<n;i++){
        cin>>val[i];
    }

    cout<<knapSack(b,n)<<endl;

    return 0;
}
