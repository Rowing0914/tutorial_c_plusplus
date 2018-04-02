#include <iostream>
using namespace std;

class Adder{
public:
	Adder(int i = 0){
		total = i;
	}
	void addNum(int number){
		total += number;
	}
	int getTotal(){
		return total;
	};

private:
	int total;
};

int main(){
	Adder a;
	cout << "total: " << a.getTotal() << endl;
	a.addNum(1);
	cout << "total: " << a.getTotal() << endl;
	a.addNum(2);
	cout << "total: " << a.getTotal() << endl;
	a.addNum(3);
	cout << "total: " << a.getTotal() << endl;
	return 0;
}