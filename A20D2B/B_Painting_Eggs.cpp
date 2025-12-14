//  B. Painting Eggs

#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    int a,b;
    int asum=0,gsum=0;
    string s;
    for(int i=0; i<n; i++){
        cin>>a>>b;
        if(abs(asum+a-gsum)<=500){asum+=a;s+='A';}
        else{gsum+=b; s+='G';}
    }
    if(abs(asum-gsum)>500)cout<<-1<<endl;
    else cout<<s<<endl;

    return 0;
}
