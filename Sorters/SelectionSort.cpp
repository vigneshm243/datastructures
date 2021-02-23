#include<iostream>
using namespace std;

//Helper to swap with pointers
void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

//selection sort
void selectionSort(int arr[], int n){
    //looping through the array, first element chosen as minimal index
    for (int i = 0; i < n - 1; i++){
        //smallest index
        int min_idx = i;
        //looping through the elements from non sorted element        
        for (int j = i + 1; j < n; j++){
            //swapping for ascending order
            if (arr[min_idx] > arr[j])
                swap(&arr[min_idx], &arr[j]);
        }
    }
}

void printArr(int arr[], int n){
    for (int i = 0; i < n; i++){
        std::cout << arr[i] << " ";
    }
    std::cout << endl;
}

int main(){
    int arr[] = {6, 7, 9, 34, 6, 19};
    selectionSort(arr, sizeof(arr)/ sizeof(arr[0]));
    printArr(arr, sizeof(arr)/ sizeof(arr[0]));
    return 0;
}