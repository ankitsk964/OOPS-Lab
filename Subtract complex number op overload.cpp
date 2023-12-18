#include <iostream>
using namespace std;

class opload{
	int r,i;
	public:
		void input(){
			cout << "Enter real and imaginary part ";
			cin >> r >> i;
		}
		void output(){
			cout << "Subtraction of given complex number is = " << r << "+" << i << "i";	
			
		}
		opload operator -(opload ob){
			opload temp;
			temp.r = r - ob.r;
			temp.i = i - ob.i;
			return temp;
		}
};
int main(){
	opload c1,c2,c3;
	c1.input();
	c2.input();
	c3 = c1 - c2;
	c3.output();
	return 0;
}
