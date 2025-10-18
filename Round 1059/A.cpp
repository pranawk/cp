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
        int num=INT_MIN;
        while(n--){
            int a;
            cin>>a;
            if(a>num)num=a;
        }
        cout<<num<<endl;
    }
    return 0;
}