# -2-
С++
здесь будет постигаться С++

_______________________________________________________________-

переменные bool, unsigned, int, long, long long, float, double, …, std::string, …, auto
спецификаторы типов: * , &, const

Не очень примитивные:
- struct
- class
- enum

##Ветвления

### if

```cpp
if (condition)
    action;

if (condition) { action_1; } else { action_2; } >-< condition ? action_1 : action_2;

if (condition_1) { action_1; } else if (condition_2) { action_2; } else { action_3; }
```

### switch

```cpp
switch ( variable ) {
    case Variable::First:
        action_1;
        break;
    case Variable::Second:
        action_2;
        break;
    default:
        action_3;
}
```

# Коллекции и контейнеры в C++

## Что такое коллекции и контейнеры?

**Коллекция (контейнер)** — это структура данных, которая хранит набор элементов одного типа и предоставляет удобные методы для работы с ними. Представьте себе "умный массив" с дополнительными возможностями.

---

## 📍 Статические коллекции (в стеке)

### Обычный массив `type[N]`

```cpp
// Фиксированный размер, создается в стеке
int numbers[5] = {10, 20, 30, 40, 50};
std::string names[3] = {"Аня", "Боря", "Вова"};
char letters[10];
```

фиксированный размер; нельзя изменить размер

```cpp
// Проблема: не можем добавить 6-й элемент
numbers[5] = 60; // ОШИБКА! Выход за границы массива
```

## Динамические коллекции (в куче)

### std::vector<type> — умный массив

```cpp
#include <vector>

// Создается в куче, размер может меняться
std::vector<int> numbers = {1, 2, 3};
std::vector<std::string> names;
std::vector<double> prices;
```

#### Основные операции с vector:

```cpp
std::vector<int> vec = {1, 2, 3};

// Добавление элементов
vec.push_back(4);    // [1, 2, 3, 4]
vec.push_back(5);    // [1, 2, 3, 4, 5]
vec.insert(vec.begin() + 1, 99); // [1, 99, 2, 3, 4, 5]

// Удаление элементов
vec.pop_back();      // [1, 99, 2, 3, 4]
vec.erase(vec.begin() + 1); // [1, 2, 3, 4]

// Доступ к элементам
vec[0] = 100;        // [100, 2, 3, 4]
int first = vec.at(0); // Безопасный доступ с проверкой

// Информация о векторе
std::cout << "Размер: " << vec.size();        // 4
std::cout << "Вместимость: " << vec.capacity(); // >= 4
std::cout << "Пустой? " << vec.empty();       // false

// Изменение размера
vec.resize(10);      // [100, 2, 3, 4, 0, 0, 0, 0, 0, 0]
vec.clear();         // []
```

### std::unordered_map<key, value> — словарь (хэш-таблица)

```cpp
#include <unordered_map>

std::unordered_map<std::string, int> ages;
std::unordered_map<int, std::string> students;
```

#### Основные операции с unordered_map:

```cpp
std::unordered_map<std::string, int> ages;

// Добавление элементов
ages["Аня"] = 25;
ages["Боря"] = 30;
ages["Вова"] = 28;
ages.insert({"Маша", 22});

// Доступ к элементам
std::cout << "Возраст Ани: " << ages["Аня"]; // 25

// Проверка существования ключа
if (ages.find("Петя") != ages.end()) {
    std::cout << "Петя есть в словаре";
} else {
    std::cout << "Пети нет в словаре";
}

// Безопасный доступ
std::cout << ages.at("Аня"); // 25 (с проверкой границ)
// std::cout << ages.at("Петя"); // Исключение!

// Удаление
ages.erase("Вова");

// Перебор всех элементов
for (const auto& pair : ages) {
    std::cout << pair.first << ": " << pair.second << std::endl;
}

// Размер
std::cout << "Количество элементов: " << ages.size();
```

# Обходы коллекций и циклы

---

- Классика:

```cpp
for(auto i=0; i<n; i++)
    action;
while (condition) { action; }
```
- Боле современные:

```cpp
for(auto& elem: collect)
    action;
std::ranges::transform(…)
```

## Функции

### Обычные функции

```cpp
output_type space::name_function (VType variable, ...) {
    realization;
}
```

  ПРИМЕР
  
```cpp
#include <iostream>

// Функция без пространства имен
int add(int a, int b) {
    return a + b;
}

// Функция в пространстве имен
namespace Math {
    double multiply(double x, double y) {
        return x * y;
    }
}

int main() {
    std::cout << add(5, 3) << std::endl;           // 8
    std::cout << Math::multiply(2.5, 4.0) << std::endl; // 10.0
    return 0;
}
```

### Анонимные


```cpp
auto name_function = [closure] (VType variable, …) {
    realization;
};
```

#### Захват переменных (closure)

#### Способы захвата:

```cpp
int x = 10;
int y = 20;
int z = 30;

// [] - не захватывать ничего
auto func1 = []() { return 42; };

// [x] - захватить x по значению
auto func2 = [x](int a) { return x + a; };

// [&x] - захватить x по ссылке  
auto func3 = [&x](int a) { x += a; return x; };

// [=] - захватить все по значению
auto func4 = [=](int a) { return x + y + a; };

// [&] - захватить все по ссылке
auto func5 = [&](int a) { x += a; y += a; return x + y; };

// [x, &y] - смешанный захват
auto func6 = [x, &y](int a) { y = x + a; return y; };

// [=, &z] - все по значению, кроме z по ссылке
auto func7 = [=, &z](int a) { z = x + y + a; return z; };
```

### Примеры лямбда-выражений

#### Простые лямбды

```cpp
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    // Лямбда без параметров
    auto say_hello = []() {
        std::cout << "Hello, World!" << std::endl;
    };
    say_hello();

    // Лямбда с параметрами
    auto square = [](int x) -> int {
        return x * x;
    };
    std::cout << "Квадрат 5: " << square(5) << std::endl;

    // Лямбда с автоматическим определением типа возврата
    auto add = [](double a, double b) {
        return a + b;
    };
    std::cout << "Сумма: " << add(3.5, 2.7) << std::endl;
    
    return 0;
}
```

#### Захват внешних переменных

```cpp
#include <iostream>

int main() {
    int multiplier = 5;
    std::string prefix = "Результат: ";

    // Захват по значению и по ссылке
    auto calculate = [multiplier, &prefix](int value) {
        prefix = "Новый результат: "; // Меняем внешнюю переменную
        return multiplier * value;
    };

    std::cout << prefix; // "Результат: "
    int result = calculate(10);
    std::cout << prefix << result << std::endl; // "Новый результат: 50"

    return 0;
}
```

---

# Указатели сырые

**Сырой указатель** – специальный вид переменной для хранения адреса
памяти.

```cpp
void add_number(std::vector<double> v, double num) {
    for (auto& elem : v) elem += num;
}
```

### Версия 1: Передача по значению

```
ДО вызова функции:
v (внешний) = [1.0, 2.0, 3.0]

ВО ВРЕМЯ вызова:
╔══════════════════════════════════╗
║        ФУНКЦИЯ add_number        ║
║ v (копия) = [1.0, 2.0, 3.0]     ║ ← КОПИЯ!
║ После: v = [1.5, 2.5, 3.5]      ║
╚══════════════════════════════════╝

ПОСЛЕ вызова:
v (внешний) = [1.0, 2.0, 3.0] ← НЕ ИЗМЕНИЛСЯ!
```

### Версия 2: Передача по ссылке

```cpp
void add_number(std::vector<double>& v, double num) {
    for (auto& elem : v) elem += num;
}
```

```
ДО вызова функции:
v (внешний) = [1.0, 2.0, 3.0]

ВО ВРЕМЯ вызова:
╔══════════════════════════════════╗
║        ФУНКЦИЯ add_number        ║
║ v (ссылка) → [1.0, 2.0, 3.0]    ║ ← ССЫЛКА!
║ После: v → [1.5, 2.5, 3.5]      ║
╚══════════════════════════════════╝

ПОСЛЕ вызова:
v (внешний) = [1.5, 2.5, 3.5] ← ИЗМЕНИЛСЯ!
```
