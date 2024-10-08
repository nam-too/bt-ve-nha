#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;

double tinhTrungBinh(vector<double> diem) {
    if (diem.size() <= 1) {
        cout << "Không đủ điểm để loại bỏ." << endl;
        return 0;
    }

  
    auto min_it = min_element(diem.begin(), diem.end());
    double diemThapNhat = *min_it;

   
    diem.erase(min_it);

    double tong = 0;
    for (double d : diem) {
        tong += d;
    }

  
    double trungBinh = tong / diem.size();
    return trungBinh;
}

int main() {
    vector<double> diem;

 
    int soLuong;
    cout << "Nhập số lượng điểm: ";
    cin >> soLuong;

  
    for (int i = 0; i < soLuong; i++) {
        double d;
        cout << "Nhập điểm thứ " << i + 1 << ": ";
        cin >> d;
        diem.push_back(d);
    }

    
    double trungBinh = tinhTrungBinh(diem);


    cout << "Trung bình sau khi loại bỏ điểm thấp nhất: " << trungBinh << endl;

    return 0;
}

