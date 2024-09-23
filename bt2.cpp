#include <iostream>
using namespace std; 
int main() {
    int rows = 3, cols = 4;
    int **arr = new int*[rows];
    for (int i = 0; i < rows; ++i){
        arr[i] = new int[cols];
    }
    for(int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            arr[i][j] = i * cols + j;
        } 
    }
    cout << " ma tran 2 chieu:" << endl;
    for (int i = 0; i < rows; ++i) {
        for(int j = 0; j < cols; ++j) {
            cout << arr[i][j] << " \t" ;
        }
        cout << endl;
    }
    for (int i = 0; i < rows; ++i) {
        delete[] arr[i];
    }
    delete[] arr;
    return 0;
}