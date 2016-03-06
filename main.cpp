#include<iostream>
#include "stdafx.h"
#include "stdlib.h"
 
void randout()     //产生随机数并产生随机运算函数
{
    int x1,x2;   //两个运算数
    int i,j;    
    for(i=0;i<30;i++)
    {
        x1=rand()%100;     
            x2=rand()%100+1;   //除数不能为零
            j=rand()%4;             //j的值确定运算
        if(j==0)
            printf("%d+%d\t\t",x1,x2);
        if(j==1)
                printf("%d-%d\t\t",x1,x2);
        if(j==2)
                printf("%d*%d\t\t",x1,x2);
        if(j==3)
            printf("%d/%d\t\t",x1,x2);
    }
    printf("\n出题完毕！\n");
}
 
int _tmain( )
{
    printf("随机生成的30道运算题为：\n");
    randout();      //调用函数
 
    return 0;
}　　
