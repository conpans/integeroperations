#include "std_lib_facilities.h"

int main() {
	int val1, val2;

	// Prompt user for input
	cout << "Enter the first integer: ";
	cin >> val1;

	cout << "Enter the second integer: ";
	cin >> val2;

	// Calculate and print the results
	cout << "Smaller " << (val1 < val2 ? val1 : val2) << "\n";
	cout << "Larger " << (val1 > val2 ? val1 : val2) << "\n";
	cout << "Sum: " << val1 + val2 << "\n";
	cout << "Difference: " << val1 - val2 << "\n";
	cout << "Product: " << val1 * val2 << "\n";

	if (val2 !=0) { // Avoid divising by zed
		cout << "Ratio (val1/val2): " << static_cast<double>(val1) / val2 << "\n";
	}
	else {
		cout << "Ratio: Underfined (division by zero)" << "\n";
	}
}