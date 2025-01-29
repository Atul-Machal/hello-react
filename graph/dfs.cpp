#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> subArrayWithKDistinct(vector<int>&nums,int k){
    int n=nums.size();
    vector<vector<int>>ans;
    for(int i=0;i<n;i++){
        map<int,int>mp;
        vector<int>sub;
        for(int j=i;j<n;j++){
            mp[nums[j]]++;
            sub.push_back(nums[j]);
            if(mp.size()==k){
                ans.push_back(sub);
            }
            if(mp.size()>k) break;
        }
    }
    return ans;
}

int main(){
    int n=6;
    vector<int>nums(n,0);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int k=2;
    // cin>> k;
    vector<vector<int>>ans = subArrayWithKDistinct(nums,k);
    sort(ans.begin(),ans.end());
    int m=ans.size();
    for(int i=0;i<m;i++){
        int k=ans[i].size();
        for(int j=0;j<k;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}
