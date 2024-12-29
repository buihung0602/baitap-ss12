#include <stdio.h>

void inMang(int arr[], int kichThuoc) {
    printf("Cac phan tu trong mang la:\n");
    for (int i = 0; i < kichThuoc; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int mang[100], soPhanTu;
    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &soPhanTu);

    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < soPhanTu; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &mang[i]);
    }

    inMang(mang, soPhanTu);

    return 0;
}

