#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool oddp=false;
    while(n--){
        long long a;
        cin>>a;
        if(a%2==1)oddp=true;
    }
    cout<<(oddp ? "First" : "Second")<<endl;
return 0;
}