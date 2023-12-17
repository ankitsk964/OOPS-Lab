#include <iostream>
using namespace std;
class def{
	public:
		int a;
		def(){
			a = 0;
			
		}
		def(int b){
			a = b;
		}
		def(ob){
			a = ob.a;
			cout << a;
		}
		
};
int main(){
	def ob;
	def ob(3);
	def ob1(ob);
	
}
