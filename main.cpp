#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	string s; cin >> s;

	if ("NLCS" == s) {
		cout << "North London Collegiate School";
	}
	else if ("BHA" == s) {
		cout << "Branksome Hall Asia";
	}
	else if ("KIS" == s) {
		cout << "Korea International School";
	}
	else if ("SJA" == s) {
		cout << "St. Johnsbury Academy";
	}

	return 0;
}