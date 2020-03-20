#include<iostream>
using namespace std;

/* 7.2 Write a program that will ask the user to enter the size of the array n < 100. 
Once the array size is validated, it is required that the user will enter the elements
of the array.  Finally, display the sorted array elements using any sorting algorithm
from smallest to greatest. */

int main() {
	
	int size;
	
	while(true) {
		cout << "Enter the size of the array: ";
		cin >> size;
		
		if(size < 100) break;
		else cout << "Array size too big, try again!" << endl;
	}
	
	int input[size];
	for(int i = 0; i < size; i++) {
		cout << "Array element " << i + 1 << ": ";
		cin >> input[i];
	}
	
	
	// Sorting algorithm - smallest to greatest
	int cache;
	for(int k = 0; k < size; k++) {
		cache = input[k];
		for(int l = 0; l < size; l++) {
			if(input[k] < input[l]) {
				input[k] = input[l];
				input[l] = cache;
				cache = input[k];
			}
		}
	}
	
	cout << "The sorted array is: ";
	for(int m = 0; m < size; m++) cout << input[m] << " ";
	
	return 0;
}
