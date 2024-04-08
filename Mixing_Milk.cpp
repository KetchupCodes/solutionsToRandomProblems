#include<bits/stdc++.h>
using namespace std;
void solve(){
    freopen("mixmilk.in", "r", stdin);
    freopen("mixmilk.out", "w", stdout);
    vector<pair<int,int>> buckets(3,{0,0});
    for(int i=0;i<3;i++){
        cin>>buckets[i].first;
        cin>>buckets[i].second;
    }
    for(int i=0;i<100;i++){
        int bucket_1 = i%3;
        int bucket_2 = (bucket_1 +1)%3;

        buckets[bucket_2].second += buckets[bucket_1].second;
        if(buckets[bucket_2].second<=buckets[bucket_2].first){
            buckets[bucket_1].second =0;
        }
        else{
            buckets[bucket_1].second =  buckets[bucket_2].second-buckets[bucket_2].first ;
            buckets[bucket_2].second = buckets[bucket_2].first;
        }

    }
    for(int i=0;i<3;i++){
        cout<<buckets[i].second<<"\n";
    }


}
int main(){
    // int a;
    // cin>>a;
    // while(a--){
    //     solve();
    // }
    solve();
}