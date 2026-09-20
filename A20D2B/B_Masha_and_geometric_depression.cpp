//  B. Masha and geometric depression

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long b,q,l,m;
    cin>>b>>q>>l>>m;
    unordered_set<long long>st;
    for(int i=0; i<m; i++){
        int temp;
        cin>>temp;
        st.insert(temp);
    }
    if(q==1){
        if(abs(b)<=l && !st.count(b))cout<<"inf";
        else cout<<0;
        return 0;
    }
    if(q==-1){
        if((abs(b)<=l && !st.count(b)) || (abs(-b)<=l && !st.count(-b))){
            cout<<"inf";
            return 0;
        }
        else{
            cout<<0;
            return 0;
        }
    }
    int ans=0;
    while(abs(b)<=l){
        if(b==0 ){
            if(st.find(0)==st.end())cout<<"inf";
            else cout<<ans;
            return 0;
        }
        if(st.find(b)==st.end())ans++;
        b*=q;
    }
    cout<<ans;
    return 0;
}