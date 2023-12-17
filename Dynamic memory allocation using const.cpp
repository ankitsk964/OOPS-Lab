#include <iostream>
using namespace std;
class memalloc{
	public:
		int a;
		int *p;
		memalloc(){
			p = new int(a);
			cout << "Memory space reserved" << endl;;
		}
		~memalloc(){
			delete[]p;
			cout << "Memory space deleted";
		}	
};
int main(){
	memalloc ob;
	return 0;
}
