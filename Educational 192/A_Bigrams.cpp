//  A. Bigrams

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        int n,temp;
        cin>>n;
        int tc=0,thc=0;
        for(int i=0; i<n; i++){
            cin>>temp;
            if(temp>2)thc++;
            if(temp==2)tc++;
        }
        //cout<<thc<<" "<<tc;
        cout<<((tc>1 || thc>0) ? "YES": "NO")<<endl;
    }
    return 0;
}