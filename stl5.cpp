// STL Example 5
#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

void print_list(const list<int> l) {
	for (auto n: l)
		cout << " " << n;
	cout << endl;
}

int main () {
	list<int> mylist = { 56, 21, 44, 39, 11, 7, 14, 63, 51, 9, 23, 44 };

	// Print initial values
	print_list(mylist);

	// Sort list, ascending

	// Sort list, descending

	// Sort list such that all odds come before all evens, ascending otherwise

}
