#include <iostream>
using namespace std;

class opload{
	int r,i;
	public:
		void input(){
			cout << "Enter real and imaginary part :- ";
			cin >> r >> i;
		}
		void output(){
			cout << "Incremented compkex number is = " << r << "+" << i << "i";
		}
		opload operator ++(int){
			opload temp;
			temp.r = r+1;
			temp.i = i+1;
			return temp;
		}
};
int main(){
	opload c1,c2;
	c1.input();
	c2 = c1++;
	c2.output();
	return 0;
}
