//배열의 모든 왼쪽 값은 자신의 값보다 작고, 모든 오른쪽 값은 자신의값보다 큰 항목 찾기
#include <iostream>


int findElement(int arr[], int n) {
 for (int i = 1; i < n-1; ++i) {
     int j = i-1;
     int k = i+1;
     
     while(arr[j] < arr[i] && arr[k] > arr[i]){
         if(j == 0 && k == n-1) {
             return i;
        }
        
        if(j > 0) {
            j--;
        }
        
        if(k < n-1){
            k++;
        }
    }
}
 return -1;
}

int main(){
    int arr[] = {5, 1, 4, 3, 6, 8, 10, 7, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int idx = findElement(arr, n);

    std::cout << idx << '\n';
    return 0;
}
