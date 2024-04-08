#include<bits/stdc++.h>
using namespace std;
void solve(){
    freopen("cowsignal.in", "r", stdin);
    freopen("cowsignal.out", "w", stdout);

    int row,col,amplification_factor;
    cin>>row;
    cin>>col;
    cin>>amplification_factor;
    vector<vector<char>> v(row,vector<char>(amplification_factor));
    vector<vector<char>> ans(amplification_factor*row,vector<char>(amplification_factor*col,'.'));
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>v[i][j];
        }
    }

    for(int i=0;i<ans.size();i+=amplification_factor ){
        for(int j=0;j<ans[0].size();j+=amplification_factor){

            for(int k=0;k<amplification_factor;k++){
                ans[i][j+k]=v[i/amplification_factor][j/amplification_factor];
            }
        }
        for(int k=1;k<amplification_factor;k++){
            for(int j=0;j<ans[0].size();j++){
                ans[i+k][j] = ans[i][j];
            }
        }
        
    }
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[0].size();j++){
            cout<<ans[i][j];
        }
             cout<<"\n";
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