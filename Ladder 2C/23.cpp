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
        priority_queue<int, vector<int>, greater<int>>ans;
        unordered_set<int>st;
        ans.push(0);st.insert(0);
        for(int i=1; i*i<=n; i++){
            if(n-i*(n/i)<(n/i)){
                if(st.find(i)==st.end()){st.insert(i);ans.push(i);}
                if(st.find(n/i)==st.end()){st.insert(n/i);ans.push(n/i);}
            }
        }
        cout<<ans.size()<<endl;
        while(!ans.empty()){
            cout<<ans.top()<<" ";
            ans.pop();
        }
        cout<<endl;
    }
    return 0;
}