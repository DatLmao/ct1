#include <iostream>
using namespace std;

// Hàm kiểm tra xem một thời gian có phải là khoảng yêu thích không
bool isLovelyTime(int hh, int mm) {
    int h1 = hh / 10; // Chữ số hàng chục của giờ
    int h2 = hh % 10; // Chữ số hàng đơn vị của giờ
    int m1 = mm / 10; // Chữ số hàng chục của phút
    int m2 = mm % 10; // Chữ số hàng đơn vị của phút
    
    // Tính các sai số giữa các chữ số liên tiếp
    int diff1 = h2 - h1;
    int diff2 = m1 - h2;
    int diff3 = m2 - m1;
    
    // Kiểm tra xem tất cả các sai số có nằm trong khoảng [-2, 2] không
    return abs(diff1) <= 2 && abs(diff2) <= 2 && abs(diff3) <= 2;
}

int main() {
    int D;
    cin >> D; // Đọc giá trị D từ input
    
    int count = 0; // Biến đếm số khoảng thời gian yêu thích
    
    // Bắt đầu từ 12:00, kiểm tra từng phút trong khoảng D phút
    for (int i = 0; i <= D; i++) {
        int hh = 12 + (i / 60) % 12; // Tính giờ (lấy modulo 12)
        int mm = i % 60;             // Tính phút
        
        if (isLovelyTime(hh, mm)) {
            count++; // Tăng biến đếm nếu là thời gian yêu thích
        }
    }
    
    // In ra kết quả
    cout << count << endl;
    return 0;
}
