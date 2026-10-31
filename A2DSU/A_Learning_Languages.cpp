//  A. Learning Languages

#include<bits/stdc++.h>

using namespace std;

int find(int i, vector<int>&parent){
    if(parent[i]==i)return i;
    return parent[i]=find(parent[i], parent);
}
void Union(int i, int j, vector<int>&parent){
    int p_i= find(i,parent);
    int p_j= find(j,parent);
    if(p_i!=p_j){
        parent[p_i]=p_j;
        parent[i]=p_j;
        parent[j]=p_j;
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    vector<vector<int>>lang(n);
    for(int i=0; i<n; i++){
        int k;
        cin>>k;
        vector<int>temp(k);
        int gg;
        for(int j=0; j<k; j++){cin>>gg; gg--; temp[j]=gg;}
        lang[i]=temp;
    }
    vector<int>parent;
    for(int i=0; i<m; i++)parent.push_back(i);
    for(int i=0; i<n; i++){
        for(int j=1; j<lang[i].size(); j++)Union(lang[i][j],lang[i][j-1],parent);
    }
    int ans=0;
    int ii;
    for(int i=0; i<n; i++){
        if(lang[i].size()!=0){ii=i;break;}
    }
    for(int i=0; i<n; i++){
            if(lang[i].size()==0)ans++;
            else if(find(lang[ii][0],parent)!=find(lang[i][0],parent)){
                Union(lang[ii][0],lang[i][0],parent);
                ans++;
            }
    }
    cout<<ans;
    return 0;
}