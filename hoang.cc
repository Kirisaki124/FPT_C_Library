#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "tung.cc"

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

// Chèn một số nguyên vào mảng có kích thước length tại vị trí pos 
void insertArray(int a[], int &arraySize, int item, int pos) {
	++arraySize;
	for (int i = arraySize - 1; i > pos; i--) {
		a[i] = a[i - 1];
	}
	a[pos] = item;
}

// Chèn một số thực vào mảng có kích thước length tại vị trí pos 
void insertArray(double a[], int &arraySize, double item, int pos) {
	++arraySize;
	for (int i = pos + 1; i < arraySize; i++) {
		a[i] = a[i - 1];
	}
	a[pos] = item;
}

// Xóa phần tử trong mảng số nguyên tại vị trí pos
void deleteArrayAtPos(int a[], int &arraySize, int pos) {
	for (int i = pos; i < arraySize - 1; i++) {
		a[i] = a[i + 1];
	}
	--arraySize;
}

// Xóa phần tử trong mảng số thực tại vị trí pos
void deleteArrayAtPos(double a[], int &arraySize, int pos) {
	for (int i = pos; i < arraySize - 1; i++) {
		a[i] = a[i + 1];
	}
	--arraySize;
}

// Sắp xếp mảng số nguyên, isIncreasing = 0 thì giảm dần, không thì tăng dần
void sort(int a[], int arraySize, int isIncreasing) {
	for (int i = arraySize - 1; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			if (a[j] > a[j + 1] == isIncreasing) {
				// Phải có hàm swap mới dùng được
				swap(a[j], a[j + 1]);
			}
		}
	}
}

// Sắp xếp mảng số thực, isIncreasing = 0 thì giảm dần, không thì tăng dần
void sort(double a[], int arraySize, int isIncreasing) {
	for (int i = arraySize - 1; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			if (a[j] > a[j + 1] == isIncreasing) {
				// Phải có hàm swap mới dùng được
				swap(a[j], a[j + 1]);
			}
		}
	}
}

// Sắp xếp mảng xâu, isIncreasing = 0 thì giảm dần, không thì tăng dần
void sort(char *a[], int arraySize, int isIncreasing) {
	for (int i = arraySize - 1; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			if ((strcmp(a[j], a[j + 1]) > 0) == isIncreasing) {
				// Phải có hàm swap mới dùng được
				// Phải có dấu & trước tên biến
				//swapString(&a[j], &a[j + 1]);
			}
		}
	}
}

int main() {
    double a[10] = {1.3, 2.3, 3.3, 4.3, 5.2};
    int length = 5;
    deleteArrayAtPos(a, length, 3);
    for (int i = 0; i < length; i++) {
    	printf("%f ", a[i]);
    }
    system("pause");
}