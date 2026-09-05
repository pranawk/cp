//  B. Minus Two

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
        int ans=0;
        vector<int>pp(3,0);
        for (int i=0; i<n; i++)
        {
            if (a[i]%2==1)pp[1]++;
            else if ((a[i]/2)%2==1)pp[0]++;
            else pp[2]++;
        }
        cout<<max(pp[0],max(pp[1],pp[2]))<<endl;
    }
    return 0;
}