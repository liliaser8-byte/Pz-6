#include <iostream>
#include <queue>
#include <string>

using namespace std;

// Структура для збереження даних про файл
struct FileTask {
    string name;
    int size; // розмір у мегабайтах
};

int main() {
    queue<FileTask> q;
    int totalSize = 0; // Змінна для підрахунку загального обсягу

    // Початкові файли в черзі
    q.push({"game_update.zip", 2048});
    q.push({"movie_hd.mp4", 1500});
    q.push({"presentation.pptx", 15});

    // Опрацювання наявної черги файлів
    while (!q.empty()) {
        cout << "Завантаження: " << q.front().name 
             << " (" << q.front().size 
             << " МБ)" << endl;
             
        totalSize += q.front().size; // Додаємо розмір до загального обсягу
        q.pop();
    }

    char choice;

    do {
        cout << "\nДодати новий файл? (y/n): ";
        cin >> choice;

        if (choice == 'y' || choice == 'Y') {
            FileTask f;

            cout << "Назва файлу: ";
            getline(cin >> ws, f.name);

            cout << "Розмір (МБ): ";
            cin >> f.size;

            if (f.size > 0) {
                q.push(f);
                cout << "Файл додано до черги.\n";
            }

            // Опрацювання нового файлу
            while (!q.empty()) {
                cout << "Завантаження: " << q.front().name 
                     << " (" << q.front().size 
                     << " МБ)" << endl;
                     
                totalSize += q.front().size;
                q.pop();
            }
        }
    } while (choice == 'y' || choice == 'Y');

    cout << "Роботу завершено." << endl;
    cout << "Загальний обсяг завантажених даних: " << totalSize << " МБ" << endl;

    return 0;
}