//  A. Maximize One MEX

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
        vector<int>a(n);
        for(int i=0; i<n; i++)cin>>a[i];
        int range= n-k;
        vector<bool>yes(range+1,false);
        int ii=-1;
        int mx=0;
        for(int i=0; i<=range; i++){
            if(a[i]<=range)yes[a[i]]=true;
            else {
                if(a[i]>mx){mx=a[i];ii=i;}
            }
        }
        if(ii==-1){cout<<-1<<endl;continue;}
        int mis;
        int jj;
        for(int i=0; i<=range; i++)if(yes[i]==false){mis=i;break;}
        for(int j=0; j<n; j++)if(a[j]==mis)jj=j;
        cout<<ii+1<<" "<<jj+1<<endl;
    }
    return 0;
}