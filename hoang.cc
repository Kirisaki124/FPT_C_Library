#include <stdio.h>
#include <stdlib.h>

// Trả về số nhỏ hơn trong 2 số nguyên
int min(int a, int b) {
	return a < b ? a : b;
}

// Trả về số nhỏ nhất trong 3 số
int min(int a, int b, int c) {
	int z = a;
	if (z > b) z = b;
	if (z > c) z = c;
	return z; 
}

// Trả về số nhỏ hơn trong 2 số nguyên
double min(double a, double b) {
	return a < b ? a : b;
}

// Trả về số nhỏ nhất trong 3 số thực
double min(double a, double b, double c) {
	double z = a;
	if (z > b) z = b;
	if (z > c) z = c;
	return z; 
}

// Trả về số lớn nhất trong 2 số nguyên
int max(int a, int b) {
	return a > b ? a : b;
}

// Trả về số lớn nhất trong 3 số nguyên
int max(int a, int b, int c) {
	int z = a;
	if (z < b) z = b;
	if (z < c) z = c;
	return z; 
}

double max(double a, double b) {
	return a > b ? a : b;
}

double max(double a, double b, double c) {
	double z = a;
	if (z < b) z = b;
	if (z < c) z = c;
	return z; 
}

int main() {
    
    system("pause");
}