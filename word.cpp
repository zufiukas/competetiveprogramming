
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    string s;
    cin >> s;
    int upper_count = 0, lower_count = 0;
    for (string::size_type i = 0; i < s.length(); i++) {
        if (isupper(s[i])) {
            upper_count++;
        } else {
            lower_count++;
        }
    }
    if (upper_count > lower_count) {
        for (string::size_type i = 0; i < s.length(); i++) {
            cout << (char)toupper(s[i]);
        }
    } else {
        for (string::size_type i = 0; i < s.length(); i++) {
            cout << (char)tolower(s[i]);
        }
    }
    return 0;
}
