#include <iostream>

using namespace std;

int main() {
    int n, h;
    cin >> n >> h;

    int width = 0;

    for (int i = 0; i < n; ++i) {
        int ai;
        cin >> ai;

        if (ai > h) {
            width += 2;
        } else {
            width += 1;
        }
    }

    cout << width << endl;

    return 0;
}

