//  MEX Reordering

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
        int zc=0,oc=0;
//        int i;
        vector<int>ii(n);
        for(int i=0; i<n; i++){cin>>ii[i];if(ii[i]==0)zc++;if(ii[i]==1)oc++;}
//        while(n--){
//            cin>>i;
//            if(i==0)zc++;
//            if(i==1)oc++;
//        }
        if(zc==1 ||(zc>1 && oc>0))cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}