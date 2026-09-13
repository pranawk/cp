//  B. Min Matrices

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        int n,k;
        cin>>n>>k;
        if (k<n || k>=2*n){cout<<-1<<endl;continue;}
        vector<vector<int>>a(n,vector<int>(n,-1));
        int t1=2*n-k;
        int i, cn=1;
        for (i=0; i<t1; i++)
        {
            a[i][i]=cn;
            cn++;
        }
        for (int j=i; j<n; j++)
        {
            a[j][i-1]=cn;
            cn++;
        }
        for (int j=i; j<n; j++)
        {
            a[i][j]=cn;
            cn++;
        }
        for (int i=0; i<n; i++)
        {
            for (int j=0; j<n; j++)
            {
                if (a[i][j]==-1){a[i][j]=cn; cn++;}
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
