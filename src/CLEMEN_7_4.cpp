#include<iostream>
#include<string>
using namespace std;

/* 7.4 Write a program that counts the number of
vowels and whitespaces in a string. */

int main() {
	
	string input;
	cout << "Enter a string: ";
	getline(cin, input);
	
	int a = 0, e = 0, i = 0, o = 0, u = 0, ws = 0;
	
	for(int i = 0; i <= input.length(); i++) {
		switch(input[i]) {
			case 'a':
            case 'A':
				a++;
                break;
            case 'e':
            case 'E':
				e++;
                break;
            case 'i':
            case 'I':
            	i++;
                break;
            case 'o':
            case 'O':
            	o++;
                break;
            case 'u':
            case 'U':
            	u++;
                break;
            case ' ':
            	ws++;
                break;
		}
	}
	
	cout << "A:\t" << a << endl;
	cout << "E:\t" << e << endl;
	cout << "I:\t" << i << endl;
	cout << "O:\t" << o << endl;
	cout << "U:\t" << u << endl;
	cout << "Whitespaces - " << ws << endl;	
	
	return 0;
}
