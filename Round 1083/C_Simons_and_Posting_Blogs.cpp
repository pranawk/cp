//  C. Simons and Posting Blogs

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
        vector<vector<int>>blogs(n);
        for(int i=0; i<n; i++){
            int sz,a;
            cin>>sz;
            for(int j=0; j<sz; j++){
                cin>>a;
                blogs[i].push_back(a);
            }
            reverse(blogs[i].begin(),blogs[i].end());
        }
        for(int i=0; i<n; i++){
            unordered_set<int>st;
            vector<int>pp;
            for(int j=0; j<blogs[i].size(); j++){
                if(st.find(blogs[i][j])==st.end())pp.push_back(blogs[i][j]);
                st.insert(blogs[i][j]);
            }
            blogs[i]=pp;
        }
        sort(blogs.begin(),blogs.end(),greater<vector<int>>());
        set<int>st;
        vector<int>ans;
        int ii=n-1;
        for(int j=0; j<blogs[ii].size(); j++){
            ans.push_back(blogs[ii][j]);
            st.insert(blogs[ii][j]);
        }
        blogs.pop_back();
        ii--;
        while(ii>=0){
            for(int i=0; i<blogs.size(); i++){
                vector<int>pp;
                for(int j=0; j<blogs[i].size(); j++){
                    if(st.find(blogs[i][j])==st.end())pp.push_back(blogs[i][j]);
                }
                blogs[i]=pp;
            }
            sort(blogs.begin(),blogs.end(),greater<vector<int>>());
            for(int j=0; j<blogs[ii].size(); j++){
                ans.push_back(blogs[ii][j]);
                st.insert(blogs[ii][j]);
            }
            blogs.pop_back();
            ii--;
        }
        for(int i=0; i<ans.size(); i++)cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}