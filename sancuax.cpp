#include <stdio.h>

int timSan(int a[], int n, int x) {
    int left = 0, right = n - 1;
    int mid;

    while (left <= right) {
        mid = (left + right) / 2;

        if (a[mid] == x) {
            return a[mid];
        } else if (a[mid] > x) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    if (right < 0) {
        return -1;
    } else {
        return a[right];
    }
}

int main() {
    int n, x;
    printf("Moi nhap so luong phan tu cua mang: ");
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i ++) {
        printf("a[%d]: ", i);
        scanf("%d", &a[i]);
    }
    printf("Nhap gia tri X can san: ");
    scanf("%d", &x);

    int san = timSan(a, n, x);
	
	if(san == -1) {
		printf("Khong tim thay san cua x!");
	} else {
		printf("San cua %d la %d", x, san);
	}
    return 0;
}
