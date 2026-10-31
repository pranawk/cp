//  B. Mr. Kitayuta's Colorful Graph

#include<bits/stdc++.h>

using namespace std;

class DSU{
  public:
    vector<int>parent;
    DSU(int n){
        for(int i=0; i<n; i++)parent.push_back(i);
    }
    int find(int i){
        if(parent[i]==i)return i;
        return parent[i]=find(parent[i]);
    }
    void Union(int i, int j){
        int p_i=find(i);
        int p_j=find(j);
        if(p_i!=p_j){
            parent[p_i]=p_j;
        }
    }
};
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    vector<DSU>vv;
    for(int i=0; i<m; i++){
        vv.push_back(DSU(n));
    }
    for(int i=0; i<m; i++){
        int a,b,c;
        cin>>a>>b>>c;
        a--; b--; c--;
        vv[c].Union(a,b);
    }
    int q;
    cin>>q;
    while(q--){
        int a,b;
        cin>>a>>b;
        a--;b--;
        int ans=0;
        for(int i=0; i<m; i++){
            if(vv[i].find(a)==vv[i].find(b))ans++;
        }
        cout<<ans<<endl;
    }
//     for(int i=0; i<m; i++){
//         for(int j=0; j<n; j++){
//             cout<<vv[i].parent[j]<<" ";
//         }
//         cout<<endl;
//     }
    return 0;
}