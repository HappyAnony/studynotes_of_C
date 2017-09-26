#include <stdio.h>
#include <stdlib.h>


int main ()
{
	int *p;
	char *p1;
	char *p2;
	int a=123;
	char ch = 65;
	char str[64] = "anony";
	/*指针变量存放的是地址
	  等号两边数据类型必须相等
	*/
	p = &a;   //&获取整型的地址
	p1 = str; //字符数组名本身就是字符数组的首地址
	p2 = &ch; //字符是当做整型来处理的，也需要用&来获取整型的地址

//	nup = &nu;
	printf("the integer is:%d\n", *p); //打印整型时直接访问值就行,整型就一个数
	printf("the char is:%c\n", *p2);   //打印字符时直接访问值,字符就一个数
	printf("the string is:%s\n", p1);  //打印字符串时，需要使用指针轮询字符，然后打印，所以传入的是指针


}
