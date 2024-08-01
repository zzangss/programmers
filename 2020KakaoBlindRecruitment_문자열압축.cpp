#include<iostream>
#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = s.size();
    string temp = "";

    for (int i = 1; i <= s.size(); i++) {
        int cnt = 1;
        int sum = s.size();
        temp = s.substr(0, i);
        for (int j = i; j < s.size(); j += i) {
            if (i + j > s.size()) break;
            if (temp == s.substr(j, i)) cnt++;
            else {
                if (cnt > 1) {
                    sum += to_string(cnt).length();
                    sum -= (cnt - 1) * i;
                }
                temp = s.substr(j, i);
                cnt = 1;
            }
        }
        if (cnt > 1) {
            sum += to_string(cnt).length();
            sum -= (cnt - 1) * i;
        }

        answer = min(answer, sum);
    }

    return answer;
}

int main() {
    string s;
    cin >> s;


    cout << solution(s);

    return 0;

}