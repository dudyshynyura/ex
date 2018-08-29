#include <iostream>
using namespace std;

template<typename T> int BinarySearch(T *arr, int left, int right, T toFind){
    while(left <= right){
        int middle = left + (right - left) / 2;
        if(arr[middle] == toFind) return middle;
        if(arr[middle] < toFind) left = middle + 1;
        else right = middle - 1;
    }
    return -1;
}

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    cout << BinarySearch<int>(arr, 0, 5, 4) << endl;

    return 0;
}
