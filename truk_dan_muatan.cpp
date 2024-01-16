#include <iostream>
#include <map>
#include <string>
#include <set>

using namespace std;

//----kode di atas batas ini tidak boleh diganti atau ditambah----

map<int, map<int, int>> truk;

void bobot_maks(int n, int kontainer[][2]) {
    int dp[n + 1];

    for (int i = 0; i <= n; ++i) {
        dp[i] = 0;
    }

    for (int i = 1; i <= n; ++i) {
        int bobot_maksimal = 0;
        for (int j = 0; j < i; ++j) {
            if (kontainer[j][0] >= i - j) {
                bobot_maksimal = max(bobot_maksimal, dp[j] + kontainer[i - 1][1]);
            }
        }
        dp[i] = max(dp[i - 1], bobot_maksimal);
    }

    cout << "bobot maksimal = " << dp[n] << " Kg." << endl;
}

int main() {
    //Contoh 1
    int n1 = 4;
    int kontainer1[][2] = {{3, 100}, {2, 200}, {1, 300}};
    bobot_maks(n1, kontainer1);

    //Contoh 2
    int n2 = 3;
    int kontainer2[][2] = {{1, 150}, {5, 50}, {2, 300}};
    bobot_maks(n2, kontainer2);

    return 0;
}
