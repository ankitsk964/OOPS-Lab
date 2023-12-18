#include <iostream>
using namespace std;

class A{
	protected:
		int n1,n2;
	public:
		void input(){
			cout << "Enter 2 numbers ";
			cin >> n1 >> n2;
		}
		friend class B;
};
class B{
	public:
		void greater(){
			A ob;
			ob.input();
			if(ob.n1 > ob.n2)
				cout << ob.n1 << " is greater ";
			else
				cout << ob.n2 << " is greater ";
		}
};
int main(){
	B ob1;
	ob1.greater();
	return 0;
}
