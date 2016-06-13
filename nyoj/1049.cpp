/*自增自减
时间限制：1000 ms  |  内存限制：65535 KB
难度：0
描述
python编程语言的自增语法是+ + 。
python语言是独特的，因为它有且只有一个变量，名为x 。此外，有两个操作：

    操作+ +使变量x的值增加1。
    操作- -使变量x的值减少1。

在语言位的陈述+ +是一个序列，恰好由一个操作和一个变量x组成 。
该语句在编写时没有空格，也就是说，它只能包含字符“ + ” ， “ - ” ， “X” 。

A + +程序是语句序列，他们每个人都需要被执行。
你给的语言位程序+ +， x的初始值是0 。执行程序并找到它的最终值（该变量的值，当执行该程序）。
输入
输入包含T组数据！
每组数据中:
第一行包含一个整数N （ 1 ≤N≤ 150 ） ， 在程序中语句的数目。
接下来的n行每行有一个语句。每条语句只包含一个运算（ +或 - ）和一个同变量x （记为字母“ X ”）。

输入语句只有下面四种格式(不会有空格)
X++
++X
X--
--X
输出
输出X的最终值,换行。
样例输入
1
1
++X
样例输出
1
上传者
TC_杨闯亮*/

#include<iostream>
#include<stdio.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    while(n--)
    {
        int m,x,i;
        char a[4];
        cin>>m;
        x=0;
        for(i=0; i<m; i++)
        {
            getchar();
            scanf("%s",a);
            if(a[0]=='X'&&a[2]=='+')x++;
             if(a[0]=='+'&&a[2]=='X')++x;
             if(a[0]=='X'&&a[2]=='-')x--;
             if(a[0]=='-'&&a[2]=='X')--x;
        }
        cout<<x<<endl;
    }
    return 0;
}