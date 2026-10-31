//  B. New Year Permutation

#include<bits/stdc++.h>

using namespace std;

int find(int i,vector<int>&parent){
    if(parent[i]==i)return i;
    return parent[i]=find(parent[i],parent);
}
void Union(int i, int j, vector<int>&parent){
    int p_i= find(i,parent);
    int p_j= find(j,parent);
    if(p_i!=p_j){
        parent[p_i]=p_j;
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0; i<n; i++)cin>>a[i];
    vector<string>mat(n);
    for(int i=0; i<n; i++)cin>>mat[i];
    vector<int>parent;
    for(int i=0; i<n; i++)parent.push_back(i);
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(mat[i][j]== '1'){
                Union(i,j,parent);
            }
        }
    }
    unordered_map<int,priority_queue<int,vector<int>,greater<int>> >mp;
    for(int i=0; i<n; i++){
        parent[i]=find(i,parent);
        mp[parent[i]].push(a[i]);
    }
    for(int i=0; i<n; i++){
        cout<<mp[parent[i]].top()<<" ";
        mp[parent[i]].pop();
    }
    return 0;
}