//  B. KiaKio and Squared Numbers

#include<bits/stdc++.h>

using namespace std;

unordered_map<string,int>mp;
void giv(int a){
        string s=to_string(a);
        s+="_";
        mp[s]++;
        unordered_set<int>st;
        st.insert(a);
        for(int i=0; i<10000; i++){
            int aa=0;
            while(a>0){
                aa+=pow((a%10), 2);
                a/=10;
            }
            a=aa;
            if(st.find(a)!=st.end())break;
            st.insert(a);
            string s2=to_string(a);
            s2+="_";
            s2+=to_string(i);
//             cout<<s2<<" "<<i<<endl;
            mp[s2]++;
        }
        return ;
    }
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0; i<n; i++)cin>>a[i];
        for(int i=0; i<n; i++)giv(a[i]);
        int ans=0;
        for(auto i:mp){ans=max(ans,i.second);}
        cout<<ans<<endl;
    }
    return 0;
}