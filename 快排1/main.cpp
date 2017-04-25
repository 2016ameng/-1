//
//  main.cpp
//  快排1
//
//  Created by 董依萌 on 2017/4/5.
//  Copyright © 2017年 董依萌. All rights reserved.
//

#include <iostream>
using namespace std;
void kuaipai(int s[],int m,int n);
int main() {
    int st[10]={12,23,41,11,33,56,76,4,5,8};
    int len=sizeof(st)/sizeof(int);
    kuaipai(st,0,len-1);
    system("pause");
    return 0;
}
void kuaipai(int s[],int n,int m){
    if(n<m){                 //满足条件进入快排
        int i=n,j=m,x=s[n];
        while(i<j){
            while(i<j&&s[j]>=x)  //从后向前和数组第一个数比较
                j--;
            if(i<j)
                s[i++]=s[j];
            while(i<j&&s[i]<x)    //从前向后和数组第一个数比较
                i++;
            if(i<j)
                s[j--]=s[i];
        }
        s[i]=x;
        for(int k=0;k<10;k++)     //每次排序完输出
            cout<<s[k]<<"  ";
        cout<<endl;
        kuaipai(s,n,i-1);       // 数组元素比第一个元素小的分为一部分进行递归排序
        kuaipai(s,i+1,m);       //数组元素比第一个元素大的分为一部分进行递归排序
    }
}
