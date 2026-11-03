//  D. Mr. Kitayuta's Colorful Graph

#include<bits/stdc++.h>

using namespace std;
class DSU{
    public:
    unordered_map<int,int>parent, sz;
    int find(int i){
        auto it= parent.find(i);
        if(it==parent.end())return -1;
        if(it->second==i)return i;
        return it->second= find(it->second);
    }
    void Union(int i, int j){
        int p_i=find(i);
        int p_j=find(j);
        if(p_i==p_j)return ;
        if(sz[p_i]>sz[p_j])swap(p_i, p_j);
        parent[p_i]=p_j;
        sz[p_j]+=sz[p_i];
    }
    void push(int i, int j){
        if(!parent.count(i)){
            parent[i]=i;
        }
        if(!parent.count(j)){
            parent[j]=j;
        }
        Union(i,j);
    }
};
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    unordered_map<int, DSU>vv;
//     for(int i=0; i<m; i++)vv.push_back(DSU(n));
    unordered_map<int,set<int>>mp2;
    for(int i=0; i<m; i++){
        int a, b, c;
        cin>>a>>b>>c;
        a--;b--;c--;
        mp2[a].insert(c);
        mp2[b].insert(c);
        vv[c].push(a,b);
    }
    int q;
    cin>>q;
    vector<int>ans;
    unordered_map<int, unordered_map<int,int>>mpa;
    int rt=sqrt(m);
    for(int i=0; i<m; i++){
        if(vv[i].size()>rt){
            for(auto j: vv[i].)
        }
    }
    while(q--){
        int a,b;
        cin>>a>>b;
        a--;b--;
        int ca=0;
        auto &sa = mp2[a];
        auto &sb = mp2[b];
        auto &small = (sa.size() < sb.size()) ? sa : sb;
        auto &other = (sa.size() < sb.size()) ? sb : sa;
        if(sa.size()>rt){
            ans.push_back(mpa[sa][sb]);
            continue;
        }
        for (int col : small) {
            if (!other.count(col)) continue;
            if (vv[col].find(a) == vv[col].find(b)) ca++;
        }
        ans.push_back(ca);
    }
    for(int i=0; i<ans.size(); i++)cout<<ans[i]<<'\n';
    return 0;
}