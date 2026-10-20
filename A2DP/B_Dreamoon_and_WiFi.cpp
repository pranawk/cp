//  B. Dreamoon and WiFi

#include<bits/stdc++.h>
using namespace std;

int nCr(int n, int r) {
    if (r < 0 || r > n) return 0;
    int res = 1;
    for (int i = 1; i <= r; i++) {
        res = res * (n - i + 1) / i;
    }
    return res;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s1,s2;
    cin>>s1>>s2;
    int n=s1.size();
    int pp=0;
    for(int i=0; i<n; i++){if(s1[i]=='+')pp++; else pp--;}
    int q=0, qs=0;
    for(int i=0; i<n; i++){
        if(s2[i]=='+')q++;
        else if(s2[i]=='-')q--;
        else qs++;
    }

    int diff = pp - q;
    if(abs(diff)>qs || abs(qs - abs(diff))%2==1){
        cout<<"0.0000000000"<<endl;
        return 0;
    }
    int plus_needed = (qs + diff) / 2;
    float ans = (float)nCr(qs, plus_needed);
    float ss=0.50;
    for(int i=0; i<qs; i++){
        ans*=ss;
    }
    cout<<fixed<<setprecision(12)<<ans<<endl;
    return 0;
}

// #include<bits/stdc++.h>
//
// using namespace std;
//
// int main(){
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     string s1,s2;
//     cin>>s1>>s2;
//     int n=s1.size();
//     int pp=0;
//     for(int i=0; i<n; i++){if(s1[i]=='+')pp++; else pp--;}
//     int   q=0, qs=0;
//     for(int i=0; i<n; i++){
//         if(s2[i]=='+')q++;
//         else if(s2[i]=='-')q--;
//         else qs++;
//     }
//     pp=abs(pp-q);
//     float ans= 1.00;
//     float ss=0.50;
//     if(pp>qs || abs(pp-qs)%2==1){
//         cout<<"0.00"<<endl;
//         return 0;
//     }
// //     cout<<pp<<" ";
//     for(int i=0; i<pp; i++){
//         ans*=ss;
//     }
//     for(int i=0; i<(qs-pp)/2; i++)ans*=ss;
//     cout<<fixed<<setprecision(10)<<ans<<endl;
//     return 0;
// }