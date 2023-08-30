
#include <iostream>
using namespace std;
int main(){
	int* hey;
	float* hello;
	hey=new int;
	hello=new float;
	*hey=100;
	*hello=200.20f;
	
	cout<<*hey<<endl;
	cout<<*hello<<endl;
	delete hey;
	delete hello;
	return 0;
}
