#include <stdio.h>

int main() {
    char name[30];

    printf("이름을 입력하시오 \n");
    fgets(name, sizeof(name), stdin);

    printf("안녕하세요, [%s]님!", name);

    getchar();
    return 0;
}


