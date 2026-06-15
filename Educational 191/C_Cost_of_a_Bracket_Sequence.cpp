//  C. Cost of a Bracket Sequence

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        int n,m;
        cin>>n>>m;
        string s;
        cin>>s;
        set<int>ans;
        while(m--){
            stack<pair<int,int>>st;
            priority_queue<pair<int,int>>pq;
            int ii=0;
            for(int i=0; i<s.size(); i++){
                if(ans.find(i)!=ans.end())continue;
                if(s[i]=='(')st.push({i, ii});
                else{
                    if(!st.empty()){
                        if(st.size()>1)pq.push({ii-st.top().second, i});
                        else pq.push({ii-st.top().second, st.top().first});
                        st.pop();
                    }
                }
                ii++;
            }
            if(pq.size()>0)ans.insert(pq.top().second);
        }
        string an;
        //for(auto i:ans)cout<<i<<" ";
        for(int i=0; i<n; i++){
            if(ans.find(i)!=ans.end()){
                an+='1';
            }
            else an+='0';
        }
        cout<<an;
        cout<<endl;
    }
    return 0;
}