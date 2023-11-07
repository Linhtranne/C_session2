#include<stdio.h>

int main() {
    int num1 = 48, num2 = 101;
    int nhap_so, chuyen_so, lay_so_1, lay_so_2, mu_so;
    nhap_so = num1 & num2;
    chuyen_so = num1 | num2;
    lay_so_1 = ~num1;
    lay_so_2 = ~num2;
    mu_so = num1 ^ num2;
    printf("AND: %d\n", nhap_so);
    printf("OR: %d\n", chuyen_so);
    printf("NOT 48: %d\n", lay_so_1);
    printf("NOT 101: %d\n", lay_so_2);
    printf("XOR: %d\n", mu_so);
    unsigned int num3 = -65;
    printf("-65: ");
    for(int i = 31; i >= 0; i--) {
        int mask = 1 << i;
        printf("%d", (num3 & mask) ? 1 : 0);
    }
    printf("\n");
    return 0;
}