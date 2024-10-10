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
    cout << "Nhập năm: ";
    cin >> dt->year;
    
    cout << "Nhập tháng (1-12): ";
    cin >> dt->month;
    
    cout << "Nhập ngày (1-31): ";
    cin >> dt->day;
    
    cout << "Nhập giờ (0-23): ";
    cin >> dt->hour;
    
    cout << "Nhập phút (0-59): ";
    cin >> dt->minute;
    
    cout << "Nhập giây (0-59): ";
    cin >> dt->second;
}

void displayDateTime(const dateTime* dt) {
    cout << dt->day << "/" << dt->month << "/" << dt->year << " "
         << dt->hour << ":" << dt->minute << ":" << dt->second << endl;
}

int compareDateTime(const dateTime* dt1, const dateTime* dt2) {
    if (dt1->year != dt2->year)
        return (dt1->year < dt2->year) ? -1 : 1;
    
    if (dt1->month != dt2->month)
        return (dt1->month < dt2->month) ? -1 : 1;
    
    if (dt1->day != dt2->day)
        return (dt1->day < dt2->day) ? -1 : 1;
    
    if (dt1->hour != dt2->hour)
        return (dt1->hour < dt2->hour) ? -1 : 1;
    
    if (dt1->minute != dt2->minute)
        return (dt1->minute < dt2->minute) ? -1 : 1;
    
    if (dt1->second != dt2->second)
        return (dt1->second < dt2->second) ? -1 : 1;
    
    return 0;
}

int main() {
    dateTime* dt1 = new dateTime;
    dateTime* dt2 = new dateTime;

    cout << "Nhập thông tin ngày và giờ thứ nhất:\n";
    inputDateTime(dt1);
    
    cout << "Nhập thông tin ngày và giờ thứ hai:\n";
    inputDateTime(dt2);

    cout << "\nNgày giờ thứ nhất: ";
    displayDateTime(dt1);
    
    cout << "Ngày giờ thứ hai: ";
    displayDateTime(dt2);

    int result = compareDateTime(dt1, dt2);
    if (result == 0)
        cout << "Hai ngày giờ này giống nhau.\n";
    else if (result < 0)
        cout << "Ngày giờ thứ nhất xảy ra trước ngày giờ thứ hai.\n";
    else
        cout << "Ngày giờ thứ hai xảy ra trước ngày giờ thứ nhất.\n";

    delete dt1;
    delete dt2;

    return 0;
}
