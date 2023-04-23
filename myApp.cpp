#include<iostream>
using namespace std;

int main() {
	int i, a, b, r = 1;
	cout << "Enter two numbers";
	cin >> a >> b;
	i = a;
	do {
		a = a * b;
	} while (i >= b);
	cout << "Result:" << a;
	return 0;
}