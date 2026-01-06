//  A. New Year String

#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin>>tt;
    while(tt--){
    int n;cin>>n;
        string s;
        cin>>s;
        int tf=0,ts=0;
        for(int i=3; i<s.size(); i++){
            if(s[i]=='5'&&s[i-1]=='2'&&s[i-2]=='0'&& s[i-3]=='2')tf++;
            if(s[i]=='6'&&s[i-1]=='2'&&s[i-2]=='0'&&s[i-3]=='2')ts++;
        }
        int ans=0;
        //cout<<tf<<" "<<ts<<endl;
        if(tf>0&&ts==0)ans++;
        cout<<ans<<endl;
    }
    
    return 0;
}
