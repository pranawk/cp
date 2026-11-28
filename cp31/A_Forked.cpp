//  A. Forked!

#include<bits/stdc++.h>

using namespace std;
int a,b;
bool good(int aa, int bb, int c, int d, int e, int f){
    int cn=0;
    if(aa+a==c && bb+b==d)cn++;
    if(aa-a==c && bb-b==d)cn++;
    if(aa+a==c && bb-b==d)cn++;
    if(aa-a==c && bb+b==d)cn++;
    if(a!=b){
    if(aa+b==c && bb+a==d)cn++;
    if(aa-b==c && bb-a==d)cn++;
    if(aa+b==c && bb-a==d)cn++;
    if(aa-b==c && bb+a==d)cn++;}

    if(aa+a==e && bb+b==f)cn++;
    if(aa-a==e && bb-b==f)cn++;
    if(aa+a==e && bb-b==f)cn++;
    if(aa-a==e && bb+b==f)cn++;
    if(a!=b){
    if(aa+b==e && bb+a==f)cn++;
    if(aa-b==e && bb-a==f)cn++;
    if(aa+b==e && bb-a==f)cn++;
    if(aa-b==e && bb+a==f)cn++;}
    if(cn==2)return true;
    return false;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        int x,y,p,q;
        cin>>a>>b>>x>>y>>p>>q;
        int ans=0;
        if(good(x+a, y+b, x,y,p,q)==true)ans++;
        if(good(x-a, y-b, x,y,p,q)==true)ans++;
        if(good(x+a, y-b, x,y,p,q)==true)ans++;
        if(good(x-a, y+b, x,y,p,q)==true)ans++;
        if(a!=b){
            if(good(x+b, y+a, x,y,p,q)==true)ans++;
            if(good(x-b, y-a, x,y,p,q)==true)ans++;
            if(good(x+b, y-a, x,y,p,q)==true)ans++;
            if(good(x-b, y+a, x,y,p,q)==true)ans++;
        }
        cout<<ans<<'\n';
    }
    return 0;
}