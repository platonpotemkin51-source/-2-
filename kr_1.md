# Список пройденных тем:
1) С++ история возникновения. 
2) GIT базовые сценарии использования, коммиты и то, что в них стоит писать. Ветки, конфликты и их решения.
3) Устройство проекта в VStudio, подключение библиотек и версия компилятора. Строки std::string 
4) Примитивные типы данных.  Переменные и их способы объявления. Преобразование типов. Автоматически вывод типов.
5) Ветвления if switch. Самые часто используемые контейнеры(std::vector, std::unordered_map, массивы).
6) Обходы коллекций while, for, range_based и итераторы. 
7) Функции и их типы. Передача аргументы по ссылке и по значению.  Анонимные функции.
😍 Указатели умные и сырые.
9) Структуры,  перечисления, классы, спецификация доступа. Инкапсуляция и параметрический полиморфизм. Заголовочные файлы и фалы реализации

___
## 1) С++ история возникновения.

- Fortran, Assembly,	C
- Формирование	и	распространение	парадигмы	ООП	60-70е
- 1983		<–>	Бьёрн Страуструп
- 1995	– 2005	начало	похорон	С++
- 2011–15	отправка	похорон	в	бэклог
- 2015	по	настоящее	время	обсуждения	о	возраждении

### 1. Предшественники: Fortran, Assembly, C

Чтобы понять появление C++, нужно начать с контекста, в котором он рождался.

Assembly (Ассемблер) и Fortran (1950-е): В начале эры компьютеров программы писались на ассемблере — языке, который напрямую соответствовал инструкциям процессора. Это давало максимальную производительность, но было крайне сложно, трудоёмко и непереносимо. Fortran (1957) стал одним из первых высокоуровневых языков, позволившим программистам думать в терминах математических формул, а не машинных команд. Он доминировал в научных вычислениях, но был процедурным языком, не подходящим для моделирования сложных систем.

Язык C (начало 1970-х): Разработанный Деннисом Ритчи в Bell Labs, язык C стал "золотой серединой". Он сочетал в себе высокоуровневые структуры (условия, циклы, функции) с низкоуровневым доступом к памяти (через указатели). Это делало его невероятно мощным и эффективным. C стал языком, на котором была переписана большая часть операционной системы Unix. Его философия — "программист всегда прав", предоставляющая максимальную свободу и контроль.

Именно на C Бьёрн Страуструп начинал свой проект, столкнувшись с задачами, для которых чистый C был недостаточно выразителен.

### 2. Формирование и распространение парадигмы ООП (60-70-е)

В 1960-70-х годах росло понимание "кризиса программного обеспечения" — сложность проектов превышала возможности существующих методологий. В ответ рождалась новая парадигма — Объектно-Ориентированное Программирование (ООП).

Simula (1967): Норвежские учёные Кристен Нигаард и Уле-Йохан Даль создали язык Simula, который ввёл ключевые понятия: классы, объекты, наследование и полиморфизм. Идея была в том, чтобы моделировать программу как набор взаимодействующих "объектов", которые объединяют в себе данные и методы для их обработки. Это было революционно.

Страуструп, работая над диссертацией, активно использовал Simula и оценил мощь ООП. Однако он столкнулся с главной проблемой Simula — она была слишком медленной для системного программирования. Его гениальная идея заключалась в том, чтобы добавить возможности, подобные Simula, в язык C, сохранив при этом его эффективность.

### 3. 1983 <–> Бьёрн Страуструп

"C with Classes" (1979-1983): В Bell Labs Страуструп начал работу над расширением языка C. Изначально он добавил в C базовые механизмы ООП: классы, наследование, инкапсуляцию, аргументы по умолчанию. Этот проект получил название "C with Classes" ("Си с классами"). Главным принципом была обратная совместимость с C и принцип "не платить за то, что не используешь" (zero-overhead principle). Если вы не использовали классы, программа работала так же быстро, как и на C.

C++ (1983): В 1983 году язык получил своё легендарное имя — C++. Название отражает идею инкрементального улучшения C (оператор ++ в C означает "увеличить на единицу"). В этот же период были добавлены виртуальные функции (полиморфизм), перегрузка функций и операторов, ссылки, механизм исключений и многое другое. C++ перестал быть просто "C с классами" и стал полноценным самостоятельным языком.

### 4. 1995 – 2005: начало похорон C++

Это была эпоха расцвета "модных" языков высокого уровня, которые позиционировались как убийцы C++.

Java (1995): Компания Sun Microsystems представила Java с её слоганом "Write Once, Run Anywhere" ("Напиши один раз, запускай где угодно"). Управляемая память (сборка мусора), простая объектная модель и отсутствие указателей делали Java менее error-prone и более привлекательной для корпоративной разработки.

C# (2000): Microsoft ответила своим языком C#, который во многом был "улучшенной Java" с глубокой интеграцией в платформу Windows.

Скриптовые языки (Python, PHP, Ruby): Эти языки предлагали радикально более высокую скорость разработки для веба и прикладных скриптов.

Почему "похороны"? C++ казался слишком сложным, небезопасным (проблемы с памятью, уязвимости) и медленным для разработки. Многие прогнозировали, что его ниша сократится до низкоуровневых системных задач, а всё остальное заберут Java и C#.

### 5. 2011–15: отправка похорон в бэклог

Это самый важный переломный момент в современной истории C++. Сообщество и комитет по стандартизации (ISO) осознали, что язык застрял в прошлом.

C++11 (ранее известный как C++0x): Вышедший в 2011 году, этот стандарт стал грандиозным обновлением, которое изменило всё. Он принёс в язык огромное количество современных возможностей:

Вывод типов (auto).

Умные указатели (std::unique_ptr, std::shared_ptr), которые автоматически управляют памятью и практически исключают её утечки.

Лямбда-выражения для удобной работы с алгоритмами.

Стандартная библиотека STL была значительно расширена.

Средства для многопоточности (std::thread, std::mutex) прямо в стандарте.

Rvalue-ссылки и семантика перемещения, позволившие избежать лишних копирований и повысить производительность.

C++11 показал, что язык не просто жив, а активно развивается, адаптируясь к современным требованиям, не жертвуя при этом своей ключевой философией — производительностью и контролем. "Похороны" пришлось отменить.

### 6. 2015 по настоящее время: обсуждения о воскрешении

С выходом стандартов C++14 (небольшие улучшения), C++17 (более крупные дополнения) и, что важнее всего, C++20 (сопоставимый по масштабу с C++11) язык переживает настоящий ренессанс.

Новые парадигмы: C++ активно заимствует лучшие идеи из других языков. Появились модули (на смену устаревшим заголовочным файлам #include), концепции (огромное улучшение для шаблонного программирования), корутины (для асинхронного кода), Ranges (более выразительный и безопасный способ работы с диапазонами данных).

Фокус на безопасность и простоту: Современный C++ всё больше защищает программиста от классических ошибок (через умные указатели, контейнеры STL, std::string_view и т.д.), поощряя идиомы, которые сложно использовать неправильно.

"Воскрешение" в новых областях: Благодаря своей производительности C++ стал ключевым языком в областях, где скорость критична:

Высокочастотный трейдинг (HFT).

Графика и игры (движки Unreal Engine, Unity (частично)).

Машинное обучение и AI (библиотеки like TensorFlow, PyTorch имеют C++ "сердце").

Микроконтроллеры и встраиваемые системы (благодаря низкому потреблению ресурсов).
___
## 2) GIT базовые сценарии использования, коммиты и то, что в них стоит писать. Ветки, конфликты и их решения.

### 1. 🎯 Базовые сценарии использования Git

#### Базовые команды:

```
# 1. Создать новый репозиторий
git init

# 2. Проверить статус (что изменилось?)
git status

# 3. Добавить файлы в "чемодан" (staging)
git add file.cpp          # Добавить один файл
git add .                 # Добавить ВСЕ файлы

# 4. Сделать "фото" текущего состояния (коммит)
git commit -m "Описание изменений"

# 5. Посмотреть историю "фото"
git log
```

### 2. ✍️ Коммиты и что в них писать

#### Правила хорошего коммита:

#### Формат коммита:
```
<тип>: <краткое описание>

<подробное описание (если нужно)>
```
### ❌ ПЛОХО:
```
git commit -m "fix"
git commit -m "changes"
git commit -m "update"
```
### ✅ ХОРОШО:
```
git commit -m "feat: добавить класс Player с движением"
git commit -m "fix: исправить утечку памяти в TextureLoader"
git commit -m "docs: обновить README с инструкцией установки"
```
#### Типы коммитов:
- ```feat:``` - новая функция

- ```fix:``` - исправление бага

- ```refactor:``` - изменение кода без нового функционала

- ```docs:``` - изменение документации

- ```style:``` - исправление форматирования

- ```test:``` - добавление тестов

### 3. 🌿 Ветки (Branches)

#### Ветка - это "параллельная реальность" для вашего кода

##### Основные команды:
```
# Посмотреть все ветки
git branch

# Создать новую ветку
git branch feature/player-movement

# Переключиться на ветку
git checkout feature/player-movement

# Создать и переключиться сразу
git checkout -b feature/player-movement
```

#### Типичная структура веток:
```
main/master          ← Главная ветка (всегда стабильная)
├── develop          ← Ветка разработки
├── feature/player   ← Новая фича: игрок
├── feature/enemies  ← Новая фича: враги
└── hotfix/crash    ← Срочное исправление
```
#### Пример workflow:
```
# Начинаем новую фичу
git checkout -b feature/player-movement

# Работаем, делаем коммиты...
git add .
git commit -m "feat: добавить базовое движение игрока"

# Когда фича готова - сливаем в develop
git checkout develop
git merge feature/player-movement
```
### 4. 💥 Конфликты и их решения
#### Конфликт - когда Git не может сам решить, как объединить изменения

###### Когда возникает конфликт:
- Два человека изменили одни и те же строки в одном файле
- Вы пытаетесь смержить ветки с конфликтующими изменениями

#### Процесс решения конфликтов:

Шаг 1: Git сообщит о конфликте

```
Auto-merging game.cpp
CONFLICT (content): Merge conflict in game.cpp
```
Шаг 2: Открываем файл и видим:
```
void Player::move() {
<<<<<<< HEAD
    x += speed * 2;  // Ваша версия
=======
    x += speed * 1.5;  // Версия из другой ветки
>>>>>>> feature/player-speed
}
```
Шаг 3: Решаем конфликт вручную
```
void Player::move() {
    x += speed * 2;  // Выбрали вашу версию
}
```
Шаг 4: Сообщаем Git, что конфликт решён
```
# Добавляем исправленный файл
git add game.cpp

# Завершаем слияние
git commit
```
### Кратко:
1. Git init - создать репозиторий
2. Git add - добавить файлы в "чемодан"
3. Git commit - сделать "фото" состояния
4. Git checkout -b - создать ветку для новой фичи
5. Git merge - объединить ветки 
___
## 3) Устройство проекта в VStudio, подключение библиотек и версия компилятора. Строки std::string 

### 1. 🏗️ Устройство проекта в Visual Studio
#### Проект - это "Кухня для готовки кода"
```
МояИгра/                         ← Вся кухня (Solution)
├── МояИгра.sln                  ← План кухни
├── МояИгра/                     ← Рабочий стол (Project)
│   ├── main.cpp                 ← Главный рецепт
│   ├── Game.h                   ← Описание что готовим
│   ├── Game.cpp                 ← Как готовим
│   └── Resources/               ← Специи и украшения
└── Библиотека/                  ← Ещё один стол
    ├── Math.h                   ← Рецепт математики
    └── Math.cpp                 ← Калькулятор
```
### 2. 📚 Подключение библиотек
#### Библиотека - это "Готовый набор инструментов"
##### Способ 1: vcpkg (проще всего)
```
# 1. Открываем терминал в VS (View → Terminal)
# 2. Устанавливаем библиотеку:
vcpkg install sfml
```
```cpp
// 3. В коде просто пишем:
#include <SFML/Graphics.hpp>
// Всё! Библиотека готова к использованию
```
##### Способ 2: Ручное подключение (если скачали библиотеку)
```cpp
// Скачали библиотеку SFML в папку C:/Libs/SFML/
// Нужно сказать Visual Studio:

// Правая кнопка по проекту → Properties:
// - C/C++ → General → Additional Include Directories: 
//   Добавить: C:/Libs/SFML/include/

// - Linker → General → Additional Library Directories:
//   Добавить: C:/Libs/SFML/lib/

// - Linker → Input → Additional Dependencies:
//   Добавить: sfml-graphics.lib;sfml-window.lib;sfml-system.lib;

// Теперь можно использовать!
#include <SFML/Graphics.hpp>
```
### 3. ⚙️ Версия компилятора
#### Компилятор - это "Переводчик с C++ на машинный язык"
##### Как проверить и поменять:
```
Правая кнопка по проекту → Properties 
→ C/C++ → Language → C++ Language Standard
```

### 4. 📝 Строки std::string
#### std::string - это "Умная верёвочка с буквами"
##### Проблема старых строк (массивы char):
```cpp
char name[20];              // Верёвочка длиной 20 букв
strcpy(name, "Вася");       // Копируем "В-а-с-я"
// Ой! Если имя длиннее 20 букв - ВСЁ СЛОМАЕТСЯ! 
```
##### Решение: std::string
```cpp
std::string name = "Вася";  // Умная верёвочка САМА растёт!
name += " Петрович";        // Добавили фамилию - верёвочка выросла!
name = "Александр";         // Длинное имя - верёвочка растянулась!
```
##### Основные операции с std::string:
```cpp
#include <iostream>
#include <string>          // Не забудьте подключить!

int main() {
    // Создание строк
    std::string hello = "Привет";
    std::string world = "мир";
    
    // Сложение строк
    std::string message = hello + " " + world + "!";
    // Результат: "Привет мир!"
    
    // Длина строки
    int length = message.length();  // Узнать длину
    
    // Сравнение строк
    if (hello == "Привет") {
        std::cout << "Это приветствие!" << std::endl;
    }
    
    // Поиск в строке
    size_t pos = message.find("мир");  // Найти позицию "мир"
    
    // Вывод строки
    std::cout << message << std::endl;
    
    // Ввод строки
    std::string user_name;
    std::cout << "Как вас зовут? ";
    std::cin >> user_name;
    
    return 0;
}
```
##### Полезные методы std::string:
```cpp
std::string text = "Hello C++ World";

// Получить подстроку
std::string part = text.substr(6, 3);  // "C++"

// Заменить часть строки
text.replace(0, 5, "Hi");  // "Hi C++ World"

// Проверить пустая ли строка
if (text.empty()) { /* ... */ }

// Преобразовать в число
std::string number_str = "123";
int number = std::stoi(number_str);  // 123
```
___
## 4) Примитивные типы данных.  Переменные и их способы объявления. Преобразование типов. Автоматически вывод типов.

## 1. 📦 Примитивные (встроенные) типы данных

### Основные типы:

| Тип | Размер | Диапазон | Пример |
|-----|--------|-----------|---------|
| `int` | 4 байта | -2×10⁹ до +2×10⁹ | `5`, `-10`, `1000` |
| `float` | 4 байта | ±3.4×10³⁸ | `3.14f`, `-2.5f` |
| `double` | 8 байт | ±1.7×10³⁰⁸ | `3.141592`, `-2.5` |
| `char` | 1 байт | -128 до 127 | `'A'`, `'1'`, `'$'` |
| `bool` | 1 байт | true/false | `true`, `false` |
| `void` | - | отсутствует | - |

### Модификаторы целых чисел:

```cpp
// Разные размеры целых чисел
short small = 100;           // 2 байта (-32k до +32k)
int normal = 100000;         // 4 байта  
long big = 1000000L;         // 4 или 8 байт
long long huge = 1000000000LL; // 8 байт

// Беззнаковые версии (только ≥0)
unsigned short us = 65000U;
unsigned int ui = 40000U;
unsigned long ul = 1000000UL;
```
### 2. 🏷️ Способы объявления переменных
```cpp
int x;          // объявление без инициализации
x = 10;         // присваивание позже

int y = 20;     // объявление с инициализацией
double z = 3.14;
```
```cpp
int x{10};              // прямая инициализация
double y{3.14};        
char z{'A'};
bool flag{true};

// Защита от narrowing conversion
int a{100};            // OK
// int b{100.5};       // ОШИБКА! Потеря данных
```
```cpp
int x = {10};           // со знаком равенства
double y = {3.14};
```
```cpp
int x(10);              // в скобках
double y(3.14);
```
### 3. 🔄 Преобразование типов (Casting)
#### Неявное преобразование (автоматическое):
```cpp
int integer = 10;
double decimal = integer;       // 10 → 10.0 (расширение)

double price = 19.99;
int intPrice = price;           // 19.99 → 19 (сужение, потеря данных!)

char symbol = 'A';
int ascii = symbol;             // 'A' → 65
```
#### Явное преобразование:
```cpp
double price = 19.99;
int intPrice = (int)price;      // 19.99 → 19

char symbol = 'A';
int ascii = (int)symbol;        // 'A' → 65
```
#### static_cast (рекомендуется) ✅:
```cpp

double price = 19.99;
int intPrice = static_cast<int>(price);  // 19.99 → 19

float floatNum = 3.14f;
int intNum = static_cast<int>(floatNum); // 3.14 → 3

int number = 65;
char symbol = static_cast<char>(number); // 65 → 'A'
```
### 4. Автоматический вывод типов (auto)
#### Ключевое слово ```auto```:
```cpp
// Компилятор сам определяет тип
auto x = 10;            // int
auto y = 3.14;          // double  
auto z = 2.71f;         // float
auto letter = 'A';      // char
auto flag = true;       // bool
auto name = "Hello";    // const char*
```
#### auto с uniform initialization:
```cpp
// Для однозначности можно указывать суффиксы
auto a = 10U;       // unsigned int
auto b = 3.14f;     // float
auto c = 100LL;     // long long
```
___
## 5) Ветвления if switch. Самые часто используемые контейнеры(std::vector, std::unordered_map, массивы).
### 1. Ветвления: if-else

#### Базовый синтаксис:

```cpp
if (условие) {
    // код выполнится если условие истинно
} else if{
    // код выполнится если условие ложно
}else {
    // код выполнится если условие ложно
}
```
```cpp
condition ? expression1 : expression2
```
#### 2. Ветвления: switch-case

```cpp
switch (переменная) {
    case значение1:
        // код для значение1
        break;
    case значение2:
        // код для значение2
        break;
    default:
        // код если ни один case не подошел
}
```
### 3. Массивы (C-style arrays)
```cpp
#include <iostream>

int main() {
    // Статический массив
    int numbers[5] = {1, 2, 3, 4, 5};
    
    // Доступ к элементам
    std::cout << "Первый элемент: " << numbers[0] << std::endl;
    std::cout << "Последний элемент: " << numbers[4] << std::endl;
    
    // Изменение элементов
    numbers[2] = 100;
    
    // Перебор массива
    for (int i = 0; i < 5; ++i) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;
    
    // Массив без указания размера
    double temperatures[] = {25.5, 26.0, 24.8, 23.5};
    int size = sizeof(temperatures) / sizeof(temperatures[0]);
    
    std::cout << "Количество элементов: " << size << std::endl;
    
    // Range-based for (C++11)
    for (double temp : temperatures) {
        std::cout << temp << " ";
    }
    std::cout << std::endl;
    
    return 0;
}
```
##### Ограничения массивов:
- Фиксированный размер
- Нет встроенных методов
- Нельзя возвращать из функции как есть

### 4. 🚀 std::vector (динамический массив)
```cpp
#include <iostream>
#include <vector>

int main() {
    // Создание вектора
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    
    // Добавление элементов
    numbers.push_back(6);           // в конец
    numbers.insert(numbers.begin(), 0); // в начало
    
    // Доступ к элементам
    std::cout << "Первый: " << numbers.front() << std::endl;
    std::cout << "Последний: " << numbers.back() << std::endl;
    std::cout << "По индексу: " << numbers[2] << std::endl;
    
    // Размер и емкость
    std::cout << "Размер: " << numbers.size() << std::endl;
    std::cout << "Емкость: " << numbers.capacity() << std::endl;
    
    // Удаление элементов
    numbers.pop_back();             // с конца
    numbers.erase(numbers.begin()); // с начала
    
    // Перебор элементов
    for (int i = 0; i < numbers.size(); ++i) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;
    
    // Range-based for
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    
    // Автовывод типа
    for (auto num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    
    return 0;
}
```
#### Полезные методы vector:
```cpp
#include <iostream>
#include <vector>

int main() {
    std::vector<std::string> names;
    
    // Проверка на пустоту
    if (names.empty()) {
        std::cout << "Вектор пуст" << std::endl;
    }
    
    // Добавление элементов
    names.push_back("Alice");
    names.push_back("Bob");
    names.push_back("Charlie");
    
    // Изменение размера
    names.resize(5, "Unknown"); // Увеличить до 5, новые = "Unknown"
    
    // Очистка
    // names.clear();
    
    // Поиск (через алгоритмы)
    auto it = std::find(names.begin(), names.end(), "Bob");
    if (it != names.end()) {
        std::cout << "Найден: " << *it << std::endl;
    }
    
    // Резервирование памяти
    std::vector<int> bigVector;
    bigVector.reserve(1000); // Зарезервировать место для 1000 элементов
    
    return 0;
}
```
### 5. 🗂️ std::unordered_map (хэш-таблица)
#### Быстрый поиск по ключу:
```cpp
#include <iostream>
#include <unordered_map>
#include <string>

int main() {
    // Создание словаря
    std::unordered_map<std::string, int> ages;
    
    // Добавление элементов
    ages["Alice"] = 25;
    ages["Bob"] = 30;
    ages["Charlie"] = 35;
    
    // Или так
    ages.insert({"David", 40});
    
    // Доступ к элементам
    std::cout << "Возраст Alice: " << ages["Alice"] << std::endl;
    
    // Проверка существования ключа
    if (ages.find("Eve") != ages.end()) {
        std::cout << "Eve существует" << std::endl;
    } else {
        std::cout << "Eve не найдена" << std::endl;
    }
    
    // Безопасный доступ (не создает элемент)
    auto it = ages.find("Bob");
    if (it != ages.end()) {
        std::cout << "Bob: " << it->second << std::endl;
    }
    
    // Перебор всех элементов
    for (const auto& pair : ages) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }
    
    // Размер
    std::cout << "Количество элементов: " << ages.size() << std::endl;
    
    // Удаление
    ages.erase("Alice");
    
    return 0;
}
```

___
## 6) Обходы коллекций while, for, range_based и итераторы. 
### 1. Цикл while
```cpp
#include <vector>
#include <iostream>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    
    // Используем индекс
    size_t i = 0;
    while (i < numbers.size()) {
        std::cout << numbers[i] << " ";
        i++;
    }
    // Вывод: 1 2 3 4 5
    
    // Используем итераторы (более современный подход)
    auto it = numbers.begin();
    while (it != numbers.end()) {
        std::cout << *it << " ";
        it++;
    }
    // Вывод: 1 2 3 4 5
}
```
### 2. Цикл for (классический)

Наиболее гибкий способ с явным управлением индексом/итератором:

```cpp
#include <vector>
#include <list>
#include <iostream>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    
    // С использованием индекса
    for (size_t i = 0; i < numbers.size(); i++) {
        std::cout << numbers[i] << " ";
    }
    // Вывод: 1 2 3 4 5
    
    // С использованием итераторов
    for (auto it = numbers.begin(); it != numbers.end(); it++) {
        std::cout << *it << " ";
    }
    // Вывод: 1 2 3 4 5
    
    // Для списка (где нет оператора [])
    std::list<int> lst = {1, 2, 3};
    for (auto it = lst.begin(); it != lst.end(); it++) {
        std::cout << *it << " ";
    }
    // Вывод: 1 2 3
}
```
### 3. Range-based for (основанный на диапазоне)

Современный и лаконичный способ (появился в C++11):

```cpp
#include <vector>
#include <map>
#include <iostream>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    
    // Простой обход по значению (копирование)
    for (int num : numbers) {
        std::cout << num << " ";
    }
    // Вывод: 1 2 3 4 5
    
    // Обход по ссылке (без копирования)
    for (int& num : numbers) {
        num *= 2;  // Можем изменять элементы
    }
    
    // Обход по константной ссылке (только чтение)
    for (const int& num : numbers) {
        std::cout << num << " ";
    }
    // Вывод: 2 4 6 8 10
    
    // Для map (ассоциативных контейнеров)
    std::map<std::string, int> ages = {{"Alice", 25}, {"Bob", 30}};
    for (const auto& pair : ages) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }
    // Вывод: Alice: 25
    //        Bob: 30
    
    // C++17 - structured bindings
    for (const auto& [name, age] : ages) {
        std::cout << name << ": " << age << std::endl;
    }
}
```
### 4. Итераторы

Универсальный механизм для доступа к элементам контейнеров:

#### Типы итераторов:
```cpp
#include <vector>
#include <iostream>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    
    // Forward iterator (можно двигаться только вперед)
    for (auto it = numbers.begin(); it != numbers.end(); it++) {
        std::cout << *it << " ";
    }
    
    // Reverse iterator (обход в обратном порядке)
    for (auto it = numbers.rbegin(); it != numbers.rend(); it++) {
        std::cout << *it << " ";
    }
    // Вывод: 5 4 3 2 1
    
    // Const iterator (только для чтения)
    for (auto it = numbers.cbegin(); it != numbers.cend(); it++) {
        // *it = 10; // Ошибка компиляции!
        std::cout << *it << " ";
    }
}
```
### 5. Алгоритмы STL с итераторами *

Функциональный подход к обработке коллекций:

```cpp
#include <vector>
#include <algorithm>
#include <iostream>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    
    // for_each - применение функции к каждому элементу
    std::for_each(numbers.begin(), numbers.end(), [](int n) {
        std::cout << n << " ";
    });
    
    // transform - преобразование элементов
    std::vector<int> doubled;
    std::transform(numbers.begin(), numbers.end(), 
                   std::back_inserter(doubled),
                   [](int n) { return n * 2; });
    
    // find - поиск элемента
    auto found = std::find(numbers.begin(), numbers.end(), 3);
    if (found != numbers.end()) {
        std::cout << "Found: " << *found << std::endl;
    }
}
```
___
## 7) Функции и их типы. Передача аргументы по ссылке и по значению.  Анонимные функции.

### 1. Основы функций

Простая функция:

```cpp
#include <iostream>

// Объявление функции
int add(int a, int b);

// Определение функции
int add(int a, int b) {
    return a + b;
}

int main() {
    int result = add(5, 3); // Вызов функции
    std::cout << "Result: " << result << std::endl; // Result: 8
}
```
### 2. Типы функций

#### Функция без возвращаемого значения:
```cpp
void printHello() {
    std::cout << "Hello!" << std::endl;
}

void printNumber(int num) {
    std::cout << "Number: " << num << std::endl;
}
```

#### Функция с возвращаемым значением:

```cpp
double calculateCircleArea(double radius) {
    return 3.14159 * radius * radius;
}

bool isEven(int number) {
    return number % 2 == 0;
}
```

#### Функция с несколькими параметрами:

```cpp
#include <string>

std::string createGreeting(const std::string& name, int age) {
    return "Hello, " + name + "! You are " + std::to_string(age) + " years old.";
}
```
### 3. Передача аргументов
#### По значению (копирование):
```cpp
void modifyValue(int x) {
    x = 100; // Изменяется копия, оригинал не меняется
    std::cout << "Inside function: " << x << std::endl;
}

int main() {
    int num = 5;
    modifyValue(num);
    std::cout << "After function: " << num << std::endl;
    // Output:
    // Inside function: 100
    // After function: 5
}
```
#### По ссылке (работа с оригиналом):
```cpp
void modifyReference(int& x) {
    x = 100; // Изменяется оригинальная переменная
    std::cout << "Inside function: " << x << std::endl;
}

int main() {
    int num = 5;
    modifyReference(num);
    std::cout << "After function: " << num << std::endl;
    // Output:
    // Inside function: 100
    // After function: 100
}
```
#### По константной ссылке (только чтение):
```cpp
void printLargeObject(const std::string& str) {
    // str = "new"; // Ошибка! Нельзя изменять
    std::cout << str << std::endl;
}

int main() {
    std::string text = "Very long text...";
    printLargeObject(text); // Эффективно, без копирования
}
```
### 4. Сравнение способов передачи
```cpp
#include <iostream>
#include <vector>

// По значению - дорого для больших объектов
void processByValue(std::vector<int> data) {
    // Создается полная копия вектора
}

// По ссылке - эффективно, можно изменять
void processByReference(std::vector<int>& data) {
    data.push_back(42); // Изменяет оригинал
}

// По константной ссылке - эффективно, защита от изменений
void processByConstReference(const std::vector<int>& data) {
    // data.push_back(42); // Ошибка компиляции!
    std::cout << "Size: " << data.size() << std::endl;
}

int main() {
    std::vector<int> numbers = {1, 2, 3};
    
    processByValue(numbers);    // Дорого - копирование
    processByReference(numbers); // Эффективно, меняет numbers
    processByConstReference(numbers); // Эффективно, безопасно
}
```
### 5. Возвращение значений
##### Возврат по значению:
```cpp
std::vector<int> createVector() {
    return std::vector<int>{1, 2, 3}; // Копирование (но часто оптимизируется)
}
```
##### Возврат по ссылке (осторожно!):
```cpp
int& getElement(std::vector<int>& vec, size_t index) {
    return vec[index]; // Возвращает ссылку на элемент
}

// ОПАСНО - возврат ссылки на локальную переменную!
// int& badFunction() {
//     int x = 5;
//     return x; // x уничтожается при выходе из функции!
// }
```
##### Возврат по константной ссылке:
```cpp
const std::string& getConstantString() {
    static std::string str = "constant"; // static живет до конца программы
    return str;
}
```
### 6. Анонимные функции (лямбды)
##### Базовая лямбда:
```
auto name_function = [closure] (VType variable, …) {
    realization;
};
```
```cpp
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    // Простая лямбда
    auto hello = []() {
        std::cout << "Hello from lambda!" << std::endl;
    };
    hello(); // Вызов лямбды
    
    // Лямбда с параметрами
    auto add = [](int a, int b) {
        return a + b;
    };
    std::cout << "5 + 3 = " << add(5, 3) << std::endl;
}
```
##### Захват переменных:
```cpp
int main() {
    int x = 10;
    int y = 20;
    
    // Захват по значению
    auto captureByValue = [x]() {
        std::cout << "x = " << x << std::endl;
        // x = 5; // Ошибка - x захвачен по значению (const)
    };
    
    // Захват по ссылке
    auto captureByReference = [&y]() {
        y = 100; // Меняет оригинальную переменную
        std::cout << "y = " << y << std::endl;
    };
    
    // Захват всех переменных по значению
    auto captureAllByValue = [=]() {
        std::cout << "x = " << x << ", y = " << y << std::endl;
    };
    
    // Захват всех переменных по ссылке
    auto captureAllByReference = [&]() {
        x = 1;
        y = 2;
    };
}
```
##### Лямбды с возвращаемым типом:
```cpp
int main() {
    // Явное указание возвращаемого типа
    auto complexLambda = [](double a, double b) -> double {
        if (b != 0) {
            return a / b;
        }
        return 0;
    };
    
    std::cout << complexLambda(10.0, 3.0) << std::endl;
}
```
___
## 8) Указатели умные и сырые.
### 1. 📍 Сырые указатели (Raw Pointers)

#### Основные операции:
- ```*``` - разыменование (доступ к значению)
- ```&``` - взятие адреса
- ```->``` - доступ к членам класса через указатель

#### Базовые операции с указателями
##### Объявление и инициализация:
```cpp
#include <iostream>

int main() {
    int number = 42;        // обычная переменная
    int* pointer = &number; // указатель, хранящий адрес number
    
    std::cout << "Значение number: " << number << std::endl;        // 42
    std::cout << "Адрес number: " << &number << std::endl;         // 0x7ff...
    std::cout << "Значение pointer: " << pointer << std::endl;     // тот же адрес
    std::cout << "Разыменование pointer: " << *pointer << std::endl; // 42
    
    return 0;
}
```
##### Изменение через указатель:
```cpp
#include <iostream>

int main() {
    int score = 100;
    int* scorePtr = &score;
    
    std::cout << "Исходное значение: " << score << std::endl; // 100
    
    // Меняем значение через указатель
    *scorePtr = 200;
    
    std::cout << "Новое значение: " << score << std::endl; // 200
    std::cout << "Через указатель: " << *scorePtr << std::endl; // 200
    
    return 0;
}
```
#### Указательная арифметика
##### Работа с массивами:

```cpp
#include <iostream>

int main() {
    int numbers[5] = {10, 20, 30, 40, 50};
    int* ptr = numbers; // ptr указывает на первый элемент
    
    std::cout << "Первый элемент: " << *ptr << std::endl; // 10
    
    // Перемещение по массиву
    ptr++; // переходим к следующему элементу
    std::cout << "Второй элемент: " << *ptr << std::endl; // 20
    
    ptr += 2; // переходим на 2 элемента вперед
    std::cout << "Четвертый элемент: " << *ptr << std::endl; // 40
    
    ptr--; // возвращаемся на один элемент назад
    std::cout << "Третий элемент: " << *ptr << std::endl; // 30
    
    return 0;
}
```
### 2. 🧠 Умные указатели 

**Умные указатели** - это "умные помощники", которые автоматически убирают за собой мусор (освобождают память). Они как ответственные няни для ваших данных!

#### 1. std::unique_ptr - "Единственный хозяин"

###### Как работает:
- Может быть только ОДИН владелец объекта
- Нельзя копировать, только передавать владение
- Когда "хозяин" уходит, объект автоматически удаляется

```cpp
#include <memory>

// Создаем уникального владельца для числа
std::unique_ptr<int> myNumber = std::make_unique<int>(42);

// Можно использовать как обычный указатель
std::cout << *myNumber << std::endl; // 42

// НЕЛЬЗЯ скопировать!
// std::unique_ptr<int> copy = myNumber; // ОШИБКА!

// Можно только передать владение
std::unique_ptr<int> newOwner = std::move(myNumber);
// Теперь myNumber пустой, newOwner владеет числом 42
```
#### 2. std::shared_ptr - "Совместное владение"
###### Как работает:
- Может быть несколько владельцев одного объекта
- Ведут учет: считают сколько у объекта "хозяев"
- Удаляют объект, когда последний "хозяин" уходит

```cpp
#include <memory>

// Создаем объект с совместным владением
std::shared_ptr<int> owner1 = std::make_shared<int>(100);

{
    std::shared_ptr<int> owner2 = owner1; // Теперь два владельца
    
    std::cout << "Владельцев: " << owner1.use_count() << std::endl; // 2
    std::cout << "Значение: " << *owner2 << std::endl; // 100
} // owner2 уходит - владельцев становится 1

// Объект еще жив, им владеет owner1
std::cout << "Владельцев: " << owner1.use_count() << std::endl; // 1
// owner1 уходит - объект удаляется
``` 

#### 3. `std::weak_ptr` - "Наблюдатель" 👀

###### Как работает: 
- **Смотрит** на объект, но **не владеет** им
- Не мешает объекту удалиться
- Может проверить, жив ли еще объект

**Простая аналогия:** Вы смотрите на дом через окно. Вы видите, есть ли там свет, но не можете войти без ключа.

```cpp
#include <memory>

std::shared_ptr<int> shared = std::make_shared<int>(50);
std::weak_ptr<int> observer = shared; // Просто наблюдаем

// Проверяем, жив ли объект
if (auto temp = observer.lock()) {
    std::cout << "Объект жив: " << *temp << std::endl;
} else {
    std::cout << "Объект удален" << std::endl;
}

shared.reset(); // Удаляем объект

// Проверяем снова
if (auto temp = observer.lock()) {
    std::cout << "Объект жив" << std::endl;
} else {
    std::cout << "Объект удален" << std::endl; // Выведется это
}
```

___
## 9) Структуры,  перечисления, классы, спецификация доступа. Инкапсуляция и параметрический полиморфизм. Заголовочные файлы и фалы реализации

### 1. Структуры (struct)

Структуры - это композитные типы данных, объединяющие несколько переменных.

```cpp
#include <iostream>
#include <string>

// Объявление структуры
struct Person {
    // По умолчанию в struct все поля PUBLIC
    std::string name;
    int age;
    double height;
    
    // Методы в структуре
    void printInfo() {
        std::cout << "Name: " << name << ", Age: " << age 
                  << ", Height: " << height << std::endl;
    }
};

int main() {
    // Создание экземпляра структуры
    Person person1;
    person1.name = "Alice";
    person1.age = 25;
    person1.height = 165.5;
    
    // Инициализация при создании
    Person person2 = {"Bob", 30, 180.0};
    
    person1.printInfo();
    person2.printInfo();
}
```
### 2. Перечисления (enum)

**Перечисления** - типы данных, состоящие из именованных констант.

#### Обычные перечисления:
```cpp
enum Color {
    RED,    // 0
    GREEN,  // 1
    BLUE    // 2
};

enum Status {
    PENDING = 10,
    PROCESSING,  // 11
    COMPLETED = 20
};
```
#### Scoped enumerations (C++11):
```cpp
enum class FileStatus {
    OPEN,      // FileStatus::OPEN
    CLOSED,    // FileStatus::CLOSED
    ERROR      // FileStatus::ERROR
};

enum class TrafficLight : char {
    RED = 'R',
    YELLOW = 'Y',
    GREEN = 'G'
};

int main() {
    Color color = RED;
    FileStatus status = FileStatus::OPEN;
    
    if (color == RED) {
        std::cout << "Color is red" << std::endl;
    }
    
    if (status == FileStatus::OPEN) {
        std::cout << "File is open" << std::endl;
    }
}
```

### 3. Классы и спецификация доступа

**Классы** - основа ООП в C++, похожи на структуры, но по умолчанию имеют private доступ.

#### Базовый класс:

Пример класса:

```cpp
class BankAccount {
private:    // Доступ только внутри класса
    std::string accountNumber;
    double balance;
    std::string password;

protected:  // Доступ внутри класса и наследников
    double creditLimit;

public:     // Доступ отовсюду
    // Конструктор
    BankAccount(const std::string& accNum, double initialBalance, const std::string& pwd) 
        : accountNumber(accNum), balance(initialBalance), password(pwd), creditLimit(1000) {}
    
    // Методы
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
        }
    }
    
    bool withdraw(double amount) {
        if (amount > 0 && (balance + creditLimit) >= amount) {
            balance -= amount;
            return true;
        }
        return false;
    }
    
    double getBalance() const {
        return balance;
    }
    
    // const метод - не изменяет состояние объекта
    void displayInfo() const {
        std::cout << "Account: " << accountNumber 
                  << ", Balance: " << balance << std::endl;
        // password = "new"; // Ошибка! const метод
    }
};
```
Разбор класса:

##### Private (закрытые члены):
```cpp
private:
    std::string accountNumber;  // номер счета
    double balance;             // баланс
    std::string password;       // пароль
```
**Что это значит:**
- Доступны только внутри класса
- Скрыты от внешнего мира
- Защищают данные от неправильного использования

```cpp
int main() {
    BankAccount account("12345", 1000.0, "secret");
    
    // НЕВОЗМОЖНО извне класса:
    // std::cout << account.balance;       // Ошибка компиляции!
    // account.password = "newpass";       // Ошибка компиляции!
    // account.accountNumber = "67890";    // Ошибка компиляции!
}
```
###### Protected (защищенные члены):
```cpp
protected:
    double creditLimit;  // кредитный лимит
```
**Что это значит:**
- Доступны внутри класса и в классах-наследниках
- Скрыты от внешнего мира

##### Public (публичные члены):

```cpp
public:
    // Конструктор и методы доступны отовсюду
```
**Что это значит:**
- Доступны из любого места программы
- Формируют публичный интерфейс класса

##### Конструктор
```cpp
BankAccount(const std::string& accNum, double initialBalance, const std::string& pwd) 
    : accountNumber(accNum), balance(initialBalance), password(pwd), creditLimit(1000) {}
```
##### Детальный разбор:
- Список инициализации (: accountNumber(accNum), ...)
- - Инициализирует поля до входа в тело конструктора
- Более эффективно, чем присваивание в теле
- - Параметры по константной ссылке (const std::string&)
- Избегаем копирования больших объектов
- - const гарантирует, что оригинальные данные не изменятся
- Значение по умолчанию: creditLimit(1000)
- - Все счета создаются с кредитным лимитом 1000

##### Методы класса
```cpp
void deposit(double amount) {
    if (amount > 0) {
        balance += amount;
    }
}
double getBalance() const {
    return balance;
}
```
```cpp
int main() {
    const BankAccount readonlyAccount("123", 500, "pass");
    
    // Можно вызывать только const методы:
    double bal = readonlyAccount.getBalance();    // OK
    // readonlyAccount.deposit(100);              // Ошибка!
}
```

### Принципы инкапсуляции в действии
#### Защита данных:
```cpp
// БЕЗ инкапсуляции (опасно):
class BadBankAccount {
public:
    double balance; // Публичное поле!
};

// Можно делать что угодно:
BadBankAccount acc;
acc.balance = -1000; // Отрицательный баланс!
acc.balance = 1e9;   // Неправдоподобно большой баланс!

// С инкапсуляцией (безопасно):
BankAccount goodAcc("123", 100, "pass");
// goodAcc.balance = -1000; // Ошибка компиляции!
// Контроль через методы:
goodAcc.deposit(500);     // Только положительные суммы
goodAcc.withdraw(50);     // Проверка достаточности средств
```
#### Валидация данных:
```cpp
// В реальном классе можно добавить больше проверок:
void BankAccount::setCreditLimit(double newLimit) {
    if (newLimit >= 0 && newLimit <= 10000) { // Разумные пределы
        creditLimit = newLimit;
    } else {
        std::cout << "Invalid credit limit!" << std::endl;
    }
}
```

### Параметрический полиморфизм
**Параметрический полиморфизм** - возможность работать с разными типами данных, используя один и тот же код через шаблоны.

#### Шаблонные функции:
```cpp
#include <iostream>
#include <vector>
#include <string>

// Функция работает с ЛЮБЫМ типом, поддерживающим оператор >
template<typename T>
T findMax(const T& a, const T& b) {
    return (a > b) ? a : b;
}

// Функция работает с двумя разными типами
template<typename T1, typename T2>
void printPair(const T1& first, const T2& second) {
    std::cout << "Pair: (" << first << ", " << second << ")" << std::endl;
}

// Шаблонная функция с специализацией логики
template<typename T>
bool areEqual(const T& a, const T& b) {
    return a == b;
}

// Специализация для double (с учетом погрешности)
template<>
bool areEqual<double>(const double& a, const double& b) {
    return std::abs(a - b) < 0.0001;
}

int main() {
    // Работа с разными типами
    std::cout << findMax(10, 20) << std::endl;           // int
    std::cout << findMax(3.14, 2.71) << std::endl;       // double
    std::cout << findMax('a', 'z') << std::endl;         // char
    std::cout << findMax(std::string("apple"), std::string("banana")) << std::endl; // string
    
    printPair(42, "hello");
    printPair(3.14, true);
    
    std::cout << "Doubles equal: " << areEqual(1.00001, 1.00002) << std::endl; // 1 (true)
}
```
#### Шаблонные классы:
```cpp
#include <iostream>
#include <vector>
#include <stdexcept>

// Класс-контейнер для ЛЮБОГО типа
template<typename T>
class Stack {
private:
    std::vector<T> elements;
    size_t capacity;

public:
    Stack(size_t maxSize = 100) : capacity(maxSize) {}
    
    // Инкапсуляция + параметрический полиморфизм
    void push(const T& element) {
        if (elements.size() >= capacity) {
            throw std::overflow_error("Stack is full");
        }
        elements.push_back(element);
    }
    
    T pop() {
        if (elements.empty()) {
            throw std::runtime_error("Stack is empty");
        }
        T top = elements.back();
        elements.pop_back();
        return top;
    }
    
    const T& peek() const {
        if (elements.empty()) {
            throw std::runtime_error("Stack is empty");
        }
        return elements.back();
    }
    
    bool isEmpty() const {
        return elements.empty();
    }
    
    size_t size() const {
        return elements.size();
    }
};

// Специализация для bool (оптимизация памяти)
template<>
class Stack<bool> {
private:
    std::vector<unsigned char> bits; // Храним биты
    size_t capacity;

public:
    Stack(size_t maxSize = 100) : capacity(maxSize) {}
    
    void push(bool element) {
        if (bits.size() * 8 >= capacity) {
            throw std::overflow_error("Stack is full");
        }
        // Специфичная логика для bool
        if (bits.empty() || (bits.back() & 1) != 0) {
            bits.push_back(element ? 1 : 0);
        } else {
            // Оптимизированное хранение...
        }
    }
    
    // ... остальные методы с оптимизацией для bool
};

int main() {
    // Один интерфейс - разные типы
    Stack<int> intStack;
    Stack<std::string> stringStack;
    Stack<double> doubleStack(50); // с ограничением размера
    
    intStack.push(42);
    intStack.push(100);
    
    stringStack.push("hello");
    stringStack.push("world");
    
    doubleStack.push(3.14);
    
    std::cout << "Int stack top: " << intStack.peek() << std::endl;
    std::cout << "String stack top: " << stringStack.peek() << std::endl;
}
```
### Заголовочные файлы и фалы реализации
#### 1. Основная концепция

**Структура проекта:**
```
project/
├── include/           # Заголовочные файлы (.h, .hpp)
│   └── math_operations.h:
├── src/              # Файлы реализации (.cpp)
│   ├── main.cpp
│   └── math_operations.cpp
└── bin/              # Скомпилированные файлы
```
#### 2. Заголовочные файлы (.h, .hpp)

**Назначение:**

- Объявления классов, функций, структур
- Определения шаблонов
- Константы, макросы
- НЕ должна быть логика реализации (за исключением inline функций)

*math_operations.h:*
```cpp
#ifndef MATH_OPERATIONS_H  // Include guard - защита от многократного включения
#define MATH_OPERATIONS_H

#include <string>  // Только необходимые включения

// Объявления функций
int add(int a, int b);
double add(double a, double b);
int multiply(int a, int b);

// Объявление класса
class Calculator {
private:
    std::string name;
    int operationCount;

public:
    // Конструктор
    Calculator(const std::string& calculatorName);
    
    // Методы
    double calculate(double a, double b, char operation);
    void displayInfo() const;
    int getOperationCount() const;
    
    // Inline метод (можно реализовать в заголовке)
    const std::string& getName() const { return name; }
};

// Шаблонные функции (реализация в заголовке)
template<typename T>
T max(const T& a, const T& b) {
    return (a > b) ? a : b;
}

// Константы
constexpr double PI = 3.14159265358979323846;

#endif // MATH_OPERATIONS_H
```
#### 3. Файлы реализации (.cpp)

**Назначение:**

- Реализация функций и методов
- Логика программы
- НЕ должно быть повторных объявлений

*math_operations.cpp:*

```cpp
#include "math_operations.h"  // Включаем соответствующий заголовок
#include <iostream>
#include <stdexcept>

// Реализация функций
int add(int a, int b) {
    return a + b;
}

double add(double a, double b) {
    return a + b;
}

int multiply(int a, int b) {
    return a * b;
}

// Реализация методов класса Calculator
Calculator::Calculator(const std::string& calculatorName) 
    : name(calculatorName), operationCount(0) {
    std::cout << "Calculator '" << name << "' created" << std::endl;
}

double Calculator::calculate(double a, double b, char operation) {
    operationCount++;
    
    switch (operation) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/':
            if (b == 0) throw std::runtime_error("Division by zero");
            return a / b;
        default:
            throw std::invalid_argument("Unknown operation");
    }
}

void Calculator::displayInfo() const {
    std::cout << "Calculator: " << name 
              << ", Operations performed: " << operationCount << std::endl;
}

int Calculator::getOperationCount() const {
    return operationCount;
}
```
### 4. Main файл

*main.cpp:*
```cpp
#include "math_operations.h"  // Подключаем наш заголовок
#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Использование функций
    cout << "5 + 3 = " << add(5, 3) << endl;
    cout << "2.5 + 3.7 = " << add(2.5, 3.7) << endl;
    
    // Использование класса
    Calculator calc("Scientific Calculator");
    
    try {
        double result = calc.calculate(10, 2, '/');
        cout << "10 / 2 = " << result << endl;
    } catch (const exception& e) {
        cout << "Error: " << e.what() << endl;
    }
    
    calc.displayInfo();
    
    // Использование шаблонной функции
    cout << "Max of 5 and 10: " << max(5, 10) << endl;
    cout << "Max of 3.14 and 2.71: " << max(3.14, 2.71) << endl;
    
    return 0;
}
```
