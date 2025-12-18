#include <iostream>
#include <cmath>
#include <stdexcept>
#include <vector>
#include <string>



class Point {
private:
	std::vector<double> coords;

public:
	Point(const std::vector<double>& coordinates) : coords(coordinates) {}

	double euclideanDistance(const Point& other) const {

		double sum = 0.0;
		for (size_t i = 0; i < coords.size(); ++i) {
			double diff = coords[i] - other.coords[i];
			sum += diff * diff;
		}
		return std::sqrt(sum);
	}

};

// --------------------------------------------------------------------------

enum Role {
	Admin,
	Teacher,
	Student
};

struct HomeTasks : public std::vector<std::string> {};

struct User {
	int id;
	std::string name;
	Role role;

	User(int id, std::string name, Role role)
		: id(id), name(name), role(role) {
		std::cout << "Пользователь создан!" << std::endl;
	}

	void get_all_info_about_user() const {
		std::cout << "Информация о пользователе -> ID: " << id << " имя: " << name << " роль: " << role << std::endl;
	}
};

struct Group {
	int id;
	std::string name;
	std::vector<int> stud_id;
	HomeTasks homeworks;

	Group(int id, std::string name)
		: id(id), name(name) {
		std::cout << "Группа создана!" << std::endl;
	}

	void set_new_student_in_group(const int new_st_id) {
		stud_id.push_back(new_st_id);
		std::cout << "Студент с ID " << new_st_id << " добавлен в группу " << name << std::endl;
	}

	void set_new_homework() {
		std::string homework;
		std::cout << "Введите задание: ";
		std::getline(std::cin, homework); // читает всю строку
		if (!homework.empty()) {
			homeworks.push_back(homework);
			std::cout << "Задание добавлен !";
		}
	}

	void get_last_homework() const{
		if (!homeworks.empty()) {
			std::cout << "Последнее задание: " << homeworks.back() << std::endl;
		}
		else {
			std::cout << "Заданий нет!" << std::endl;
		}
	}

	void get_all_homeworks() const{
		std::cout << "Всего заданий для "<< name << " группы: " << homeworks.size() << "\n";
		for (const auto& task : homeworks) {
			std::cout << "- " << task << "\n";
		}
	}
};

// -----------------------------------------------------------

#include <algorithm>


struct City {
    std::string name;
    int population;
    bool hasAirport;
    std::vector<std::string> districts;

    City(const std::string& n, int pop, bool airport, const std::vector<std::string>& dists)
        : name(n), population(pop), hasAirport(airport), districts(dists) {
    }

    // Расчёт рейтинга 
    double calculateRating() const {
        double rating = 0.0;

        rating += (population + 1)/10000; 

        // +100 баллов за каждый аэропорт
        if (hasAirport) {
            rating += 100.0* districts.size();
        }

        return rating;
    }

    bool operator<(const City& other) const {
        return this->calculateRating() > other.calculateRating(); // по убыванию
    }

    void printInfo() const {
        std::cout << "Город: " << name
            << ", Население: " << population
            << ", Наличие аэропорта: " << (hasAirport ? "есть" : "нет")
            << ", Количество аэропортов: " << districts.size()
            << ", Рейтинг: " << calculateRating() << "\n";
    }
};

void bench_1() {
	std::cout << "=== Демонстрация работы учебной платформы ===\n\n";

	// 1. Создаём пользователей
	User admin(1, "Алексей", Role::Admin);
	User teacher(2, "Мария Ивановна", Role::Teacher);
	User student1(3, "Иван Петров", Role::Student);
	User student2(4, "Анна Сидорова", Role::Student);

	std::cout << "\n";
	admin.get_all_info_about_user();
	teacher.get_all_info_about_user();
	student1.get_all_info_about_user();

	// 2. Создаём группу
	Group mathGroup(101, "P3122");

	// 3. Добавляем студентов в группу
	mathGroup.set_new_student_in_group(student1.id);
	mathGroup.set_new_student_in_group(student2.id);

	std::cout << "\n";

	// 4. Вводим домашние задания
	std::cout << "Теперь добавим домашние задания для группы \"" << mathGroup.name << "\"\n";


	mathGroup.set_new_homework(); // например: "Решить уравнения x^2 + 2x + 1 = 0"
	std::cout << "\n";
	mathGroup.set_new_homework(); // например: "Написать реферат по истории математики"

	std::cout << "\n--- Результаты ---\n";
	mathGroup.get_all_homeworks();
	std::cout << "\n";
	mathGroup.get_last_homework();
}

void bench_2() {
    // Создаём города
    auto Ms = City(
        "Москва", 13000000, true,
        { "Внуково", "Шереметьево", "Домодедово", "Жуковский" }
    );
    auto Sm = City("Смоленск", 330000, false, {});
    auto Vg = City("Воркута", 60000, true, { "Воркута" });

    // Вектор городов
    std::vector<City> topCities = { Ms, Sm, Vg };

    // Сортируем по рейтингу (по убыванию — самый лучший первый)
    std::sort(topCities.begin(), topCities.end());

    // Выводим результаты
    std::cout << "=== Рейтинг городов по качеству жизни ===\n";
    for (const auto& city : topCities) {
        city.printInfo();
    }

    // Самый лучший город
    auto& best = topCities.front();
    std::cout << "\nЛучший город: " << best.name << " (рейтинг: " << best.calculateRating() << ")\n";
}


int main() {
    
	//bench_1();
	//bench_2();

    return 0;
}