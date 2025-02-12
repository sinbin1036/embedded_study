#include <stdio.h>

int main() {
    int num1; 
    int num2;
    int result;
    char operand;

    printf("계산할 식을 대입해주세요");
    scanf("%d", &num1); //첫번째 숫자 정의
    printf("%d", &num1);
    getchar();

    // getchar();
    // scanf("%c", &operand);

    // getchar();
    // scanf("%d", &num2); //2번째 숫자 정의

    // getchar();

    // switch (operand)
    // {
    //     case '+':
    //         result = num1 + num2;
    //         printf("%d", &result);
    //         break;
        
    //     case '-':
    //         result = num1 - num2;
    //         printf("%d", &result);
    //         break;  

    //     case '*':
    //         result = num1 * num2;
    //         printf("%d", &result);
    //         break;
        
    //     case '/':
    //         result = num1 / num2;
    //         printf("%d", &result);
    //         break;
        
    //     case '%':
    //         result = num1 % num2;
    //         printf("%d", &result);
    //         break;

    //     default:
    //         printf("연산자를 잘못 입력하셨습니다");
    //         break;
    // }


    return 0;
}