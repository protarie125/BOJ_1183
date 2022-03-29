#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	cin >> n;

	if (1 == n) {
		cout << 1;
		return 0;
	}

	if (2 == n) {
		int a1, b1;
		cin >> a1 >> b1;
		const auto& d1 = b1 - a1;

		int a2, b2;
		cin >> a2 >> b2;
		const auto& d2 = b2 - a2;

		const auto& b = d1 < d2 ? d1 : d2;
		const auto& e = d1 < d2 ? d2 : d1;
		cout << e - b + 1;
		return 0;
	}

	if (1 == n % 2) {
		cout << 1;
		return 0;
	}

	auto vec = vector<int>(n);
	for (int i = 0; i < n; ++i) {
		int a, b;
		cin >> a >> b;
		vec[i] = b - a;
	}

	sort(vec.begin(), vec.end());
	const auto& d1 = vec[n / 2 - 1];
	const auto& d2 = vec[n / 2];
	const auto& b = d1 < d2 ? d1 : d2;
	const auto& e = d1 < d2 ? d2 : d1;
	cout << e - b + 1;

	return 0;
}