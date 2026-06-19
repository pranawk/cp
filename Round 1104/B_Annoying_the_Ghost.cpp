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
        vector<int>a(n),b(n);
        for(int i=0; i<n; i++)cin>>a[i];
        for(int i=0; i<n; i++)cin>>b[i];

        vector<int> c=a, d=b;
        sort(c.begin(),c.end());
        sort(d.begin(),d.end());

        bool fl=true;
        for(int i=0; i<n; i++){
            if(c[i]>d[i]) fl=false;
        }
        if(!fl){
            cout<<-1<<"\n";
            continue;
        }
        vector<int> L(n);
        for(int i=0;i<n;i++){
            int pos = lower_bound(b.begin(), b.end(), a[i]) - b.begin() + 1;
            L[i] = pos;
        }
        set<int> available;
        for(int i=1;i<=n;i++) available.insert(i);
        vector<int> p(n);
        bool pos = true;
        for(int i=0;i<n;i++){
            auto it = available.lower_bound(L[i]);
            if(it == available.end()){
                pos = false;
                break;
            }
            p[i] = *it;
            available.erase(it);
        }

        if(!pos){
            cout<<-1<<"\n";
            continue;
        }
        vector<int> bit(n+1,0);
        auto add = [&](int idx, int val){
            for(; idx<=n; idx += idx & -idx) bit[idx] += val;
        };
        auto sum = [&](int idx){
            int res=0;
            for(; idx>0; idx -= idx & -idx) res += bit[idx];
            return res;
        };
        long long ans=0;
        for(int i=0;i<n;i++){
            ans += i - sum(p[i]);
            add(p[i], 1);
        }
        cout<<ans<<endl;
    }
    return 0;
}