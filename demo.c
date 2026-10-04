#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define pd1 "712"
#define pd2 "2008"
int main(void){
    char input[20];
    printf("请输入身份认证码:");
    scanf("%s",input);
    if (strcmp(input,pd1) ==0)
    {
        printf("身份认证已通过，\n");
        system("pause");
    }
    else if(strcmp(input,pd2) ==0){
        printf("身份认证已通过，开启程序解密");
        int wm = 521;
        int bai,shi,ge;
    printf("请输入密文:");
    scanf("%d",&wm);
    bai = wm/100;
    shi = wm/10%10;
    ge  = wm%10;
    int temp =bai *100 + ge * 10 + shi;
    printf("解密结果：%d",temp);
    system("pause");
    return 0;
    }
    else{
        printf("身份认证未通过");
        system("pause");
    }
}