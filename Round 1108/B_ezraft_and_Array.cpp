//  B. ezraft and Array

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
        long long sum=6;
        if(n==1)cout<<"1"<<endl;
        else if(n==2)cout<<-1<<endl;
        else{
            cout<<"2 4 ";
            for(int i=0; i<n-2; i++){
                cout<<sum<<" ";
                sum+=sum;
            }
            cout<<endl;
        }
    }
    return 0;
}