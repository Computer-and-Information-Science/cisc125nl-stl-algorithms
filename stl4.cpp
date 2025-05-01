// STL Example 4
#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

int main () {
	list<int> mylist = { 56, 21, 44, 39, 11, 7, 14, 63, 51, 9, 23, 44 };

	// Print values, for reference
	for (auto i: mylist)
		cout << " " << i;
	cout << endl;

	// Prompt for a numberic range
	int low_value, high_value;
	cout << "Enter low and high values for range: ";
	cin >> low_value >> high_value;

	// Remove all elements from list in the given range

	// Print values, for reference
	for (auto i: mylist)
		cout << " " << i;
	cout << endl;
}
