#include<bits/stdc++.h>
using namespace std;
void solve(){
    freopen("shell.in", "r", stdin);
    freopen("shell.out", "w", stdout);
    int guesses ;
    cin>>guesses;
    vector<vector<int>> v(guesses,vector<int> (3,0));
    for(int i=0;i<guesses;i++){
        cin>>v[i][0];
        cin>>v[i][1];
        cin>>v[i][2];
    }
    int initial_positon = 1;
    int current_position;
    int ans = 0;
    while(initial_positon<=3){
        current_position = initial_positon;
        int temp_ans =0;
        for(int i =0;i<guesses;i++){
            if(current_position == v[i][0]){
                current_position = v[i][1];
            }
            else if(current_position==v[i][1]){
                current_position = v[i][0];
            }
            if(current_position == v[i][2]){
                temp_ans++;

            }
        }
        ans = max(ans,temp_ans);
        initial_positon++;
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