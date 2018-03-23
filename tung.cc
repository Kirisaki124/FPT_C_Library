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
