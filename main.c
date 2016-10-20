#include <stdio.h>
#include <stdlib.h>
#include<string.h>
double saveResult(double number,char ch)
{   static double staticResult;
    switch(ch){
    case '+':
        staticResult =staticResult+number;
        break;
    case '-':
        staticResult =staticResult-number;
        break;
    case '*':
        staticResult =staticResult*number;
        break;
    case '/':
        if (number==0){
            printf("Div by zero");
            exit(0);
        }
        else {
            staticResult =staticResult/number;
            break;
        }
    case ' ':
        staticResult =number+staticResult;
    case '=':
        printf("STATIC RESULT=%lf\n", staticResult);
    }
    //printf("STATIC RESULT=%.16lf\n", staticResult);
    return staticResult;
}
int main()
{
    //вхідна строка
    char text[10]="123";

    int size;
    size=strlen(text);
    double number;
    double outputNumber;

    //читаємо перше число 123 до знака +-/*корінь=..
    number=atoi(text);// sscanf(text,"%lf",&number);

    //записуємо зчитане число в staticResult виводимо його длянаглядності
    outputNumber=saveResult(number,' ');
    // очищення 123 з строки при клыку на +-/*... (в сигналах +-*/.. мають стояти 2 метода 1-очищеннястроки(при натисканні на кнопку) другий- відображення знаку (при відтисканні)  )
    memset(text,' ',size);
    printf("\nAfter clean string=%s",text);
    //вводимо для прикладу після числа 123/
    text[0]='/';
    printf("\nAfter new operato string=%s\n",text);

    //тут реалізувати заміну оператора(+ - * /) без збільшення продвигання по строці, або взяття числа що в памяті під корінь/ очищення памяті/

    //...
    // запамятовуэмо знак очищаємо строку
    char ch=text[0];
    printf("After operations +-/* in memory=%c",ch);
    size=strlen(text);
    memset(text,' ',size);
    printf("\nAfter clean string=%s\n",text);
    // переходимо до 2-го операнда
    char string2[15]="-9";

    sscanf(string2, "%s", text);

    printf("\nAfter input -9 string=%s\n",text);
    //читаємо друге число
    number=atoi(text);
    //записуємо зчитане число в staticResult виводимо результат
    outputNumber=saveResult(number,ch);
    printf("RESULT 123/(-9)=%.16lf\n", outputNumber);

    return 0;
}









