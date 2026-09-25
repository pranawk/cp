//  A. Turn Into a Palindrome

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
        char c;
        cin>>c;
        string s;
        cin>>s;
        int l=0,r=n-1;
        int ans=0;
        while(l<r){
            if(s[l]==s[r]){l++;r--;continue;}
            else{
                if(s[l]==c || s[r]==c)ans+=1;
                else ans+=2;
                }
            l++;r--;
        }
        cout<<ans<<endl;
    }
    return 0;
}