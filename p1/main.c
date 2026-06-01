#include <stdio.h>

int main() {
    char arr[11];   // 영문자 10개를 저장할 배열
    char *p, *q;    // 배열을 가리킬 포인터 선언

    // 문자열 입력
    scanf("%10s", arr);

    int maxCount = 0;  // 가장 많이 나온 횟수 저장
    char maxChar;      // 가장 많이 나온 문자 저장

    // 배열의 각 문자를 기준으로 반복
    for (p = arr; p < arr + 10; p++) {
        int count = 0; // 현재 문자의 개수 저장

        // 현재 문자와 배열의 모든 문자를 비교
        for (q = arr; q < arr + 10; q++) {
            if (*p == *q) {
                count++;
            }
        }

        // 지금까지 나온 최대 빈도수보다 크면 갱신
        if (count > maxCount) {
            maxCount = count;
            maxChar = *p;
        }
    }

    // 가장 많이 나온 문자와 빈도수 출력
    printf("%c %d\n", maxChar, maxCount);

    return 0;
}
