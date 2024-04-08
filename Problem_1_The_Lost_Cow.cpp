#include <bits/stdc++.h>
using namespace std;


void solve() {
    freopen("lostcow.in", "r", stdin);
    freopen("lostcow.out", "w", stdout);

    long long int N, M;
    cin >> N >> M;

    long long int ans = 0;
    long long int previousPosition = N;
    long long int distance = 1;

    while (true) {
        int currentPosition = N+distance;

        if((N<M && currentPosition>=M) || (N>M && currentPosition<=M)){
            ans += abs(previousPosition-M);
            cout<<ans<<endl;
            return;
        }
        ans += abs(previousPosition-currentPosition);
        previousPosition=currentPosition;
        distance *= -2;
    }
}

int main() {
    solve();
}