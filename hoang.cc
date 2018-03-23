#include <stdio.h>
#include <stdlib.h>
#include <math.h>

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

// Trả về ước chung lớn nhất của 2 số nguyên
int gcd(int a, int b) {
	while (b > 0) {
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}

// Trả về bội chung nhỏ nhất của 2 số nguyên
int lcm(int a, int b) {
	return abs(a * b) / gcd(a, b);
}

int main() {
    
    system("pause");
}