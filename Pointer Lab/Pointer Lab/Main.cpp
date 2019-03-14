#include <iostream>
using namespace std;

//original swap
void swap(int a, int b) {
	int temp_a;
	temp_a = a;
	a = b;
	b = temp_a;
	cout << "\nNew a: " << a << "\nNew b: " << b << endl;
}

//using pointers;
void pntSwap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
	cout << "\nNew a: " << *a << "\nNew b: " << *b << endl;
}

int main() {
	int a = 5, b = 10;
	cout << "Old a: " << a << "\nOld b: " << b << endl;
	
	//calling original swap
	swap(a, b);
	
	//calling pointer swap
	pntSwap(&a, &b);


	return 0;
}