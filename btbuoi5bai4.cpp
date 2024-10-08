#include <iostream>
#include <string>
#include <algorithm>  

using namespace std;

void sapXepSinhVien(string* ten, double* diem, int soLuong) {
    for (int i = 0; i < soLuong - 1; i++) {
        for (int j = i + 1; j < soLuong; j++) {
            if (*(diem + i) < *(diem + j)) {
               
                swap(*(diem + i), *(diem + j));
                swap(*(ten + i), *(ten + j));
            }
        }
    }
}

int doSomething(int* x, int* y) {
    int temp = *x;
    *x = *y * 10;
    *y = temp * 10;
    return *x + *y;
}

int main() {
    int soLuong;
    cout << "Nhập số lượng sinh viên: ";
    cin >> soLuong;

    string* ten = new string[soLuong];
    double* diem = new double[soLuong];

    for (int i = 0; i < soLuong; i++) {
        cout << "Nhập tên sinh viên thứ " << i + 1 << ": ";
        cin >> *(ten + i);
        cout << "Nhập điểm của sinh viên " << *(ten + i) << ": ";
        cin >> *(diem + i);
    }

    sapXepSinhVien(ten, diem, soLuong);

    cout << "\nDanh sách sinh viên sau khi sắp xếp theo điểm:\n";
    for (int i = 0; i < soLuong; i++) {
        cout << *(ten + i) << ": " << *(diem + i) << endl;
    }

    int a = 3, b = 4;
    cout << "\nTrước khi gọi hàm doSomething: a = " << a << ", b = " << b << endl;
    int ketQua = doSomething(&a, &b);
    cout << "Sau khi gọi hàm doSomething: a = " << a << ", b = " << b << endl;
    cout << "Kết quả trả về: " << ketQua << endl;

    delete[] ten;
    delete[] diem;

    return 0;
}
