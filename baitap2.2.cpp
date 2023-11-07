#include<stdio.h>
int main() {
    int n1 = 48, n2 = 101;
    int nhap_so, chuyen_so, lay_so_1, lay_so_2, mu_so;
    nhap_so = n1 & n2;
    chuyen_so = n1 | n2;
    lay_so_1 = ~n1;
    lay_so_2 = ~n2;
    mu_so = n1 ^ n2;
    printf("AND: %d\n", nhap_so);
    printf("OR: %d\n", chuyen_so);
    printf("NOT 48: %d\n", lay_so_1);
    printf("NOT 101: %d\n", lay_so_2);
    printf("XOR: %d\n", mu_so);
    unsigned int n3 = -65;
    printf("-65: ");
    for(int i = 31; i >= 0; i--) {
        int mask = 1 << i;
        printf("%d", (n3 & mask) ? 1 : 0);
    }
    printf("\n");
    unsigned int n4 = 48;
    printf("48: ");
    for(int i = 31; i >= 0; i--) {
        int mask = 1 << i;
        printf("%d", (n4 & mask) ? 1 : 0);
    }
    printf("\n");
    unsigned int n5 = 101;
    printf("101: ");
    for(int i = 31; i >= 0; i--) {
        int mask = 1 << i;
        printf("%d", (n5 & mask) ? 1 : 0);
    }
    printf("\n");
    return 0;
}
