#include <iostream>
#include <string.h>
using namespace std;

class opload{
	char str[20];
	public:
		void input(){
			cout << "Enter string";
			cin >> str;
		}
		void output(){
			cout << "Concatinated string is = " << str;
		}
		opload operator +(opload ob){
			opload temp;
			strcpy(temp.str, str);
			strcat(temp.str, ob.str);
			return temp;
		}
};
int main(){
	opload s1,s2,s3;
	s1.input();
	s2.input();
	s3 = s1 + s2;
	s3.output();
	return 0;
}
