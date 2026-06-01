#include <stdio.h>

int main() {
    int N;
    int arr1[20], arr2[20];
    int *p1, *p2;

    // N 입력
    scanf("%d", &N);

    // 첫 번째 배열 입력
    for (p1 = arr1; p1 < arr1 + N; p1++) {
        scanf("%d", p1);
    }

    // 두 번째 배열 입력
    for (p2 = arr2; p2 < arr2 + N; p2++) {
        scanf("%d", p2);
    }

    // 첫 번째 배열은 앞에서부터,
    // 두 번째 배열은 뒤에서부터 접근하여 더하기
    p1 = arr1;
    p2 = arr2 + N - 1;

    for (; p1 < arr1 + N; p1++, p2--) {
        printf(" %d", *p1 + *p2);
    }

    return 0;
}
