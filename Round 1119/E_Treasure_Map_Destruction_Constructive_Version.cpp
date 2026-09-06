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
        vector<pair<int,int>>pts;
        for (int i=0; i<n; i++)if (a[i]!=-1)pts.push_back({a[i],i});
        bool fl=true;
        for (int i=1; i<pts.size(); i++)
        {
            int dif=abs(pts[i].first-pts[i-1].first);
            if (dif>pts[i].second-pts[i-1].second)
            {
                fl=false;break;
            }
            // if (pts[i].first>=pts[i-1].first)
            // {
                int j,k;
                for (j=pts[i].second-1; j>pts[i-1].second; j--)
                {
                    if (a[j+1]==0){j++;break;}
                    a[j]=a[j+1]-1;
                    if (a[j]==0)break;
                }
                for (k=pts[i-1].second+1; k<=j; k++)
                {
                    a[k]=a[k-1]-1;
                    if (a[k]==0)break;
                }
                // k++;
                // if (j-1!=k && (j-k)%2==0){a[k]=1;k++;}
                bool bb=true;
                // cout<<j<<" "<<k<<endl;
                for (int l=k+1; l<j; l++)
                {
                    // if (l>=j)break;
                    if (bb==true)a[l]=1;
                    else a[l]=0;
                    bb^=1;
                }
            // }
        }
        if (pts.size()!=0)
        {
            int dif=1;
            for (int i=pts[0].second-1; i>=0; i--)
            {
                if (a[i+1]==0)dif=-1;
                a[i]=a[i+1]-dif;
            }
            dif=1;
            for (int i=pts[pts.size()-1].second+1; i<n; i++)
            {
                if (a[i-1]==0)dif=-1;
                a[i]=a[i-1]-dif;
            }
        }
        else
        {
            for (int i=0; i<n; i++)a[i]=i;
        }
        for (int i=0; i<n; i++)cout<<a[i]<<" ";
        string ans;
        bool desc;
        if (n>1&& a[1]>a[0])desc=false;
        if (a[0]==0)ans="1";
        else ans="0";
        for (int i=1; i<n; i++)
        {
           char c;
            if (a[i]==0){desc=true;c='1';}
            else
            {
                if (a[i]==a[i-1] && (a[i]!=0||a[i]!=1))fl=false;
                if (desc==true && a[i]-a[i-1]>1)fl=false;
                else if (desc==false && a[i-1]-a[i]>1)fl=false;
                c='0';
            }
            ans.push_back(c);
        }
        if (fl==false)cout<<"-1";
        else cout<<ans;
        cout<<endl;
    }
    return 0;
}
