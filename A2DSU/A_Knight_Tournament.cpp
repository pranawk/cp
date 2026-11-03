//  A. Knight Tournament

#include<bits/stdc++.h>

using namespace std;

int find(int i, vector<int>&parent){
    if(parent[i]==i)return i;
    return parent[i]=find(parent[i],parent);
}
void Union(int i , int j , vector<int>& parent){
    int p_i=find(i,parent);
    int p_j=find(j,parent);
    if(p_i!=p_j){
        parent[p_i]=p_j;
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    vector<int>parent;
    for(int i=0; i<n; i++)parent.push_back(i);
    for(int i=0; i<m; i++){
            
    }
    return 0;
}