//  A. Carnival Wheel

#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin>>tt;
    while(tt--){
        int l,a,b;
        cin>>l>>a>>b;
        vector<bool>visited(l,false);
        int i=a;
        while(visited[i]==false){
            visited[i]=true;
            i=(i+b)%l;
        }
        int ans=0;
        for(int i=0; i<l; i++)if(visited[i]==true)ans=max(ans,i);
        cout<<ans<<endl;
    }
    
    return 0;
}
