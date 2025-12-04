#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int N, i;
	double sum = 0;
	i = 3;
	cout << "N: "; cin >> N;
	while (i <= N) {
		sum += (cos(i / 2) + sin(2 * i)) / 1 + sin(cos(i));
		i++;
	}
	cout << "sum: " << sum << endl;
	sum = 0;

	i = 3;
	do {
		sum += (cos(i / 2) + sin(2 * i)) / 1 + sin(cos(i));
		i++;
	} while (i <= N);
	cout << "sum: " << sum << endl;
	sum = 0;

	for (int i = 3; i <= N; i++) {
		sum += (cos(i / 2) + sin(2 * i)) / 1 + sin(cos(i));
	}
	cout << "sum: " << sum << endl;
	sum = 0;

	for (int i = N; i >= 3; i--) {
		sum += (cos(i / 2) + sin(2 * i)) / 1 + sin(cos(i));
	}
	cout << "sum: " << sum << endl;

	return 0;
}
