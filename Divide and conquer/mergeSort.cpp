#include <iostream>
#include <vector>

void merge(std::vector<int>& arr, int left, int right, int middle );
void mergeSort(std::vector<int>& arr, int left, int right);
void mergeSort(std::vector<int>& arr);

void mergeSort(std::vector<int>& arr, int left, int right){
 if(left < right){
    int middle = left + (right - left) / 2;
    std::cout<<"In mergesort \n";

    mergeSort(arr, left, middle);
    mergeSort(arr, middle + 1, right);

    merge(arr, left, middle, right);
 }
}

void mergeSort(std::vector<int>& arr){
    std::cout<<"Ok cool\n";
    mergeSort(arr, 0, arr.size()-1);
}

void merge(std::vector<int>& arr, int left, int middle, int right ){
    std::cout<<"in  merge \n";
    int leftArrSize = middle - left + 1;
    int rightArrSize = right - middle;

    std::vector<int> leftArr(leftArrSize);
    std::vector<int> rightArr(rightArrSize);

    for(int i=0; i<leftArrSize; i++)
        leftArr[i] = arr[left + i];
    for(int i=0; i<rightArrSize; i++)
        rightArr[i] = arr[middle + 1 + i];

    int l = 0, r = 0, i = left;

    while( l < leftArrSize && r < rightArrSize){
        if(leftArr[l] <= rightArr[r]){
            arr[i] = leftArr[l];
            l++;
        }
        else{
            arr[i] = rightArr[r];
            r++;
        }

        i++;
    }

    while(l < leftArrSize){
        arr[i] = leftArr[l];
        i++;
        l++;
    }

    while(r < rightArrSize){
        arr[i] = rightArr[r];
        i++;
        r++;
    }


}

int main() {
    std::vector<int> arr = {12, 11, 13, 5, 6, 7};

    std::cout << "Original array: ";
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << "\n";

    
    mergeSort(arr);

    std::cout << "Sorted array: ";
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << "\n";

    return 0;
}
