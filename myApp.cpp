#include<iostream>
using namespace std;

int main() {
	int i = 1, a = 0, b = 1, sum = 0, num;
	cout << "Enter a number:";
	cin >> num;
	cout << a << endl;
	cout << b << endl;
	while (i < num) {
		sum = a + b;
		cout << sum << endl;
		i++;
		a = b;
		b = sum;
	}
	
	return 0;
}