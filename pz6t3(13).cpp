#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main() {
    queue<char> letters;
    
    string text = "Hello World! C++ Programming is Great.";
    
    for (int i = 0; i < text.length(); i++) {
        letters.push(text[i]);
    }
    
    int uppercaseCount = 0;
    
    while (!letters.empty()) {
        char current = letters.front();
        letters.pop();

        if (current >= 'A' && current <= 'Z') {
            uppercaseCount++;
        }
    }
    
    cout << "Кількість великих англійських літер: " << uppercaseCount << endl;
    
    return 0;
}