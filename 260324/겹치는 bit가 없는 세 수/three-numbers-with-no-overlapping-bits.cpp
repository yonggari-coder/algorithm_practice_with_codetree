#include <iostream>
#include <vector>
using namespace std;

int n;
vector<long long> arr;
long long maxVal = 0;

void func(int idx, int cnt, long long sum, long long xr) {
    if (cnt == 3) {
        if (sum == xr) {
            maxVal = max(maxVal, sum);
        }
        return;
    }

    if (idx == n) return;

    // 현재 원소 선택
    func(idx + 1, cnt + 1, sum + arr[idx], xr ^ arr[idx]);

    // 현재 원소 선택 안 함
    func(idx + 1, cnt, sum, xr);
}

int main() {
    cin >> n;
    arr.resize(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    func(0, 0, 0, 0);

    cout << maxVal;
}