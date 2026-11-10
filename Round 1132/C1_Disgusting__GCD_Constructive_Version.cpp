//  C1. Disgusting + GCD (Constructive Version)
// gcd(a,x) = gcd(a, a+x) -> gcd(a,prime-a)= gcd(a, prime) = 1 | prime
#include<bits/stdc++.h>

using namespace std;
vector<int>primes;
void primeset(vector<int>&primese){
    vector<bool>primes(1000001, true);
    for(int i=2; i<1000001; i++){
        for(int j=i+i; j<1000001; j+=i){
            primes[j]=false;
        }
    }
    for(int i=2; i<1000001; i++)if(primes[i]==true)primese.push_back(i);
}
int solve(int n){
    int l=0,r=primes.size()-1;
    while(l<r){
        int mid=l+(r-l)/2;
        if(primes[mid]<n)l=mid+1;
        else r=mid;
    }
    return primes[l];
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    primeset(primes);
    while(tt--){
        int n;
        cin>>n;
        int temp;
        for(int i=0; i<n; i++){
            cin>>temp;
            cout<<solve(temp)<<" ";
        }
        cout<<'\n';
    }
    return 0;
}