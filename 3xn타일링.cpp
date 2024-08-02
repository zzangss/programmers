#include<iostream>
#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int arr[5001] = { 0, };

    arr[2] = 3;
    for (int i = 4; i <= n; i += 2) {
        arr[i] += arr[i - 2] * 3 + 2;

        for (int j = i - 4; j > 0; j--) {
            arr[i] += arr[j] * 2;
        }
    }

    return arr[n];
}

int main() {
    int n;
    cin >> n;
    

    cout << solution(n);
}