#include <iostream>
using namespace std;

void swap(int *a, int *b);

int main(){
	
	int a, b;
	
	cout << "Enter 2 numbers to swap";
	cin >> a  >> b;
	swap(&a, &b);
	cout << "The swapped numbers are :- " << a << " and " << b;
	
}

void swap(int *a, int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
