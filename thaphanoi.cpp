#include <stdio.h>

void chuyenDia(int n, char cotNguon, char cotDich, char cotPhuTro) {
    if (n == 1) {
        printf("Di chuyen dia 1 tu cot %c sang cot %c\n", cotNguon, cotDich);
    } else {
        chuyenDia(n-1, cotNguon, cotPhuTro, cotDich);
        printf("Di chuyen dia %d tu cot %c sang cot %c\n", n, cotNguon, cotDich);
        chuyenDia(n-1, cotPhuTro, cotDich, cotNguon);
    }
}

int main() {
    int soDia = 3;  // Số đĩa ban đầu là 3
    char cotA = 'A', cotB = 'B', cotC = 'C';  // Tên các cột

    chuyenDia(soDia, cotA, cotC, cotB);  // Di chuyển các đĩa từ cột A sang cột C

    return 0;
}
