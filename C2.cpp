#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define   size 5  //����
enum{
	a,  //0
	b,  //1
	c,  //2
};  //�����Ҳ�ǳ���

int d = 20;//ȫ�ֱ���b

int main(){
	const int a = 0;  //a�ǳ���   //  =  ��ֵ
	int b = 0; //b�Ǳ���
	//a = 10;  //�ͳ�����
	printf("%d\n", a);

	int c = 10;  //�ֲ�����c
	int d = 30; //�ֲ�����d  //��ȫ�ֱ�����ͻ���ֲ���������ȫ�ֱ���    
	//���ͬ���ֲ�����Ҳ�����
	printf("%d\n", d); //�����30

	//������һ�����������÷�Χ���������������κ�λ��ʹ��
	//�������ڣ�һ������һ���ڴ棬����ڴ治��һֱ���ڣ�����ڴ����������
	//�ֲ�������
	//������ǰ����� 
	//������ǰ�����

	//ȫ�ֱ�����
	//������������ 
	//��������������ͬ

	//���ʹ�þֲ�����������ȫ�ֱ�����
	//��ʹ�þֲ��Ͳ���ȫ��

	//�ַ�����""  ˫����
	//�ַ���''  ������

	//ת���ַ���\n
	//��Щ������ַ���̫����������룬��ʹ������ַ�����ʾ����������
	//�����ӡ\��"��ǰ���\����\\,\"

	printf("%d\n", strlen("abcdef"));  //strlen:���ַ�������   //6
	//һ��17���ַ� - 2(ת���ַ�\t) - 2(\32) = 13
	// \\32��ʾACSCII�� = 32���ַ�
	printf("%d\n", strlen("c:\test\32\test.c"));   //13

	//ѡ����䣺
	int ret = 0;
	if (ret = 1) {
		printf("hehe!");
	} else if(ret=0) {
		printf("haha!");
	} else {
		printf("hoho!");
	}

	//ѭ�����
	while (ret<=1){
		printf("qq!");
		ret++;
	}


	system("pause");
	return 0;
}