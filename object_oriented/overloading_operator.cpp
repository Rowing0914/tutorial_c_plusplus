#include <iostream>
using namespace std;

class printData{
public:
	void print(int i){
		cout << "Printing int: " << i << endl;
	}
	void print(double d){
		cout << "Printing double: " << d << endl;
	}
	void print(string s){
		cout << "Printing string: " << s << endl;
	}
};

int main(void){
	printData pd;
	pd.print(34);
	pd.print(3.134);
	pd.print("Hello!");
}