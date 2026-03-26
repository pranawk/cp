//  A. Bingo Candies

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
        unordered_map<int,int>cnt;
        int a;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cin>>a;
                cnt[a]++;
            }
        }
        bool fl=true;
        for(auto i: cnt)if(i.second>((n)*(n)-n))fl=false;
        cout<<((fl==true) ? "YES" :"NO")<<endl;
    }
    return 0;
}