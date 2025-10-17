#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    float a;
    cin>>n>>a;
    float angle=180/static_cast<float>(n);
    int num=round(a/angle);

    if(a>((n-2)*180)/n)cout<<1<<" "<<2<<" "<<3<<endl;
    else if(num==0)cout<<1<<" "<<2<<" "<<n<<endl;
    else cout<<1<<" "<<2<<" "<<n-num+1<<endl;

    return 0;
}