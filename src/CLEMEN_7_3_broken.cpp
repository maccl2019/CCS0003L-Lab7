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
	
	cout << "Enter elements of matrix 1: " << endl;
	for(int i = 0; i < mat1c; i++) {
		for(int j = 0; j < mat1r; j++) {
			cout << "Enter elements a[" << i+1 << "][" << j+1 << "]: ";
			cin >> mat1[i][j];
		}
	}
	cout << endl;
	
	cout << "matrix 1:" << endl;
	for(int o = 0; o < mat1c; o++) {
		for(int p = 0; p < mat1r; p++) {
			cout << mat1[o][p] << " ";
		}
		cout << endl;
	}
	
	cout << "Enter elements of matrix 2: " << endl;
	for(int k = 0; k < mat2c; k++) {
		for(int l = 0; l < mat2r; l++) {
			cout << "Enter elements b[" << k+1 << "][" << l+1 << "]: ";
			cin >> mat2[k][l];
		}
	}
	cout << endl;
	
	cout << "matrix 2:" << endl;
	for(int o = 0; o < mat2r; o++) {
		for(int p = 0; p < mat2c; p++) {
			cout << mat2[o][p] << " ";
		}
		cout << endl;
	}
	
	int result[mat1c][mat2r];
	for(int m = 0; m < mat1r; m++)
		for(int n = 0; n < mat2c; n++) 	
			result[m][n] = 0;

	for(int m = 0; m < mat1r; m++) {
		for(int n = 0; n < mat2c; n++) {
			for(int q = 0; q < mat1c; q++) {
				result[m][n] += mat1[m][q] * mat2[q][n];
			}
		}
	}
	cout << endl;
	
	cout << "Output matrix:" << endl;
	for(int o = 0; o < mat1r; o++) {
		for(int p = 0; p < mat2c; p++) {
			cout << result[o][p] << " ";
		}
		cout << endl;
	}
	
	return 0;
}
