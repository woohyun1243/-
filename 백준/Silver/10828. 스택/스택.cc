#include <iostream>
using namespace std;

int arr[10000];
int topIdx = -1;

int main() {
    int N;
    cin >> N;
    string cmd;

    while (N--) {
        cin >> cmd;

        if (cmd == "push") {
            int x;
            cin >> x;
            arr[++topIdx] = x;
        }
        else if (cmd == "pop") {
            if (topIdx == -1) cout << -1 << "\n";
            else cout << arr[topIdx--] << "\n";
        }
        else if (cmd == "size") {
            cout << topIdx + 1 << "\n";
        }
        else if (cmd == "empty") {
            cout << (topIdx == -1) << "\n";
        }
        else if (cmd == "top") {
            if (topIdx == -1) cout << -1 << "\n";
            else cout << arr[topIdx] << "\n";
        }
    }
}