#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int capacity = 0;
    int current_passengers = 0;

    for (int i = 0; i < n; ++i) {
        int a, b;
        cin >> a >> b;


        current_passengers = current_passengers - a + b;


        if (current_passengers > capacity) {
            capacity = current_passengers;
        }
    }

    cout << capacity << endl;

    return 0;
}
