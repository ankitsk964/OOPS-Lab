#include <iostream>
using namespace std;

class opload{
	int H,M,S;
	public:
		void input(){
			cout << "Enter time in HH:MM:SS ";
			cin >> H >> M >> S;;
		}
		void output(){
			cout << "Sum = " << H << ":" << M << ":" << S;
		}
		opload operator +(opload ob){
			opload temp;
			temp.S = S + ob.S;
			temp.M = (temp.S / 60) + M + ob.M;
			temp.S = temp.S % 60;
			temp.H = (temp.M / 60) + H + ob.H;
			temp.M = temp.M % 60;
			return temp;
		}
};
int main(){
	opload t1,t2,t3;
	t1.input();
	t2.input();
	t3 = t1 + t2;
	t3.output();
	return 0;
}
