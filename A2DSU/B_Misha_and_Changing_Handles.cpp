//  B. Misha and Changing Handles

#include<bits/stdc++.h>

using namespace std;

int find(int i , vector<int>&parent){
    if(parent[i]==i)return i;
    return parent[i]=find(parent[i],parent);
}
void Union(int i, int j, vector<int>&parent){
    int p_i=find(i,parent);
    int p_j=find(j,parent);
    if(p_i!=p_j){
        int mn=min(p_i,p_j);
        parent[p_i]= mn;
        parent[p_j]= mn;
        parent[i]=mn;
        parent[j]=mn;
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<string>ids;
    vector<pair<string,string>>idd;
    unordered_set<string>st;
    unordered_map<string,int>mp;
    int ii=0;
    for(int i=0; i<n; i++){
        string a,b;
        cin>>a>>b;
        if(st.find(b)==st.end()){
            if(!mp.count(a)){
                ids.push_back(a);
                mp[a]=ii;
                ii++;
            }
            if(!mp.count(b)){
                ids.push_back(b);
                mp[b]=ii;
                ii++;
            }
            idd.push_back({a,b});
        }
        st.insert(a); st.insert(b);
    }
    vector<int>parent(ii);
    for(int i=0; i<ii; i++)parent[i]=i;
    for(int i=0; i<idd.size(); i++){
        Union(mp[idd[i].first],mp[idd[i].second], parent);
    }
    unordered_set<int>st2;
    vector<pair<string,string>>ans;
    for(int i=idd.size()-1; i>=0; i--){
        if(st2.find(find(mp[idd[i].second], parent))==st2.end()) {
            ans.push_back({ids[find(mp[idd[i].second],parent)], idd[i].second});
        }
        st2.insert(find(mp[idd[i].second],parent));
    }
    cout<<ans.size()<<endl;
    for(int i=0; i<ans.size(); i++)cout<<ans[i].first<<" "<<ans[i].second<<endl;
    return 0;
}