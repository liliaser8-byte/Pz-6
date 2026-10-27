
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



**Завдання 2. Додавання та видалення елементів**

*Програмний код:*

```cpp
#include <iostream>
#include <list>

using namespace std;

int main() {
    list<double> numbers = {11.2, 7.5, 23.6, 18.4, 29.1};

    cout << "Початковий список: ";
    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    numbers.push_front(4.5);
    numbers.push_back(32.5);
    numbers.pop_front();
    
    cout << "Після змін: ";
    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
    
    return 0;
}

```

*Результат виконання:*
```
Початковий список: 11.2 7.5 23.6 18.4 29.1
Після змін: 11.2 7.5 23.6 18.4 29.1 32.5
```
<img width="1896" height="622" alt="image" src="https://github.com/user-attachments/assets/888cb366-38df-488b-8ac9-9f4970ffe1b9" />

**Завдання 3. Виведення списку у зворотному порядку**

*Програмний код:*

```cpp
#include <iostream>
#include <list>

using namespace std;

int main() {
    list<double> numbers = {11.2, 7.5, 23.6, 18.4, 29.1};

    cout << "Завдання 3 (зворотний порядок):" << endl;
    for (auto it = numbers.rbegin(); it != numbers.rend(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
    
    return 0;
}

```

*Результат виконання:*
```
Завдання 3 (зворотний порядок):
29.1 18.4 23.6 7.5 11.2
```
<img width="1900" height="585" alt="image" src="https://github.com/user-attachments/assets/df028515-5abb-410d-bbe2-efcedc52e1df" />


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
