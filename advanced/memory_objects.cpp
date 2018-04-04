#include <iostream>
using namespace std;

class Box {
public:
	Box() {
		cout << "Constructor called!!" << endl;
	}
	~Box(){
		cout << "Destructor called!" << endl;
	}
};

int main(){
	Box* myBoxArray = new Box[10];
	delete [] myBoxArray;
	return 0;
}