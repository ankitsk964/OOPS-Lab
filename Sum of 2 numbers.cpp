#include <iostream>
using namespace std;

class Sum{
	private:
		int a, b;
	
	public:
		void summ(){
			cout << "Enter 2 numbers";
			cin >> a >> b;
			cout << "The sum of given numbers is = " << a + b;	
		}	
};
int main(){
	Sum sum1;
	sum1.summ();
	return 0;
}
