//  C. Hard Process

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    for (int i=0; i<n; i++)cin>>a[i];
    int l=0,r=0;
    int ci=0, al=0,ar=-1;
    while (r<n)
    {
        if (a[r]==0)ci++;
        if (ci>k)
        {
            if (ar-al< r-1-l)
            {
                al=l; ar=r-1;
            }
            while (ci>k)
            {
                if (a[l]==0)ci--;
                l++;
            }
        }
        r++;
    }
    if (ar-al<r-l-1){al=l;ar=r-1;}
    cout<<ar-al+1<<endl;
    for (int i=0; i<n; i++)
    {
        if (i>=al && i<=ar)cout<<1<<" ";
        else cout<<a[i]<<" ";
    }
    return 0;
}