#include <iostream>
#include <queue>
#include <string>

using namespace std;

struct Participant {
    string surname;
    int score;
};

int main() {
    queue<Participant> participants;

    participants.push({"Shevchenko", 95});
    participants.push({"Koval", 88});
    participants.push({"Boyko", 92});
    participants.push({"Tkachenko", 85});
    participants.push({"Franko", 100});

    cout << "Учасники з результатом не нижче 90 балів:\n";

    while (!participants.empty()) {
        Participant p = participants.front();
        participants.pop();

        if (p.score >= 90) {
            cout << p.surname << " - " << p.score << endl;
        }
    }

    return 0;
}