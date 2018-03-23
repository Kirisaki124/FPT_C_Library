// file cua tung

#include "stdio.h"
#include "string.h"
#include "math.h"

// doi cho so binh thuong
void swap(int &a, int &b){
    int c = b;
    b = a;
    a = c;
}

// doi cho so double
void swap(double &a, double &b){
    double c = b;
    b = a;
    a = c;
}


// doi cho mang
void swap(char a[], char b[]){
    char c[1000];
    strcpy(c, a);
    strcpy(a, b);
    strcpy(b, c);
}


// tim so nguyen to
// tra ve gia tri 1 va 0
// 1 la co
// 0 la ko
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



int main() {
    int x = isPrime(2);
    printf("%d\n", x);
}
