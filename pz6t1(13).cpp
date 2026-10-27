#include <iostream>
#include <queue>

using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    queue<int> numbers;

    numbers.push(2);
    numbers.push(4);
    numbers.push(7);
    numbers.push(10);
    numbers.push(11);
    numbers.push(15);
    numbers.push(17);
    numbers.push(20);
    numbers.push(23);
    numbers.push(25);
    numbers.push(29);
    numbers.push(30);
    numbers.push(31);
    numbers.push(35);
    numbers.push(40);

    int countPrime = 0;

    while (!numbers.empty()) {
        int x = numbers.front();
        numbers.pop();

        if (isPrime(x)) {
            countPrime++;
        }
    }

    cout << "Кількість простих чисел: " 
         << countPrime << endl;

    return 0;
}