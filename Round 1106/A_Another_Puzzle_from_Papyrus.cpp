//  A. Another Puzzle from Papyrus

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        int n,c;
        cin>>n>>c;
        vector<int>a(n),b(n);
        for(int i=0; i<n; i++)cin>>a[i];
        for(int j=0; j<n; j++)cin>>b[j];
        int a1=0;bool fl=true;
        for(int i=0; i<n; i++){
            if(a[i]>=b[i])a1+=a[i]-b[i];
            else {fl=false;break;}
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        int a2=0;
        bool fl2=true;
        for(int i=0; i<n; i++){
            if(a[i]>=b[i])a2+=a[i]-b[i];
            else {fl2=false; break;}
        }
        if(fl2==false){cout<<-1<<endl;continue;}
        if(fl==true)cout<<min(a1, a2+c)<<endl;
        else cout<<a2+c<<endl;
    }
    return 0;
}