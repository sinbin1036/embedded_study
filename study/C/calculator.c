#include <stdio.h>

int main() {
    int num1; 
    int num2;
    int result;
    char operand;

    printf("계산할 식을 대입해주세요 \n");
    scanf("%d", &num1); //첫번째 숫자 정의
    while(getchar() != '\n');

    scanf("%c", &operand);
    scanf(" %d", &num2); //2번째 숫자 정의
    while(getchar() != '\n');

    switch (operand)
{
        case '+':
            result = num1 + num2;
            printf("%d \n", result);
            break;
        
        case '-':
            result = num1 - num2;
            printf("%d \n", result);
            break;  

        case '*':
            result = num1 * num2;
            printf("%d \n", result);
            break;
        
        case '/':
            result = num1 / num2;
            printf("%d \n", result);
            break;
        
        case '%':
            result = num1 % num2;
            printf("%d \n", result);
            break;

        default:
            printf("연산자를 잘못 입력하셨습니다. \n");
            break;
    }

    printf("아무키나 눌러 종료하세요.");
    
    getchar();

    return 0;
}