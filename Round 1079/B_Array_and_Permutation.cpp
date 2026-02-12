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
        vector<int> per(n), a(n);
        unordered_map<int, int> mp;
        for(int i=0; i<n; i++){
            cin>>per[i];
            mp[per[i]] = i;
        }
        for(int i=0; i<n; i++) cin>>a[i];
        bool fl = true;
        int last_pos = -1;
        for(int i=0; i<n; i++){
            if(i == 0 || a[i] != a[i-1]){
                int current_pos = mp[a[i]];
                if(current_pos < last_pos){
                    fl = false;
                    break;
                }
                last_pos = current_pos;
            }
        }
        cout<<(fl == false ? "NO" : "YES")<<endl;
    }
    return 0;
}