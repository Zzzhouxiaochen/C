#include<stdio.h>
#include<stdlib.h>

int main(){
	//数据类型：程序运行申请一个内存空间，具体多少，数据类型来描述
	//%d:格式化字符串  
	//sizeof告诉我们某种类型占几个字节

	//有符号：-128~127    无符号：0->255
	printf("%d\n",sizeof(char));  //1字节   2^8

	//有符号：-32768~32767    无符号：0->65535   2^16
	printf("%d\n", sizeof(short)); //2字节

	//有符号：-21亿-21亿    无符号：0->42亿   2^32
	printf("%d\n", sizeof(int));  //4字节

	//c语言中   = 是 “赋值”
	//'a'是字符，下面语句申请一个字节的空间，把字符 a填充到空间中
	//计算机中用数字表示字符，数字和字符有一种映射关系——ASCII码表
	char a = 'a'; //a占一个字节
	short b = 10;//b占两个字节
	int c = 20;//c占四字节
	printf("ASCII值：%d\n", a);
	printf("%c\n", a);

	int d;//申请空间了，里面的值随机值    //高版本编译器会报错

	long e = 10;
	printf("%d\n", sizeof(d));  //4字节
	printf("%d\n", sizeof(long long));  //8字节    21亿*21亿

	printf("%d\n", sizeof(float));  //4字节
	printf("%d\n", sizeof(double));  //8字节


	//常量：
	//1.字面值常量
		1
		10
		'a'
		"hehe"
	//2.const修饰的常量
		const int f = 10;
	//3.枚举
		enum{
			man,
			woman,
			unkonw,
		};
		printf("%d", woman);
	//4.define

	system("pause");
	return 0;
}