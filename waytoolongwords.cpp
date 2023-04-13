#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string word;
        cin >> word;
        if (word.length() > 10) {
            string abbreviation = word[0] + to_string(word.length() - 2) + word.back();
            cout << abbreviation << endl;
        } else {
            cout << word << endl;
        }
    }
    return 0;
}
