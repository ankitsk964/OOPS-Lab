#include <iostream>
using namespace std;
class add{
	private:
		int x,y;
	public:
		void input(){
			cin >> x >> y;
		}
		void addtwonum(){
			input();
			cout << "\n Sum is = " << (x+y);
		}
};
int main(){
	add ob;
	ob.addtwonum();
	return 0;
}
