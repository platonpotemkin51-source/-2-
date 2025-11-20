#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int task_5() {
	int n;
	int kol{ 0 };
	vector<int> alln = {};
	cin >> n;
	size_t i = 0;
	int k;

	while (i != n) {
			cin >> k;
			alln.push_back(k);
			i++;
	};
	auto min_it = min_element(alln.begin(),alln.end());
	int min_value = *min_it;
	for (int num : alln) {
		if (num == min_value) {
			kol++;
		}
	}
	cout << "Count of minimal elements: " << kol << endl;
	return kol;
}

int fib(int n) {
	if (n <= 0) return 0;
	if (n == 1 || n == 2) return 1;
	else {
		return fib(n - 1) + fib(n-2);
	}

}

int task_6() {
	unsigned int a;
	cin >> a;

	if (a == 0) {
		return 0;  // F(0) = 0
	}
	if (a == 1) {
		return 1;  // F(1) = 1
	}

	for (size_t i = 1; ; i++) {
		if (fib(i) > a) { return -1; };
		if (fib(i) == a) { 
			cout << i;
			return i; 
		};
	}
	
}

int task_7() {
	int a;
	int b;
	cin >> a;
	cin >> b;
	int n = b;
	if (a <= b) {
		while (n != a-1) {
			if (n == 7 * (n / 7)) {
				cout << n;
				return n;
			}
			n--;
		}
		return -1;
	}
	return 0;
	
}

void task_8() {
	string frst;
	cin >> frst;
	for (char& el : frst) {
		switch (el) {
			case 'A':
				el = 'T';
				break;
			case 'T':
				el = 'A';
				break;
			case 'C':
				el = 'G';
				break;
			case 'G':
				el = 'C';
				break;
		}
	}
	cout << frst;
}

void task_9() {
	double n;
	cin >> n;
	size_t i{ 0 };
	while (pow(2, i) < n) {
		cout << pow(2, i) << " ";
		i++;
	}
}

int task_10() {
	int n;
	int k;
	vector<int> all_n = {};

	cin >> n;

	size_t i = 0;
	
	while (i != n) {
		cin >> k;
		all_n.push_back(k);
		i++;
	};
	auto max_it = max_element(all_n.begin(), all_n.end());
	int max_value = *max_it;
	cout << max_value;
	return max_value;
}

int task_11() {
	int n;
	int kol_pos{ 0 };
	cin >> n;
	size_t i = 0;
	int k;

	while (i != n) {
		cin >> k;
		if (k > 0) { kol_pos++; }
		i++;
	}
	cout << kol_pos << endl;
	return kol_pos;
}

int task_12() {
	int n;
	int k;
	cin >> n;

	vector<int> all_n_two;
	size_t i{ 0 };

	while (i != n) {
		cin >> k;
		if (k == 8 * (k / 8) && k > 9 && k < 100) { all_n_two.push_back(k); }
		if (all_n_two.size() >= 2) { 
			cout << all_n_two[0] + all_n_two[1];
			return all_n_two[0] + all_n_two[1];
		}
		i++;
	}
	return -1;
}

//вот с этой (task_13) функцией пишет что возникли ошибки при сборке
int task_13() {
	int k;
	cin >> k;
	vector<int> all_k = {};

	while (k != 0) {
		all_k.push_back(k);
		cin >> k;
	}

	if (all_k.empty()) {
		cout << 0;
		return;
	}

	auto min_k = min_element(all_k.begin(), all_k.end());

	cout << *min_k;
}

int main() {
	//task_5();
	//task_6();
	//task_7();
	//task_8();
	//task_9();
	//task_10();
	//task_11();
	//task_12();
	task_13();

	return 0;

}
