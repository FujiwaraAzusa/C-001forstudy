#include <math.h>
#include <stdio.h>

int masu(void){
    int kazu;
    int i,sum;
    double average,hensa,bunsan;
    sum = 0;
    int alldata[kazu];

    printf("要素数を入力してください。\n");
    scanf("%d",&kazu);
    /*printf("%d",kazu);*/
    printf("\n次に全ての要素を一つづつ入力してください。\n");
    for(i=0;i<kazu;i++){
        scanf("%d",&alldata[i]);
        printf("%d/%d\n",i+1,kazu,alldata[i]);
        sum = sum + alldata[i];
    }
    
    //平均求める
    average = sum / kazu;
    //分散求めるためのすべての積
    int p=0;
    for(i=0;i<kazu;i++){
        p = p + alldata[i] * alldata[i];
    }

    bunsan = (double)p/(double)kazu-(double)average*(double)average;

    hensa = pow((double)bunsan, (double)1 / (double)2);
    printf("\n合計値は%d\n平均値は%lf\n分散は%lf\n標準偏差は%lfです。",sum,average,bunsan,hensa);
    return 0;
}