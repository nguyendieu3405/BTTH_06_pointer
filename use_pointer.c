/*1. Con trỏ và mảng
Mục tiêu: Áp dụng con trỏ để làm việc với mảng.
• Yêu cầu:
• Viết chương trình sử dụng con trỏ để truy cập và thao tác với mảng.
• Bao gồm các chức năng như nhập, in và tìm kiếm phần tử trong mảng*/

#include <stdio.h>
#include <stdlib.h>


void inputArray(int *arr, int n) {
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
}

void printArray(const int *arr, int n) {
    printf("Cac phan tu cua mang la:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
// Hàm tìm kiếm phần tử trong mảng
int search(const int *arr, int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i; 
        }
    }
    return -1;
}

int main() {
    int n;
    printf("Nhap kich thuoc cua mang: ");
    scanf("%d", &n);
    // Cấp phát động mảng
    int *array = (int *)malloc(n * sizeof(int));
    inputArray(array, n);
    printArray(array, n);
    int target;
    printf("Nhap phan tu can tim kiem: ");
    scanf("%d", &target);
    int result = search(array, n, target);
    if (result != -1) {
        printf("Tim thay phan tu tai vi tri thu %d\n", result);
    } else {
        printf("Khong tim thay phan tu trong mang\n");
    }
    // Giải phóng bộ nhớ
    free(array);

    return 0;
}
