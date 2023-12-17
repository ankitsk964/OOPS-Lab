#include <iostream>
using namespace std;
class sumof2{
	public:
		int sum;
		inline void sum2(int a, int b){
			sum = a + b;
			cout << sum;
		}
};
int main(){
	sumof2 ob;
	ob.sum2(2, 3);
}
