#include <iostream>
using namespace std;

class fun{
	private:
		int a,b;
	public:
		fun(){
			a = 1;
			b = 2;
		}
		friend void sum(fun& ob);
		
};
void sum(fun& ob){
	cout << "Sum = " << (ob.a+ob.b);
}
int main(){
	fun ob;
	sum(ob);
	return 0;
}
