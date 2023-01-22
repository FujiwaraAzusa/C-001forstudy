#include <stdio.h>
#include <math.h>
#include "masu.h"
#include <unistd.h>

//gcc main.c masu.c -fexec-charset=CP932
int main(void){
	for(int i=0;i==0;){
		printf("藤岡バンザイ\nモード選択\n");
		printf("'1'平均値、分散、標準偏差を求める。\n'2'機能なし\n'3'終了\n");
		int a;
		scanf("%d",&a);
		switch (a){
			case 1:masu();sleep(3);break;
			case 2:break;
			case 3:goto LABEL1;
			default:printf("正しく数値を入力してください\n");
		}
		sleep(1);
		printf("\n\n\n");
	}
	LABEL1:
}