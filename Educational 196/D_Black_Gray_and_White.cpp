//  D. Black, Gray and White

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
       vector<vector<int>>adj(n+1);
       for(int i=0; i<n-1; i++){
            int a,b;
            cin>>a>>b;
            adj[a].push_back(b);
            adj[b].push_back(a);
       }
        if(n%2==0){cout<<n+1<<endl; continue;}
        //c1- mid
        int aa=(n+1)/2;
        int gg=aa*2;
        bool fl=false;
        for(int i=0; i<adj[aa].size(); i++){
            unordered_set<int>st;
            queue<int>q;
            q.push(adj[aa][i]);
            vector<bool>visited(n+1,false);
            visited[aa]=true;
            while(!q.empty()){
                int qd=q.front();
                visited[qd]=true;
                q.pop();
                if(st.find(gg -qd)!=st.end()){
                    st.erase(gg -qd);
                }
                else{
                    if(gg-qd==qd)continue;
                    st.insert(qd);
                }
                for(int j=0; j<adj[qd].size(); j++){
                    if(visited[adj[qd][j]]==true)continue;
                    q.push(adj[qd][j]);
                }
            }
            if(st.size()>0){
                cout<<gg <<endl;
                fl=true;
                break;
            }
        }
        if(fl==true)continue;
        //c2- mx
        aa=n;
        gg=n;
        for(int i=0; i<adj[aa].size(); i++){
            unordered_set<int>st;
            queue<int>q;
            q.push(adj[aa][i]);
            vector<bool>visited(n+1,false);
            visited[aa]=true;
            while(!q.empty()){
                int qd=q.front();
                visited[qd]=true;
                q.pop();
                if(st.find(gg -qd)!=st.end()){
                    st.erase(gg -qd);
                }
                else{
                    if(gg-qd==qd)continue;
                    st.insert(qd);
                }
                for(int j=0; j<adj[qd].size(); j++){
                    if(visited[adj[qd][j]]==true)continue;
                    q.push(adj[qd][j]);
                }
            }
            if(st.size()>0){
                cout<<gg <<endl;
                fl=true;
                break;
            }
        }
        if(fl==true)continue;
        // c3- mn
        aa=1;
        gg=n+2;
        for(int i=0; i<adj[aa].size(); i++){
            unordered_set<int>st;
            queue<int>q;
            q.push(adj[aa][i]);
            vector<bool>visited(n+1,false);
            visited[aa]=true;
            while(!q.empty()){
                int qd=q.front();
                visited[qd]=true;
                q.pop();
                if(st.find(gg -qd)!=st.end()){
                    st.erase(gg -qd);
                }
                else{
                    if(gg-qd==qd)continue;
                    st.insert(qd);
                }
                for(int j=0; j<adj[qd].size(); j++){
                    if(visited[adj[qd][j]]==true)continue;
                    q.push(adj[qd][j]);
                }
            }
            if(st.size()>0){
                cout<<gg <<endl;
                fl=true;
                break;
            }
        }
        if(fl==true)continue;
        cout<<n<<endl;
    }
    return 0;
}