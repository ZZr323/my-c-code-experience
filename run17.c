#include <stdio.h>

typedef struct {
    double real;
    double imag;
} Complex;

void addComplex(Complex* num1, Complex* num2, Complex* result) {
    result->real = num1->real + num2->real;
    result->imag = num1->imag + num2->imag;
}

void subtractComplex(Complex* num1, Complex* num2, Complex* result) {
    result->real = num1->real - num2->real;
    result->imag = num1->imag - num2->imag;
}

void multiplyComplex(Complex* num1, Complex* num2, Complex* result) {
    result->real = num1->real * num2->real - num1->imag * num2->imag;
    result->imag = num1->real * num2->imag + num1->imag * num2->real;
}

int main() {
    char operator;
    double a, b, c, d;

    scanf("%c %lf %lf %lf %lf", &operator, &a, &b, &c, &d);

    Complex num1, num2, result;
    num1.real = a;
    num1.imag = b;
    num2.real = c;
    num2.imag = d;

    switch (operator) {
        case '+':
            addComplex(&num1, &num2, &result);
            break;
        case '-':
            subtractComplex(&num1, &num2, &result);
            break;
        case '*':
            multiplyComplex(&num1, &num2, &result);
            break;
        default:
            printf("无效的运算符\n");
            return 0;
    }

    printf("%.2lf+%.2lfi\n", result.real, result.imag);

    return 0;
}