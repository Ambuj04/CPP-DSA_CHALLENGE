#include<bits/stdc++.h>
using namespace std;
bool helper(int mid,int m,vector<int>&a){
    int gain = 0;
    for(int i = 0;i<a.size();i++){
        if(a[i]>mid){
            gain += a[i]-mid;
        }
        if(gain>=m) return true;
    }
    return false;
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<int>a(n);
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }
    int start = 0;
    int end = 1e9;
    int ans = 0;
    for(int i = 0;i<n;i++){
        end = max(end,a[i]);
    }
    while(start<=end){
        int mid = start + (end-start)/2;
        if(helper(mid,m,a)){
            ans = mid;
            start = mid+1;
        }else{
            end = mid -1;
        }
    }
  cout<<ans;
return 0;
 }