//  B. Drazil and His Happy Friends

#include<bits/stdc++.h>

using namespace std;

int find(int i, vector<int>&parent){
    if(parent[i]==i)return i;
    return parent[i]=find(parent[i],parent);
}
void Union(int i , int j, vector<int>&parent){
    int p_i= find(i,parent);
    int p_j= find(j,parent);
    if(p_i!=p_j){
        parent[p_i]=p_j;
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    int b,g;
    cin>>b;
    vector<int>x(b);
    for(int i=0; i<b; i++)cin>>x[i];
    cin>>g;
    vector<int>y(g);
    for(int i=0; i<g; i++)cin>>y[i];
    int tp= m+n, mn=min(m,n);
    int limit=2*max(m,n);
    vector<int>parent;
    for(int i=0; i<tp; i++)parent.push_back(i);
    for(int i=0; i<2*max(n,m); i++){
        Union(n+(i%m), i % n, parent);
    }
    unordered_map<int,int>mp;
    for(int i=0; i<x.size(); i++)mp[find(x[i],parent)]++;
    for(int i=0; i<y.size(); i++)mp[find(y[i],parent)]++;
    bool fl= true;
    for(int i=0; i<tp; i++){
        if(!mp.count(find(i,parent)))fl=false;
//         cout<<find(i,parent)<<" ";
    }
    cout<<(fl==true ? "Yes" : "No");
    return 0;
}