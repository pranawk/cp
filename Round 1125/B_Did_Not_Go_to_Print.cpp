//  B. Did Not Go to Print

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
        string s;
        cin>>s;
        vector<bool>done(n+1,false);
        stack<int>st;
        for(int i=0; i<n; i++){
            if(s[i]=='1')st.push(i+1);
            if(s[i]=='2'){
                    if(!st.empty()){done[st.top()]=true;
                    st.pop();}
                    else done[i+1]=true;
                }
            if(s[i]=='3')done[i+1]=true;
        }
        vector<int>ans;
        for(int i=1; i<=n; i++)if(done[i]==false)ans.push_back(i);
        cout<<ans.size()<<endl;
        if(ans.size()>0)for(int i=0; i<ans.size(); i++)cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}