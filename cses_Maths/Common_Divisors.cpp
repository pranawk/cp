//  Common Divisors

#include<bits/stdc++.h>

using namespace std;
int freq[1000005];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int pp;
    int mx=0;
    for(int i=0; i<n; i++){
        cin>>pp;
        freq[pp]++;
        if(pp>mx)mx=pp;
    }
    int ans=1;
    for(int i=mx; i>=1; i--){
        if(i<ans)break;
        int cn=0;
        if(freq[i]>1){ans=i;break;}
        for(int j=1; j*i<=mx ; j++){
            if(freq[j*i]>0){cn++;}
        }
        if(cn>1){ans=i;break;}
    }
    cout<<ans<<endl;
    return 0;
}
