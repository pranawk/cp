#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int lengthOfLIS(const vector<int>& nums) {
    if (nums.empty())return 0;
    vector<int> tails;
    for (int num : nums) {
        auto it = lower_bound(tails.begin(), tails.end(), num);
        if (it == tails.end()) {
            tails.push_back(num);
        } else {
            *it = num;
        }
    }
    return tails.size();
}

int minimumSortCost(const vector<int>& arr) {
    int n = arr.size();
    if (n <= 1) {
        return 0;
    }
    int lisLength = lengthOfLIS(arr);
    int minCost = n - lisLength;
    return minCost;
}

int main(){
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int n;
    cin>>n;
    cin.ignore();
    vector<string>sf;
    vector<string>oor;
    string s;
    while(s!="shuffled"){getline(cin,s);}
    unsigned nn=static_cast<unsigned>(n);
    while(sf.size()!=nn){
        getline(cin>>ws, s);
        if(s.size()==0)continue;
        sf.push_back(s);
    }
    while(s!="original"){getline(cin,s);}
    while(oor.size()!=nn){
        getline(cin>>ws, s);
        if(s.size()==0)continue;
        oor.push_back(s);
    }
    vector<int>order;
    for(int i=0; i<n; i++){
        int ii=0;
        while(sf[i]!=oor[ii])ii++;
        order.push_back(ii+1);
    }
    vector<int>fo;
    for(unsigned i=0; i<order.size(); ){
        int ii=order[i];
        while(i+1<order.size()&& order[i+1]==order[i]+1)i++;
        fo.push_back(ii);
        i++;
        if(i==order.size())break;
    }
    cout<<minimumSortCost(fo)<<endl;
    return 0;
}