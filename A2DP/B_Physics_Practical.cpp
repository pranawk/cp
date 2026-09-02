//  B. Physics Practical

#include<bits/stdc++.h>

using namespace std;
int n;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ifstream input("input.txt");
    ofstream output("output.txt");
    string line;
    getline(input,line);
    n=stoi(line);
    getline(input,line);
    vector<int>a;
    int temp=0;
    for (int i=0; i<line.size();i++)
    {
         if (line[i]==' ')
         {
             a.push_back(temp);
             temp=0;
         }
         else temp=temp*10+line[i]-'0';
    }
    a.push_back(temp);
    sort(a.begin(),a.end());
    input.close();
    int l=0,r=0;
    int ans=0;
    while (r<n)
    {
        while (r<n && a[l]*2>=a[r])r++;
        ans=max(ans,r-l);
        l++;
    }
    output<<n-ans;
    output.close();
    return 0;
}
