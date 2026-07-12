//  B. Predominant Frequency Division

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
        vector<int>a(n);
        for(int i=0; i<n; i++)cin>>a[i];
        bool fl=false;
        int cn1=0,cn2=0,cn3=0;
        int l=0;
        while(l<n ){
            if(a[l]==1)cn1++;
            else if(a[l]==2)cn2++;
            else cn3++;
            l++;
            if(cn1>cn2+cn3 && l<n && a[l]==3)continue;
            if(cn1>=cn2+cn3)break;
        }
        cn1=0;cn2=0;cn3=0;
        while(l<n){
            if(a[l]==1)cn1++;
            else if(a[l]==2)cn2++;
            else cn3++;
            l++;
            if(cn1+cn2>=cn3)break;
        }
        if(l!=n)fl=true;
        cout<<(fl==true ? "YES" : "NO")<<endl;
    }
    return 0;
}