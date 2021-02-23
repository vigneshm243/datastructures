#include<iostream>
using namespace std;

//Helper to swap with pointers
void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

//bubble sort using recursion
void bubbleSort(int arr[], int n){
    if (n == 1)
        return;
    for (int i = 0; i < n - 1; i++){
        if (arr[i] > arr[i + 1]){
            swap(&arr[i], &arr[i + 1]);
        }
    }

    bubbleSort(arr, n - 1);
}

void printArr(int arr[], int n){
    for (int i = 0; i < n; i++){
        std::cout << arr[i] << " ";
    }
    std::cout << endl;
}

int main(){
    int arr[] = {6, 7, 9, 34, 6, 19};
    bubbleSort(arr, sizeof(arr)/ sizeof(arr[0]));
    printArr(arr, sizeof(arr)/ sizeof(arr[0]));
    return 0;
}