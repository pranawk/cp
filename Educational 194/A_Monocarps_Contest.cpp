//  A. Monocarp's Contest

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
        int temp,cx=0;
        bool fl=false, fz=false;
        for (int i=0; i<n; i++)
        {
            cin>>temp;
            if (temp==0)
            {
                cx++;
                if (i==0)fz=true;
                if (i==n-1)fl=true;
            }
        }
        if (cx<2)cout<<-1<<endl;
        else if (fl && fz)cout<<0<<endl;
        else if (fl || fz)cout<<1<<endl;
        else cout<<2<<endl;
    }
    return 0;
}