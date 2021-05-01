#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define MIN(a, b)   (a < b ? a : b)

int min(int a, int* arr, int n) {
    if (n <= 2) {
        return MIN(a, *arr);
    } else{
        n--;
        int b = min(*arr, (1 + arr), n);
        return MIN(a, b);
    }
}

int main(int argc, char** argv) {
    int arr[] = {7,5, -5, 1, 433, -3};
    int arr_tam = sizeof(arr) / sizeof(int);
    printf("min val = %d\n", min(*arr, (arr+1), arr_tam));
    return 0;
}
