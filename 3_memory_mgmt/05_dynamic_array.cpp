#include <iostream>

int* createArr(int sizeArr);
int* resizeArr(int *arr, int resizeValue, int sizeValue);

int main() {

    int sizeArr, reArr;

    std::cout << "Enter the size of the array: ";
    std::cin >> sizeArr;

    int *arr = createArr(sizeArr);

    // assign value to array
    for(int i = 0; i < sizeArr; i++) {
        arr[i] = i;
    }

    // print created array
    std::cout << "Array created: ";
    for (int k = 0; k < sizeArr; k++) {
        std::cout << arr[k] << " ";
    }
    std::cout << std::endl;

    std::cout << "Enter array expansion value: ";
    std::cin >> reArr;

    int *newArr = resizeArr(arr, reArr, sizeArr);

    // print expanded array
    for(int j = 0; j < (sizeArr + reArr) ; j++) {
        std::cout << newArr[j] << " ";
    }
    std::cout << std::endl;


    // delete old array
    delete [] arr;
}

int* createArr(int sizeArr) {

    // define an array memory block
    int *arr = new int[sizeArr];

    return arr;
}

int* resizeArr(int* arr, int resizeValue, int sizeValue) {
    
    // define new array memory block
    int *newArr = new int[sizeValue + resizeValue];
    
    // populate new array with value from old array
    for (int i = 0; i < sizeValue; i++) {
        newArr[i] = arr[i];
    }

    // delete old array memory block
    delete [] arr;

    return newArr;
}