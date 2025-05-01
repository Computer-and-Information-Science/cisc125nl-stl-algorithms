// STL Example 1
#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

int main () {
	list<int> mylist = { 10, 20, 30, 40, 50 };

	// Print all list objects using iterators
	for (list<int>::iterator it = mylist.begin(); it != mylist.end(); it++)
		cout << " " << *it;
	cout << endl;

	// Print all list objects using for_each

	// Print all list objects using a range-based for loop

	// Increment all int's in list using for_each

	// Increment all int's in list using range-based for loop

}
