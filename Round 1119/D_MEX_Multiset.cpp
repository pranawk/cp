//  D. MEX Multiset

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
        for (int i=0; i<n; i++)cin>>a[i];
        string ans;
        int cn=0;
        for (int i=0; i<n; i++)
        {
            if (a[i]==0)
            {
                if (cn==0)ans+="A";
                else ans+="B";
                cn++;

            }
            else ans+="C";
        }
        if (cn==0)
        {
            cout<<"YES"<<endl;
            for (int i=0; i<n ; i++)cout<<"A";
            cout<<endl;
        }
        else if (cn<2)cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            cout<<ans<<endl;
        }

    }
    return 0;
}