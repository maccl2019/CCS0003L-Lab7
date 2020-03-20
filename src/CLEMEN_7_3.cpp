#include<iostream>
using namespace std;

/* 7.3 Write a program that multiplies to matrices. To multiply two matrices,
the number of columns of first matrix should be equal to the number of rows 
to second matrix. This program displays the error until the number of columns 
of first matrix is equal to the number of rows of second matrix. */

int main() {
	
	int mat1r, mat1c;
	int mat2r, mat2c;
	
	while(true) {
		cout << "Enter rows and columns for first matrix: ";
		cin >> mat1r >> mat1c;
		
		cout << "Enter rows and columns for second matrix: ";
		cin >> mat2r >> mat2c;
		
		if(mat1c == mat2r) break;
		else cout << "Error! column of first matrix not equal to row of second." << endl;
	}
	
	int mat1[mat1r][mat1c], mat2[mat2r][mat2c];
	
	cout << endl;
	
	for(int i = 0; i < mat1r; i++) {
		for(int j = 0; j < mat1c; j++) {
			cout << "Enter elements a[" << i+1 << "][" << j+1 << "]: ";
			cin >> mat1[i][j];
		}
	}
	
	cout << endl;
	
	for(int i = 0; i < mat2r; i++) {
		for(int j = 0; j < mat2c; j++) {
			cout << "Enter elements b[" << i+1 << "][" << j+1 << "]: ";
			cin >> mat2[i][j];
		}
	}
	
	int result[mat1c][mat2r];
	for(int i = 0; i < mat1c; i++)
		for(int j = 0; j < mat2r; j++) 	
			result[i][j] = 0;

	for(int i = 0; i < mat1r; i++) {
		for(int j = 0; j < mat2c; j++) {
			for(int k = 0; k < mat1c; k++) {
				result[i][j] += mat1[i][k] * mat2[k][j];
			}
		}
	}
	
	cout << endl;
	
	cout << "Output matrix:" << endl;
	for(int i = 0; i < mat1r; i++) {
		for(int j = 0; j < mat2c; j++) {
			cout << result[i][j] << " ";
		}
		cout << endl;
	}
	
	return 0;
}
