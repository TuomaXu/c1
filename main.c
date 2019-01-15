#include <stdio.h>

int main(){

    int qian = 0;

    printf("进入钱包管理系统\n");

    
    while(1){

        printf("1---存钱\n");
        printf("2---取钱\n");
        printf("3---余额\n");
        printf("4---退出\n");

        printf("请选择相应功能\n");
        int code;
        scanf("%d",&code);

        if(code == 1){
            printf("请输入要存入的金额：\n");
            int cun;
            scanf("%d",&cun);
            qian += cun;

            printf("存入成功，点击回车继续\n");
            char x;
            scanf("%c",&x);
            scanf("%c",&x);

        }

        if(code == 2){
            
        }

        if(code == 3){
            
        }

        if(code == 4){
            
        }


    }
    


    return 0;
}