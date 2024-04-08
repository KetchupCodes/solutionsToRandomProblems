#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve() {
    freopen("shuffle.in", "r", stdin);
    freopen("shuffle.out", "w", stdout);
    ll numberOfCows;
    cin>>numberOfCows;

    vector<ll> reverseShufflingOrder(numberOfCows);
    vector<ll> cowOrderAfterShuffling(numberOfCows);
    for(ll i=0;i<numberOfCows;i++){
        ll order;
        cin>>order;
        order--;

        reverseShufflingOrder[order]=i;
    }
    for(ll i=0;i<numberOfCows;i++){
        cin>>cowOrderAfterShuffling[i];
    }

    vector<ll> tempArray(numberOfCows);
    for(ll i=0;i<numberOfCows;i++){
        ll position = reverseShufflingOrder[reverseShufflingOrder[reverseShufflingOrder[i]]];
        // ll temp = cowOrderAfterShuffling[position];
        tempArray[position] = cowOrderAfterShuffling[i];
    }
    for(ll i=0;i<numberOfCows;i++){
        cout<<tempArray[i]<<endl;
    }
    

}

int main() {
    solve();
    return 0;
}