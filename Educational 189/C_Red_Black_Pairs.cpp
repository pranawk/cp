//  C. Red-Black Pairs

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
        string s1,s2;
        cin>>s1>>s2;
        int cnt=0;
        for(int i=0; i<n; ){
            if(i+1<n && (s1[i]==s1[i+1] && s2[i]==s2[i+1])){i+=2;continue;}
            if(s1[i]==s2[i]){i++;continue;}
            if(i+1<n && (s1[i]==s1[i+1] || s2[i]==s2[i+1])){
                if(s1[i]!=s1[i+1] || s2[i]!=s2[i+1])cnt++;
                i+=2;continue;
            }
            cnt++;i++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}