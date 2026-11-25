//  A. Unit Array

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        int oc=0,moc=0,temp;
        for(int i=0; i<n; i++){
            cin>>temp;
            if(temp==1)oc++;
            else moc++;
        }
        if(oc>=moc && moc%2==0)cout<<0<<'\n';
        else{
            int dif=0;
            if(moc>oc)dif= (moc-oc+1)/2;
            moc-=dif; oc+=dif;
            if(moc%2==1)cout<<1+dif<<'\n';
            else cout<<dif<<'\n';
        }
    }
    return 0;
}