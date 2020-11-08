#include<iostream>
using namespace std;

//Helper to swap with pointers
void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

//bubble sort
void bubbleSort(int arr[], int n){
    //looping through the array 
    for (int i = 0; i < n - 1; i++){
        //looping through the elements till non sorted, 
        //as the final element in each run is sorted at last
        for (int j = 0; j < n - i - 1; j++){
            //swapping for ascending order
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
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
    bubbleSort(arr, sizeof(arr)/ sizeof(arr[0]));
    printArr(arr, sizeof(arr)/ sizeof(arr[0]));
    return 0;
}