#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool customComparison(vector<int> a, vector<int> b) 
{ 
    return a[0] < b[0];  
} 
void solve() {
    freopen("blist.in", "r", stdin);
    freopen("blist.out", "w", stdout);
    int maxTime =1000;
    vector<int> changeInBucketsVsTime(maxTime+1);
    int numberOfCows;
    cin>>numberOfCows;
    while(numberOfCows--){
        int st,et,b;
        cin>>st>>et>>b;
        changeInBucketsVsTime[st]+=b;
        changeInBucketsVsTime[et]-=b;
    }
    int maxBuckets =0;
    int currentBuckets =0;

    for(int i=0;i<changeInBucketsVsTime.size();i++){
        currentBuckets+=changeInBucketsVsTime[i];
        maxBuckets=max(currentBuckets,maxBuckets);
    }
    cout<<maxBuckets<<endl;


}

int main() {
    solve();
    return 0;
}