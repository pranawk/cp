//  D. Hypercarp and Interdimensional Jumps

#include<bits/stdc++.h>

using namespace std;
int dis=INT_MAX;
string ans;
int x,y;
void solve(int i, int j, string cs, int p,int q){
    if(i>x || j>y)return ;
    //cout<<(x-i)*(x-i)+(y-j)*(y-j)<<" ";
    if((x-i)*(x-i)+(y-j)*(y-j)<dis){dis=(x-i)*(x-i)+(y-j)*(y-j);ans=cs;}
    if(i+p>x || j+q>y){
        return;
    }
    solve(i+p+1,j+q,cs+"X",p+1,q);
    solve(i+p,j+q+1,cs+"Y",p,q+1);
    return ;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        cin>>x>>y;
        dis=INT_MAX;
        solve(0,0,"",0,0);
        cout<<ans<<endl;
    }
    return 0;
}