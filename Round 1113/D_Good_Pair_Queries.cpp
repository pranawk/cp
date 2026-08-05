//  D. Good Pair Queries

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        int n,q;
        cin>>n>>q;
        string s1,s2;
        cin>>s1>>s2;
        vector<pair<int,int>>s1c(n),s2c(n); //{cn_zero,cn_one}
        int cz1=0,co1=0,cz2=0,co2=0;
        for(int i=0; i<n; i++){
            if(s1[i]=='0')cz1++;
            else co1++;
            if(s2[i]=='0')cz2++;
            else co2++;
            s1c[i]={cz1,co1};
            s2c[i]={cz2,co2};
        }
        while(q--){
            int l,r;
            cin>>l>>r;
            r--;l--;
            int cn_11=s1c[r].second;
            int cn_01=s1c[r].first;
            int cn_12=s2c[r].second;
            int cn_02=s2c[r].first;
            if(l-1>=0){
                cn_11-=s1c[l-1].second;
                cn_01-=s1c[l-1].first;
                cn_12-=s2c[l-1].second;
                cn_02-=s2c[l-1].first;
            }
            if(r==l){
                if(s1[l]!=s2[l])cout<<"NO"<<endl;
                else cout<<"YES"<<endl;
                continue;
            }
            if(cn_11/2>=l)
//            cout<<cn_11<<" "<<cn_12<<endl;
//            cout<<cn_01<<" "<<cn_02<<endl;
            if(abs(cn_11-cn_01)<=cn_02+cn_12){cout<<"YES"<<endl;continue;}
            cout<<"NO"<<endl;
        }
    }
    return 0;
}