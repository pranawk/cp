#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        vector<pair<int,int>>v(n-1);
        for(int i=0; i<n-1; i++){
            cin>>v[i].first >> v[i].second;
        }
        for(int i=0; i<n-1; i++){
            if(v[i].first>v[i].second)swap(v[i].first,v[i].second);
        }
        sort(v.begin(),v.end());
        unordered_set<int>set;
        for(int i=0; i<n-1; i++){
            if(set.find(v[i].first) !=set.end()){
                set.erase(v[i].first);
                set.insert(v[i].second);
            }
            else{
            set.insert(v[i].second);}
        }
        cout<<set.size()<<endl;
    }
return 0;
}