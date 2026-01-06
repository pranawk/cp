#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,a;
    cin>>n>>a;
    int lc=0,ec=0,gc=0;
    int aa;
    for(int i=0; i<n; i++){
        cin>>aa;
        if(aa<a)lc++;
        else if(aa==a)ec++;
        else gc++;
    }
    int ans=0;
    if(ec==0){ec=1;ans++;n++;}
    if(lc<gc){
        while(lc+ec<(n+1)/2){lc++;n++;ans++;}
    }
    else{
        while(lc+1>(n+1)/2){n++;ans++;}
    }
    cout<<ans<<endl;
    return 0;
}