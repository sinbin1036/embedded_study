//입력한 숫자만큼 n x n 의 이차원 배열 만들고 반시계 방향으로 숫자 채우기기

//숫자입력 받기는 완성 이제 배열 만들고 반시계 방향으로 숫자 채우기 구상해야함 (배열 생성함수, 출력함수 분할?)
//숫자채우기(출력은) system("cls")로 지우면서 야매 렌더링(?) 활용 [디른 더 좋은 방안이 있을경우 활용]
#include <stdio.h>

int arr_in(int arr[][]) {  // 배열 생성 함수
    // for() {

    // }
}

int main() { 
    char input[100]; //배열 수
    int array_num; //숫자 변환

    printf("숫자를 입력하시오(0부터 100까지 가능) : ");
    fgets(input, sizeof(input), stdin); //버퍼관리 안합니다 안해요
    sscanf(input, "%d", &array_num);

    int arr[array_num][array_num];


    getchar();
    return 0;
}
