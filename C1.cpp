#include<stdio.h>
#include<stdlib.h>

int main(){
	//�������ͣ�������������һ���ڴ�ռ䣬������٣���������������
	//%d:��ʽ���ַ���  
	//sizeof��������ĳ������ռ�����ֽ�

	//�з��ţ�-128~127    �޷��ţ�0->255
	printf("%d\n",sizeof(char));  //1�ֽ�   2^8

	//�з��ţ�-32768~32767    �޷��ţ�0->65535   2^16
	printf("%d\n", sizeof(short)); //2�ֽ�

	//�з��ţ�-21��-21��    �޷��ţ�0->42��   2^32
	printf("%d\n", sizeof(int));  //4�ֽ�

	//c������   = �� ����ֵ��
	//'a'���ַ��������������һ���ֽڵĿռ䣬���ַ� a��䵽�ռ���
	//������������ֱ�ʾ�ַ������ֺ��ַ���һ��ӳ���ϵ����ASCII���
	char a = 'a'; //aռһ���ֽ�
	short b = 10;//bռ�����ֽ�
	int c = 20;//cռ���ֽ�
	printf("ASCIIֵ��%d\n", a);
	printf("%c\n", a);

	int d;//����ռ��ˣ������ֵ���ֵ    //�߰汾�������ᱨ��

	long e = 10;
	printf("%d\n", sizeof(d));  //4�ֽ�
	printf("%d\n", sizeof(long long));  //8�ֽ�    21��*21��

	printf("%d\n", sizeof(float));  //4�ֽ�
	printf("%d\n", sizeof(double));  //8�ֽ�


	//������
	//1.����ֵ����
		1
		10
		'a'
		"hehe"
	//2.const���εĳ���
		const int f = 10;
	//3.ö��
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