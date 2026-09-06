//  E. Treasure Map Destruction (Constructive Version)

#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while (tt--)
    {
        int n;
        cin>>n;
        vector<int>a(n);
        for (int i=0; i<n; i++)cin>>a[i];
        vector<int>dz(n,0);
        for (int i=0; i<n; i++)
        {
            if (a[i]!=0 && a[i]!=-1)
            {
                if (i-a[i]+1>=0)dz[i-a[i]+1]++;
                else dz[0]++;
                if (i+a[i]<n)dz[i+a[i]]--;
            }
        }
        for (int i=1; i<n; i++)
        {
            dz[i]+=dz[i-1];
        }
        bool fl=true;
        for (int i=0; i<n; i++)
        {
            if (dz[i]>0 && a[i]==0)fl=false;
        }
        if (fl==false)
        {
            cout<<-1<<endl;
            continue;
        }
        string ans;
        int cn=0;
        for (int i=0; i<n; i++)
        {
            if (dz[i]==0 && ( a[i]==-1)){a[i]=0;}
        }
        for (int i=0; i<n; i++)
        {
            if (a[i]!=0 && a[i]!=-1)
            {
                bool f1=false,f2=false;
                if ((i-a[i]>=0 && a[i-a[i]]==0))f1=true;
                if (i+a[i]<n && a[i+a[i]]==0)f2=true;
                fl&=(f1|f2);
            }
            if (a[i]==0)cn++;
        }
        if (cn==0 || fl==false){cout<<-1<<endl;continue;}
        for (int i=0; i<n; i++)
        {
            if (a[i]==0)ans+="1";
            else ans+="0";
        }
        cout<<ans<<endl;
    }
    return 0;
}
