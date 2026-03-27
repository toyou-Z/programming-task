#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr) ;
    string str ;
    cin >> str;
    int mod3 = 0;
    int mod11 = 0;
    for (char &c : str) {
        mod3 = (mod3 * 10 + (c - '0')) % 3;
        mod3 %= 3;
        mod11 = (mod11 * 10 + (c - '0')) % 11;
        mod11 %= 11;
    }
    cout << mod3 << " " << mod11 << endl;
}