#include <iostream>
using namespace std;

struct dateTime {
    int year;
    int month;
    int day;
    int hour;
    int minute;
    int second;
};

void inputDateTime(dateTime* dt) {
    do {
        cout << "Nhập năm (>= 0): ";
        cin >> dt->year;
        if (dt->year < 0)
            cout << "Năm không được âm. Vui lòng nhập lại.\n";
    } while (dt->year < 0);
    
    do {
        cout << "Nhập tháng (1-12): ";
        cin >> dt->month;
        if (dt->month < 1 || dt->month > 12)
            cout << "Tháng không hợp lệ. Vui lòng nhập lại.\n";
    } while (dt->month < 1 || dt->month > 12);
    
    do {
        cout << "Nhập ngày (1-31): ";
        cin >> dt->day;
        if (dt->day < 1 || dt->day > 31)
            cout << "Ngày không hợp lệ. Vui lòng nhập lại.\n";
    } while (dt->day < 1 || dt->day > 31);
    
    do {
        cout << "Nhập giờ (0-23): ";
        cin >> dt->hour;
        if (dt->hour < 0 || dt->hour > 23)
            cout << "Giờ không hợp lệ. Vui lòng nhập lại.\n";
    } while (dt->hour < 0 || dt->hour > 23);
    
    do {
        cout << "Nhập phút (0-59): ";
        cin >> dt->minute;
        if (dt->minute < 0 || dt->minute > 59)
            cout << "Phút không hợp lệ. Vui lòng nhập lại.\n";
    } while (dt->minute < 0 || dt->minute > 59);
    
    do {
        cout << "Nhập giây (0-59): ";
        cin >> dt->second;
        if (dt->second < 0 || dt->second > 59)
            cout << "Giây không hợp lệ. Vui lòng nhập lại.\n";
    } while (dt->second < 0 || dt->second > 59);
}

dateTime* compareDateTime(dateTime* dt1, dateTime* dt2) {
    if (dt1->year < dt2->year) return dt1;
    if (dt1->year > dt2->year) return dt2;

    if (dt1->month < dt2->month) return dt1;
    if (dt1->month > dt2->month) return dt2;

    if (dt1->day < dt2->day) return dt1;
    if (dt1->day > dt2->day) return dt2;

    if (dt1->hour < dt2->hour) return dt1;
    if (dt1->hour > dt2->hour) return dt2;

    if (dt1->minute < dt2->minute) return dt1;
    if (dt1->minute > dt2->minute) return dt2;

    if (dt1->second < dt2->second) return dt1;
    if (dt1->second > dt2->second) return dt2;

    cout << "Ngày giờ giống nhau.\n";
    return dt1;  
}

void displayDateTime(const dateTime* dt) {
    cout << dt->day << "/" << dt->month << "/" << dt->year << " "
         << dt->hour << ":" << dt->minute << ":" << dt->second << endl;
}

int main() {
    dateTime* dt1 = new dateTime;
    dateTime* dt2 = new dateTime;

    cout << "Nhập thông tin ngày và giờ thứ nhất:\n";
    inputDateTime(dt1);
    
    cout << "Nhập thông tin ngày và giờ thứ hai:\n";
    inputDateTime(dt2);

    dateTime* earlier = compareDateTime(dt1, dt2);

    cout << "\nThời điểm sớm hơn là: ";
    displayDateTime(earlier);

    delete dt1;
    delete dt2;

    return 0;
}
