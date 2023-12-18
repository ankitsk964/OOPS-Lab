#include <iostream>
using namespace std;

class fload{
	private:
		int x;
	public:
		void area(int x){
			cout << "\n Square area is = " << (x*x);
		}
		void area(int x,int y){
			cout << "\n Rectangle area is = " << (x*y);
		}
};
int main(){
	fload ob;
	ob.area(2);
	ob.area(2, 3);
	return 0;
}
