#include <stdio.h>
int timSoLonNhat(int arr[], int kichThuoc) {
    int max = arr[0];

    for (int i = 1; i < kichThuoc; i++) {
        if (arr[i] > max) {
            max = arr[i]; 
        }
    }
    return max;
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
    int lonNhat = timSoLonNhat(mang, soPhanTu);

    printf("So lon nhat trong mang la: %d\n", lonNhat);
    return 0;
}

