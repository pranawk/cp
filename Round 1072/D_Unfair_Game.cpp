//  D. Unfair Game

#include<bits/stdc++.h>

using namespace std;

long long sol(int bits,int pos){
    if(bits==0)return 1;
    if(bits>=pos){
        return pow(2,pos);
    }
    long long ans=1;
    int b=bits;
    for(int i=0; i<bits; i++){
        ans*=(pos-i);
    }
    return ans+sol(bits-1, pos);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        int n,k;
        cin>>n>>k;
        long long mn=1;
        int nn=n;
        int d=0;
        while(nn!=0){nn>>=1;d++;}
        int kk=min(k,d);kk--;
        while(kk>0){
            mn+=sol(k-kk, kk-1);kk--;
        }
        //cout<<sol(3,1)<<" "<<sol(4,3)<<" "<<sol(2,5);
        //return 0;
        //if(n-mn<0){cout<<0<<endl;continue;}
        cout<<n-mn<<endl;
    }
    return 0;
}