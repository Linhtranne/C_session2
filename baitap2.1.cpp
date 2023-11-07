#include<stdio.h>
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
    printf ("Chu vi hinh vuong la %.f\n ", chu_vi_hinh_vuong );
    printf ("dien tich hinh vuong la %.f\n ", dien_tich_hinh_vuong);
    printf ("chu vi hinh chu nhat la %.f\n", chu_vi_hinh_chu_nhat);
    printf ("dien tich hinh chu nhat la %.f\n", dien_tich_hinh_chu_nhat);
    printf ("chu vi duong tron la %.2f\n", chu_vi_duong_tron);
    printf ("dien tich hinh trong la %.2f\n", dien_tich_duong_tron);
}