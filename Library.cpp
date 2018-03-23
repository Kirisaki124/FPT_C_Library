#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
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
// Ex: a = 1 2 3 4 5, n = 5 -> insertArray(a, n, 10, 1) -> 1 10 2 3 4 5, n = 6
void insertArray(int a[], int &arraySize, int item, int pos) {
	++arraySize;
	for (int i = arraySize - 1; i > pos; i--) {
		a[i] = a[i - 1];
	}
	a[pos] = item;
}

// Chèn một số thực vào mảng có kích thước length tại vị trí pos
// Ex: a = 1 2 3 4 5, n = 5 -> insertArray(a, n, 10, 1) -> 1 10 2 3 4 5, n = 6
void insertArray(double a[], int &arraySize, double item, int pos) {
	++arraySize;
	for (int i = pos + 1; i < arraySize; i++) {
		a[i] = a[i - 1];
	}
	a[pos] = item;
}

// Xóa phần tử trong mảng số nguyên tại vị trí pos
// Ex: a = 1 2 3 4 5, n = 5 -> deleteArray(a, n, 1) -> 1 3 4 5, n = 4
void deleteArray(int a[], int &arraySize, int pos) {
	for (int i = pos; i < arraySize - 1; i++) {
		a[i] = a[i + 1];
	}
	--arraySize;
}

// Xóa phần tử trong mảng số thực tại vị trí pos
// Ex: a = 1 2 3 4 5, n = 5 -> deleteArray(a, n, 1) -> 1 3 4 5, n = 4
void deleteArray(double a[], int &arraySize, int pos) {
	for (int i = pos; i < arraySize - 1; i++) {
		a[i] = a[i + 1];
	}
	--arraySize;
}

// Sắp xếp mảng số nguyên, isIncreasing = 0 thì giảm dần, không thì tăng dần
// Ex: a = {1 2 3 4 5} -> sort(a, n, 0) -> 5 4 3 2 1
// Ex: a = {5 4 3 2 1} -> sort(a, n, 1) -> 1 2 3 4 5
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
// Ex: a = {1 2 3 4 5} -> sort(a, n, 0) -> 5 4 3 2 1
// Ex: a = {5 4 3 2 1} -> sort(a, n, 1) -> 1 2 3 4 5
void sort(char *a[], int arraySize, int isIncreasing) {
	for (int i = arraySize - 1; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			if ((strcmp(a[j], a[j + 1]) > 0) == isIncreasing) {
				// Phải có hàm swap mới dùng được
				// Phải có dấu & trước tên biến
				swapString(&a[j], &a[j + 1]);
			}
		}
	}
}

// Tách xâu thành mảng kí tự stringList theo splitBy.
// stringList[100][100]: Số 100 cần được thay đổi bằng đúng kích thước đề bài
// Example: Hello world from C -> stringList[0] = "Hello", stringList[1] = "world", ...
void splitString(char *s, char stringList[100][100], int &wordCount, const char *splitBy) {
	char *tmpStr = strtok(s, splitBy);
	while (tmpStr != NULL) {
		strcpy(stringList[wordCount++], tmpStr);
		tmpStr = strtok(NULL, splitBy);
	}
}

// Chuyển một xâu thành chữ hoa: abcd ->  ABCD
void stringUpper(char *s) {
	for (int i = 0; i < strlen(s); i++) {
		s[i] = toupper(s[i]);
	}
}

// Chuyển một xâu thành chữ thường
// VD: ABCD -> abcd
void stringLower(char *s) {
	for (int i = 0; i < strlen(s); i++) {
		s[i] = tolower(s[i]);
	}
}
#include "stdio.h"
#include "string.h"
#include "math.h"

// đổi chỗ 2 số int
void swap(int &a, int &b){
    int c = b;
    b = a;
    a = c;
}

// đổi chỗ 2 số double
void swap(double &a, double &b){
    double c = b;
    b = a;
    a = c;
}


// đổi chỗ 2 array
void swap(char a[], char b[]){
    char c[1000];
    strcpy(c, a);
    strcpy(a, b);
    strcpy(b, c);
}

// Khi dùng địa chỉ
void swapString(char **str1_ptr, char **str2_ptr)
{
  char *temp = *str1_ptr;
  *str1_ptr = *str2_ptr;
  *str2_ptr = temp;
}
// VD cách dùng swap
// int a = 5, b = 3;
// swap(5, 3);

// OUTPUT
// a = 3, b = 5



// Tìm số nguyên tố
// trả lại giá trị 0 và 1
// 1 là có là số nguyên tố
// 0 là không phải số nguyên tố
int isPrime(int a){
    int isPrime = 0;
    for (int i = 2; i < sqrt(a); i++) {
        if (a % i == 0) {
            isPrime = 1;
            break;
        }
    }
    return isPrime;
}
// VD cách dùng isPrime
// int x = isPrime(11);    check số 11 có phải số nguyên tố hay không
// nếu in ra thấy x = 0 thì 11 không phải số nguyên tố
// nếu in ra thấy x = 1 thì 11 là số nguyên tố





// Trả lại tổng các chữ số
int sumOfDigits(int a){
    int sum = 0;
    while (a != 0) {
        sum += a % 10;
        a /= 10;
    }
    return sum;
}
// VD cách dùng sumOfDigits
// x = sumOfDigits(1234);
// OUTPUT
// x = 1 + 2 + 3 + 4 = 10



int countDigit(int a){
    int count = 0;
    while (a != 0) {
        count ++;
        a /= 10;
    }
    return count;
}
// VD cách dùng countDigit
// int x = countDigit(1234);
// OUTPUT
// x = 4



// Tìm số lớn nhất trong chuỗi
int findMax(int a[], int arraySize){
    int max = a[0];
    for (int i = 0; i < arraySize; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }
    return max;
}

// Tìm vị trí số lớn nhất trong chuỗi
int findMaxPosition(int a[], int arraySize){
    int max = a[0];
    int position = 0;
    for (int i = 0; i < arraySize; i++) {
        if (a[i] > max) {
            max = a[i];
            position = i;
        }
    }
    return position;
}


// Tìm số nhỏ nhất trong chuỗi
int findMin(int a[], int arraySize){
    int min = a[0];
    for (int i = 0; i < arraySize; i++) {
        if (a[i] < min) {
            min = a[i];
        }
    }
    return min;
}

// Tìm vị trí số nhỏ nhất trong chuỗi
int findMinPosition(int a[], int arraySize){
    int min = a[0];
    int position = 0;
    for (int i = 0; i < arraySize; i++) {
        if (a[i] < min) {
            min = a[i];
            position = i;
        }
    }
    return position;
}
///////////////////////////////////////////////////////////////////

double findMax(double a[], int listSize){
    double max = a[0];
    for (int i = 0; i < listSize; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }
    return max;
}

double findMaxPosition(double a[], int listSize){
    double max = a[0];
    int position = 0;
    for (int i = 0; i < listSize; i++) {
        if (a[i] > max) {
            max = a[i];
            position = i;
        }
    }
    return position;
}

double findMin(double a[], int listSize){
    double min = a[0];
    for (int i = 0; i < listSize; i++) {
        if (a[i] < min) {
            min = a[i];
        }
    }
    return min;
}

double findMinPosition(double a[], int listSize){
    double min = a[0];
    int position = 0;
    for (int i = 0; i < listSize; i++) {
        if (a[i] < min) {
            min = a[i];
            position = i;
        }
    }
    return position;
}

//////////////////////////////////////////////////////

// Tìm giá trị value trong danh sách
// findValueInArray trả lại 2 giá trị 1 và 0
// 1 : có trong danh sách
// 0 : không có trong danh sách
int findValueInArray(int a[], int listSize, int value){
    for (int i = 0; i < listSize; i++) {
        if (a[i] == value) {
            return 1;
        }
    }
    return 0;
}

// Đảo ngược array
void reverseArray(int a[], int listSize) {
    listSize -= 1;
    int size = listSize;
    for (int i = 0; i < (listSize / 2); i++) {
        swap(a[i], a[size--]);
    }
}
// VD
// a[] = {1,2,3,4,5,6,7}
// reverse(a, 7);
// OUTPUT
// a[] = {7,6,5,4,3,2,1}


// Giai thừa
int factorial(int n){
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}
