//  Concert Tickets

#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin>>n>>m;
    vector<int>t(m);
    multiset<int>h;
    int num;
    for(int i=0; i<n; i++){cin>>num;h.insert(num);}
    for(int i=0; i<m; i++){
        int ti;cin>>ti;
        auto it=h.upper_bound(ti);
        if(it==h.begin()){cout<<-1<<endl;continue;}
        else{
            cout<<*(--it)<<endl;
            h.erase(it);
        }
    }
    return 0;
}
