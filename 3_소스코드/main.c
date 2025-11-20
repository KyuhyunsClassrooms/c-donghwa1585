#include <stdio.h>

#define MAX 100

char names[MAX][20];
int count = 0;

int main() {
    int menu;

    while (1) {
        printf("\n1. 출석 체크\n2. 명단 보기\n3. 종료\n선택: ");
        scanf("%d", &menu);

        if (menu == 1) {
            printf("이름: ");
            scanf("%s", names[count]);
            printf("출석 완료!\n");
            count++;
        }
        else if (menu == 2) {
            printf("\n--- 출석 명단 ---\n");
            for (int i = 0; i < count; i++)
                printf("%d. %s\n", i + 1, names[i]);
        }
        else if (menu == 3) {
            printf("종료합니다.\n");
            break;
        }
        else {
            printf("잘못 입력!\n");
        }
    }

    return 0;
}
