#include<iostream>
using namespace std;

/*
7.1 Write a program that identifies the position of 
all even numbers in an array of 10 elements.
*/

int main() {
	int numbers[10];
	
	cout << "Enter 10 numbers: ";
	for(int i = 0; i < 10; i++) cin >> numbers[i];
	
	cout << "Even numbers are located in indices: ";
	for(int j = 0; j < 10; j++)
		if(numbers[j] % 2 == 0) cout << j << " ";
	
	return 0;
}
