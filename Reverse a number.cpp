#include <iostream>
using namespace std;

int reverseInt(int n);

int main(){
	
	int n, reversed;
	cout << "Enter a number to reverse :- ";
	cin >> n;
	reversed = reverseInt(n);
	cout << "Reversed number is :- " << reversed;
}

int reverseInt(int n){
	int reversed = 0, digit;	
	while(n!=0){
		digit = n % 10;
		reversed = (reversed * 10) + digit;
		n = n / 10;
	}
	return reversed;
}
