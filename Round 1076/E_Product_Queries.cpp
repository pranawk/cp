//  E. Product Queries

#include<bits/stdc++.h>

using namespace std;

int main() {
     ios::sync_with_stdio(false);
     cin.tie(NULL);
     int tt;
     cin >> tt;
     while (tt--) {
         int n;
         cin >> n;
         vector<int> a(n);
         for (int i = 0; i < n; i++) cin >>a[i];
         unordered_set<int> st;
         for (int x : a) st.insert(x);
         sort(a.begin(),a.end());
         vector<int>ans;
         for (int i = 1; i<= n; i++) {
             int num= i;
             int cnt= 0;
             auto it= lower_bound(a.begin(),a.end(),num);
             int li=distance(a.begin(),it);
             //cout<<li<<endl;
             while(li>=0 && num>1){
                while(li>=0 && (num%a[li])!=0)li--;
                if(li<0){break;}
                if(a[li]==1){cnt+=num; break;}
                while(num%a[li]==0){num/=a[li]; cnt++;}
                it= lower_bound(a.begin(),a.end(),num);
                li=distance(a.begin(),it);
             }
            ans.push_back(cnt);
             if (num == 1)
                 ans.push_back(cnt);
             else
                 ans.push_back(-1);
         }
         if(st.find(1)!=st.end())ans[0]=1;
         else ans[0]=-1;
         for(int i=0; i<n; i++)cout<<ans[i]<<" ";
         cout <<endl;;
     }

     return 0;
 }