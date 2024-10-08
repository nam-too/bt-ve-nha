#include <iostream>
#include <algorithm> 
using namespace std;

void sapXepDongGopTangDan(float* dongGop, int soLuongDongGop) {
    sort(dongGop, dongGop + soLuongDongGop); 
}

float tinhDongGopTrungBinh(float* dongGop, int soLuongDongGop) {
    float tong = 0.0;
    for (float* ptr = dongGop; ptr < dongGop + soLuongDongGop; ++ptr) {
        tong += *ptr; 
    }
    return tong / soLuongDongGop;
}

int main() {
    int soLuongDongGop;

    do {
        cout << "Nhập số lượng đóng góp: ";
        cin >> soLuongDongGop;
        if (soLuongDongGop <= 0) {
            cout << "Số lượng đóng góp phải lớn hơn 0. Vui lòng nhập lại." << endl;
        }
    } while (soLuongDongGop <= 0);
    
    float* dongGop = new float[soLuongDongGop];

    for (int i = 0; i < soLuongDongGop; ++i) {
        do {
            cout << "Nhập giá trị đóng góp thứ " << i + 1 << ": ";
            cin >> *(dongGop + i); 
            if (*(dongGop + i) < 0) {
                cout << "Giá trị đóng góp không được âm. Vui lòng nhập lại." << endl;
            }
        } while (*(dongGop + i) < 0); 
    }

    sapXepDongGopTangDan(dongGop, soLuongDongGop);

    float dongGopTrungBinh = tinhDongGopTrungBinh(dongGop, soLuongDongGop);

    cout << "\nDanh sách đóng góp đã sắp xếp theo thứ tự tăng dần:\n";
    for (float* ptr = dongGop; ptr < dongGop + soLuongDongGop; ++ptr) {
        cout << *ptr << " ";
    }
    cout << endl;

    cout << "Giá trị trung bình của các đóng góp: " << dongGopTrungBinh << endl;


    delete[] dongGop;
    return 0;
}
