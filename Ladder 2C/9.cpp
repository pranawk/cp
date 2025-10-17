#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    if(n%2==0){
        int i=1, j=n*n;
        for(int p=0; p<n; p++){
        for(int q=0; q<n; q+=2){
            cout<<i<<" "<<j<<" ";
            i++;j--;
        }
        cout<<endl;}
    }
    else{
        int nn=(n-1)/2;int l=1,r=n*n;
        int ll= 1+nn*n;
        for(int i=0; i<n; i++){
            int p=n;
            while(p>1){
            cout<<l<<" "<<r<<" ";p-=2;l++;r--;}
            cout<<ll<<endl;ll++;
        }
    }
    return 0;
}