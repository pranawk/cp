//  A. Games on the Train

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        int a=INT_MAX,b=INT_MIN,c;
        int n;
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>c;
            if(c<a)a=c;
            if(c>b)b=c;
        }
        cout<<b-a+1<<endl;
    }
    return 0;
}