#include <iostream>
using namespace std;

int main(){
	double* pvalue = NULL;
	pvalue = new double;

	*pvalue = 29494.9923;
	cout << "Value of pvalue: " << *pvalue << endl;
	delete pvalue;
	cout << "Value of pvalue: " << *pvalue << endl;
	return 0;
}