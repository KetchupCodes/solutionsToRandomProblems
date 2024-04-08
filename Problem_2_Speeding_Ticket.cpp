#include<bits/stdc++.h>
using namespace std;


void solve(){
    freopen("speeding.in", "r", stdin);
    freopen("speeding.out", "w", stdout);

    int N,M;
    cin>>N>>M;
    vector<int> speed_limit_and_cow_speed(101);
    int start_1 =1;
    int start_2=1;
    for(int i=0;i<N;i++){
        int miles, speed;
        cin>>miles;
        cin>>speed;
        while(miles--){
            speed_limit_and_cow_speed[start_1]=speed;
            start_1++;
        }
    }
    for(int i=0;i<M;i++){
        int miles, speed;
        cin>>miles;
        cin>>speed;
        while(miles--){
            speed_limit_and_cow_speed[start_2] = speed - speed_limit_and_cow_speed[start_2];
            start_2++;
        }
    }
    int ans =0;
    for(int i=1;i<101;i++){
        ans = max(speed_limit_and_cow_speed[i],ans);
    }
    cout<<ans;
}
int main(){
    // int a;
    // cin>>a;
    // while(a--){
    //     solve();
    // }
    solve();
}