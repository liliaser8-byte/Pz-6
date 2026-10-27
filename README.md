
**Звіт про виконання практичної роботи №6**

**Виконала:** студентка 4 курсу СОМ, Серветнік Лілія Ярославівна Варіант: 13

**Варіант:** 13

**Тема роботи: Реалізація черги.**

**Мета роботи:** *ознайомитися з основами роботи з чергою у C++ за допомогою стандартного
контейнерного std::queue, вивчити основні операції черги.*

**Варіант завдання (Варіант 13)**
<img width="845" height="462" alt="image" src="https://github.com/user-attachments/assets/bb9a78e5-3b86-42a0-ac8d-2c445ca3c324" />

**Виконання завдань**

**Завдання 1. Опрацювання чисел**

<img width="802" height="77" alt="Знімок екрана 2026-10-27 122303" src="https://github.com/user-attachments/assets/abc34193-4f58-4b0b-8351-97d51dc47d2d" />

*Програмний код:*

```cpp
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

```
*Результат виконання:*
```
Кількість простих чисел: 7

```
<img width="1452" height="711" alt="image" src="https://github.com/user-attachments/assets/f9937aa9-cb32-473d-9546-da7059270e43" />



**Завдання 2. Фільтрування елементів**

<img width="601" height="47" alt="image" src="https://github.com/user-attachments/assets/7f9f069b-9299-4ddf-b57f-00a24357c888" />

*Програмний код:*

```cpp
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
```

*Результат виконання:*
```
Числа без цифри 0:
1 2 3 4 5 6 7 8 9 11 12 13 14 15 16 17 18 19 21 22 23 24 25 26 27 28 29 31 32 33 34 35 36 37 38 39 41 42 43 44 45 46 47 48 49 51 52 53 54 55 56 57 58 59 61 62 63 64 65 66 67 68 69 71 72 73 74 75 76 77 78 79 81 82 83 84 85 86 87 88 89 91 92 93 94 95 96 97 98 99 111 112 113 114 115 116 117 118 119 121 122 123 124 125 126 127 128 129 131 132 133 134 135 136 137 138 139 141 142 143 144 145 146 147 148 149
```
<img width="1898" height="616" alt="image" src="https://github.com/user-attachments/assets/428c1501-fb44-49a0-b435-771c22e1a2db" />


**Завдання 3. Опрацювання символів**

<img width="613" height="52" alt="image" src="https://github.com/user-attachments/assets/330b7119-0484-456b-91c8-535960d1bed8" />

*Програмний код:*

```cpp
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

```

*Результат виконання:*
```
Кількість великих англійських літер: 5

```
<img width="1355" height="427" alt="image" src="https://github.com/user-attachments/assets/29f2a783-c85c-4d02-80b2-cacb3a3b84cf" />


**Завдання 4. Модифікація значень елементів**

*Програмний код:*

```cpp
#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<double> numbers = { 11.2, 7.5, 23.6, 18.4, 29.1 };

    for (auto it = numbers.begin(); it != numbers.end(); ++it)
    {
        *it = *it * 3.0;
    }

    for (auto it = numbers.begin(); it != numbers.end(); ++it)
    {
        cout << *it << " ";
    }
    
    return 0;
}

```

*Результат виконання:*
```
Після множення на 3: 33.6 22.5 70.8 55.2 87.3
```
<img width="1897" height="570" alt="image" src="https://github.com/user-attachments/assets/21576507-f344-4f22-8f60-a8d0dfe79416" />

**Завдання 5. Пошук, умовне видалення та вставка**

*Програмний код:*

```cpp
#include <iostream>
#include <list>

using namespace std;

int main() {
    list<double> numbers = {11.2, 7.5, 23.6, 18.4, 29.1};

    for (auto it = numbers.begin(); it != numbers.end(); ) {
        if (*it > 28.0) {
            it = numbers.erase(it);
        } else {
            if (*it < 15.0) {
                numbers.insert(it, 5.0);
            }
            ++it;
        }
    }

    cout << "Після видалення (>28) та вставки (перед <15): ";
    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
    
    return 0;
}

```

*Результат виконання:*
```
Після видалення (>28) та вставки (перед <15): 5 11.2 5 7.5 23.6 18.4
```
<img width="1767" height="631" alt="image" src="https://github.com/user-attachments/assets/cc6882ff-68e5-4616-9b7e-a5cd9a575312" />


**Завдання 6. Підрахунок середнього та зворотне виведення**

*Програмний код:*

```cpp
#include <iostream>
#include <list>

using namespace std;

int main() {
    list<double> numbers = {11.2, 7.5, 23.6, 18.4, 29.1};
    
    double sum = 0;
    int count = 0;
    
    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        if (*it < 20.0) {
            sum += *it;
            count++;
        }
    }
    
    if (count > 0) {
        cout << "Середнє арифметичне елементів < 20: " << sum / count << endl;
    }
    
    cout << "Список у зворотному порядку: ";
    for (auto it = numbers.rbegin(); it != numbers.rend(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
    
    return 0;
}

```

*Результат виконання:*
```
Середнє арифметичне елементів < 20: 12.3667
Список у зворотному порядку: 29.1 18.4 23.6 7.5 11.2
```
<img width="1912" height="688" alt="image" src="https://github.com/user-attachments/assets/ea5b4efc-9e82-4264-999c-2d9a6b3da658" />

**Висновок:** Під час виконання практичної роботи було закріплено навички використання контейнера `std::list` у мові C++ для роботи з дійсними числами типу `double`. Опрацьовано механізми додавання та видалення елементів на кінцях списку (`push_front`, `push_back`, `pop_front`), а також точкову вставку та видалення за допомогою ітераторів (`insert`, `erase`). Особливу увагу було приділено роботі з вказівниками-ітераторами: прямому проходу циклом `for` для обчислень і зміни поточних значень елементів та зворотному проходу за допомогою `rbegin()` / `rend()`. Також були реалізовані алгоритми пошуку середнього арифметичного за умовою та умовної модифікації структури списку.
