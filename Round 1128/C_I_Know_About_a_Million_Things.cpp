//  C. I Know About a Million Things

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
        int oc=0, ec=0;
        for(int i=0; i<n; i++){
            cin>>a[i];
            if(a[i]%2==0)ec++;
            else oc++;
        }
        if(oc==1 && ec==1)cout<<"Larpity"<<endl;
        else if(ec==0 && oc==3)cout<<"Larpity"<<endl;
        else cout<<"Moggity"<<endl;
//         if(oc%2==0){cout<<"Moggity"<<endl;continue;}
//         else if(ec>0 && oc!=1){cout<<"Moggity"<<endl;continue;}
//         else if(oc==1 && ec!=1){cout<<"Moggity"<<endl;continue;}
//         else cout<<"Larpity"<<endl;
    }
    return 0;
}