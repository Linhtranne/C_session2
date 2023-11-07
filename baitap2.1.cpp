#include<iostream>
using namespace std;

int main() {
    float canh_hinh_vuong = 1.0;
    float chieu_dai_hinh_chu_nhat = 2.0;
    float chieu_rong_hinh_chu_nhat = 3.0;
    float ban_kinh_duong_tron = 4.0;
    const float PI = 3.14;
    float chu_vi_hinh_vuong = 4 * canh_hinh_vuong;
    float dien_tich_hinh_vuong = canh_hinh_vuong * canh_hinh_vuong;
    float chu_vi_hinh_chu_nhat = 2 * (chieu_dai_hinh_chu_nhat + chieu_rong_hinh_chu_nhat);
    float dien_tich_hinh_chu_nhat = chieu_dai_hinh_chu_nhat * chieu_rong_hinh_chu_nhat;
    float chu_vi_duong_tron = 2 * PI * ban_kinh_duong_tron;
    float dien_tich_duong_tron = PI * ban_kinh_duong_tron * ban_kinh_duong_tron;
    cout << "Chu vi hinh vuong: " << chu_vi_hinh_vuong << ", Dien tich hinh vuong: " << dien_tich_hinh_vuong << endl;
    cout << "Chu vi hinh chu nhat: " << chu_vi_hinh_chu_nhat << ", Dien tich hinh chu nhat: " << dien_tich_hinh_chu_nhat << endl;
    cout << "Chu vi duong tron: " << chu_vi_duong_tron << ", Dien tich duong tron: " << dien_tich_duong_tron << endl;

    return 0;
}