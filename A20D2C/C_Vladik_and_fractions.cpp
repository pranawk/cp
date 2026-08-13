//  C. Vladik and fractions

#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    if(n%2==1){
        long long n1=n;
        long long n2=n+1;
        long long n3=n2*(n2-1);
        if(n1==n2||n2==n3||n1==n3){cout<<-1<<endl;return 0;}
        cout<<n1<<" "<<n2<<" "<<n3<<endl;
    }
    else{
        long long n1=n;
        long long n2=n+1;
        long long n3=n2*(n2-1);
        if(n1==n2||n2==n3||n1==n3){cout<<-1<<endl;return 0;}
        cout<<n1<<" "<<n2<<" "<<n3<<endl;
    }
    return 0;
}