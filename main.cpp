#include <iostream>

using namespace std;

void evendigits(long long &n, int &ans) {
    while (n >= 0) {
        if (n == 0) break;
        if (n % 2 == 0) {
            ++ans;
        }
        n /= 10;
        evendigits(n, ans);
    }
}

int main() {
    long long n = 9223372036854775806;
    int ans = 0;

    evendigits(n, ans);
    cout << ans << endl;
    return 0;
}
