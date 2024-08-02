#include<iostream>
#include <string>
#include <vector>
#define MOD 1000000007

using namespace std;

long long solution(int n) {
    long long arr[5001] = { 0, };

    arr[2] = 3;
    for (int i = 4; i <= n; i += 2) {
        arr[i] += (arr[i - 2] * 3 + 2)%MOD;

        for (int j = i - 4; j > 0; j--) {
            arr[i] += (arr[j] * 2)%MOD;
        }
    }

    return arr[n]%MOD;
}

int main() {
    int n;
    cin >> n;
    

    cout << solution(n);
}