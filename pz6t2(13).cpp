#include <iostream>
#include <queue>

using namespace std;

bool containsZero(int n) {
    if (n == 0) return true;
    while (n > 0) {
        if (n % 10 == 0) return true;
        n /= 10;
    }
    return false;
}

int main() {
    queue<int> source;
    queue<int> result;

    for (int i = 1; i <= 150; i++) {
        source.push(i);
    }

 
    while (!source.empty()) {
        int x = source.front();
        source.pop();

        if (!containsZero(x)) {
            result.push(x);
        }
    }

    cout << "Числа без цифри 0:\n";

    while (!result.empty()) {
        cout << result.front() << " ";
        result.pop();
    }
    
    cout << endl;

    return 0;
}