//  B. Psychos in a Line

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int>a(n);
    for (int i=0; i<n; i++)cin>>a[i];
    int rm=a[0];
    int ans=0;
    bool fl=false;
    for (int i=1; i<n; i++)
    {
        int cn=0;
        if (a[i]<a[i-1])fl=true;
        while (i+1<n && a[i+1]<rm && a[i+1]>a[i]){cn++;i++;}
        ans=max(ans,cn);
        if (a[i]>rm)rm=a[i];
    }
    cout<<ans+fl;
    return 0;
}