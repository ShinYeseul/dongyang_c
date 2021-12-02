#include <stdlib.h>
#include <string.h>
#include <iostream>
using namespace std;

int compare(const void *str1, const void *str2){
    return (strcmp(*(char **)str1, *(char **)str2));
}

int main(void) {
    char *arr[] = {"11", "33", "22", "66", "44", "99", "55", "88" };
    int n = sizeof(arr)/sizeof(arr[0]);

    qsort(arr, n, sizeof(arr[0]), compare);

    for(int i = 0; i < n; i++)
        cout << arr[i]<< endl;
    return 0;
}