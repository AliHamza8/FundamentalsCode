#include<iostream>
using namespace std;

int main() {
	long int rev = 0, n, digit, num;
	cout << "enter a number:";
	cin >> num;
	n = num;
	do {
		digit = num % 10;
		rev = (rev * 10) + digit;
		num = num / 10;
	} while (num != 0);
	cout << "Reverse:" << rev << endl;
	if (n == rev)
		cout << "Its Palindrome";
	else
		cout << "Not a Palindrome";
	return 0;
}