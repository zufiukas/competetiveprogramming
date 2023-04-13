#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int scores[n];
    for (int i = 0; i < n; i++) {
        cin >> scores[i];
    }

    int cutoff = scores[k-1]; // k-th place finisher's score
    int num_advancing = 0;
    for (int i = 0; i < n; i++) {
        if (scores[i] >= cutoff && scores[i] > 0) {
            num_advancing++;
        } else {
            break; // scores are non-increasing, so no need to check further
        }
    }

    cout << num_advancing << endl;
    return 0;
}
