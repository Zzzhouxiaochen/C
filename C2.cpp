#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define   size 5  //常量
enum{
	a,  //0
	b,  //1
	c,  //2
};  //里面的也是常量

int d = 20;//全局变量b

int main(){
	const int a = 0;  //a是常量   //  =  赋值
	int b = 0; //b是变量
	//a = 10;  //就出错了
	printf("%d\n", a);

	int c = 10;  //局部变量c
	int d = 30; //局部变量d  //和全局变量冲突，局部变量覆盖全局变量    
	//多个同名局部变量也会出错
	printf("%d\n", d); //结果是30

	//作用域：一个变量的适用范围，变量它不是在任何位置使用
	//生命周期：一个变量一个内存，这个内存不是一直存在，这个内存的由生到死
	//局部变量：
	//作：当前代码块 
	//生：当前代码块

	//全局变量：
	//作：整个工程 
	//生：整个程序相同

	//如何使用局部变量，还是全局变量？
	//能使用局部就不用全局

	//字符串：""  双引号
	//字符：''  单引号

	//转义字符：\n
	//有些特殊的字符不太方便键盘输入，就使用组合字符来表示这个特殊符号
	//若想打印\，"，前面放\，即\\,\"

	printf("%d\n", strlen("abcdef"));  //strlen:求字符串长度   //6
	//一共17个字符 - 2(转义字符\t) - 2(\32) = 13
	// \\32表示ACSCII码 = 32的字符
	printf("%d\n", strlen("c:\test\32\test.c"));   //13

	//选择语句：
	int ret = 0;
	if (ret = 1) {
		printf("hehe!");
	} else if(ret=0) {
		printf("haha!");
	} else {
		printf("hoho!");
	}

	//循环语句
	while (ret<=1){
		printf("qq!");
		ret++;
	}


	system("pause");
	return 0;
}