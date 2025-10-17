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
        vector<int>mp;
        int i=0;
        while(n--){
            int ii;
            cin>>ii;
            if(find(mp.begin(),mp.end(),ii)!=mp.end()){
                i++;
                int j=ii%10;
                int jj=ii/10;
                while(find(mp.begin(),mp.end(),jj*10+j%10)!=mp.end())j++;
                mp.push_back(jj*10+j%10);
            }
            else mp.push_back(ii);
        }
        cout<<i<<endl;
        for(auto i : mp){
            if(i<1000)cout<<'0'<<i<<endl;
            else cout<<i<<endl;
        }
    }
    return 0;
}