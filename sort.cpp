#include "sort.h"

sort::sort()
{

}

void sort::swap(int &a, int &b) {
    int t = a;
    a = b;
    b = t;
}

bool sort::larger(int a, int b) {
    return a > b;
}

bool sort::smaller(int a, int b) {
    return a < b;
}

void sort::_sort(int* arr, int length, bool (*compare)(int, int)) {
    int flag = 1;

    for(int i = 0; i < length-1 && flag == 1; i++) {
        flag = 0;
        for(int j = 0; j < length-i-1; j++) {
            if(compare(arr[j+1], arr[j])) {
                swap(arr[j+1], arr[j]);
                flag = 1;
            }
        }
    }
}
