#include <stdio.h>

int main()
{

    int qian = 0;
    printf("进入钱包管理系统\n");

    while (1)
    {

        printf("1---存钱\n");
        printf("2---取钱\n");
        printf("3---余额\n");
        printf("4---退出\n");

        printf("请选择相应功能\n");
        int code;
        scanf("%d", &code);

        if (code == 1)
        {
            printf("请输入要存入的金额：\n");
            int cun;
            scanf("%d", &cun);
            qian += cun;

            printf("存入成功，点击回车继续\n");
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }

        if (code == 2)
        {
            //此处有个bug，能取出多余余额的钱
            printf("请输入要取出的金额:\n");
            int qu;
            scanf("%d", &qu);

            if (qu > qian)
            {
                printf("余额不足，取出失败，点击回车继续\n");
                char x;
                scanf("%c", &x);
                scanf("%c", &x);
            }
            else
            {
                qian -= qu;

                printf("取出成功，点击回车继续\n");
                char x;
                scanf("%c", &x);
                scanf("%c", &x);
            }
        }

        if (code == 3)
        {
            printf("当前余额为：\n");
            printf("%d\n", qian);

            printf("取出成功，点击回车继续\n");
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }

        if (code == 4)
        {
            printf("程序退出\n");
            break;
        }
    }

    return 0;
}