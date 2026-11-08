#include <stdio.h>

int main(void)
{
    int input;
    scanf("%d", &input);

    // 0以上10未満、または12以上15未満の場合にOKとする。
    int isAccepted = (input >= 0 && input < 10)
                  || (input >= 12 && input < 15);

    // 判定結果に応じて、元のプログラムと同じ文字列を出力する。
    if (isAccepted)
    {
        printf("OK");
    }
    else
    {
        printf("NG");
    }

    return 0;
}