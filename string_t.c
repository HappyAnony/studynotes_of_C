
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//******************************************************************************* 字符查找  *******************************************************************************************************
/*<string.h>
 extern char *strchr (const char *__s, int __c)
 func:Find the first occurrence of C in S.
 */
/*
#include <string.h>
#include <stdio.h>
 int main(int argc, char *argv[])
 {
 	char str[64] = "1/0/3-";
	char *tmp;
	tmp = strchr(str,'-');
	if(tmp == (str + strlen(str))){
		printf("error\n");
	}
	if(tmp == (str + strlen(str)-1)){
		printf("success\n");
	}
	//printf("success\n");
 
 }
*/


 /*<string.h>
  extern void *memchr (const void *__s, int __c, size_t __n)
  功能：从_s所指内存区域的前n个字节查找字符_c。
  说明：当第一次遇到字符_c时停止查找。如果成功，返回指向字符_c的指针；否则返回NULL
  */



//******************************************************************************* 字串复制  *******************************************************************************************************

/*<string.h>
 extern void *memcpy (void *__restrict __dest, const void *__restrict __src,size_t __n)
 Copy N bytes of SRC to DEST
 功能：从源src所指的内存地址的起始位置开始拷贝n个字节到目标dest所指的内存地址的起始位置中；成功返回指向dest的指针,失败返回NULL
 返回指针是无类型指针,所以在使用时需要进行强制类型转换:(char *) memcpy (new, s, len)
 src和dest所指的内存区域可能重叠，但是如果src和dest所指的内存区域重叠,那么这个函数并不能够确保src所在重叠区域在拷贝之前不被覆盖
 如果目标数组dest本身已有数据，执行memcpy（）后，将覆盖原有数据（最多覆盖n）。如果要追加数据，则每次执行memcpy后，要将目标数组地址增加到你要追加数据的地址
 */

/*
 strcpy和memcpy主要有以下3方面的区别。
 1、复制的内容不同。strcpy只能复制字符串，而memcpy可以复制任意内容，例如字符数组、整型、结构体、类等。
 2、复制的方法不同。strcpy不需要指定长度，它遇到被复制字符的串结束符"\0"才结束，所以容易溢出。memcpy则是根据其第3个参数决定复制的长度。
 3、用途不同。通常在复制字符串时用strcpy，而需要复制其他类型数据时则一般用memcpy
 */

/*<string.h>
  extern void *memmove (void *__dest, const void *__src, size_t __n)
  Copy N bytes of SRC to DEST, guaranteeing correct behavior for overlapping strings.
  实现功能以及使用方式和memcpy()函数一样，只不过当source和destin所指的内存区域有重叠时,可以保证重叠区域子串的正确性
 */


/*<string.h>
  extern void *memccpy (void *__restrict __dest, const void *__restrict __src,int __c, size_t __n)
  Copy no more than N bytes of SRC to DEST, stopping when C is found.Return the position in DEST one byte past where C was copied,or NULL if C was not found in the first N bytes of SRC
  由src所指内存区域复制不多于count个字节到dest所指内存区域，如果遇到字符c则停止复制
  如果c没有被复制，则返回NULL，否则，返回字符c后面紧挨一个字符位置的指针
 */


/*<string.h>
 extern char *strdup (const char *__s)
 Duplicate S, returning an identical malloc'd string
 内部调用了malloc()为一个char *类型指针变量分配内存，然后将s字串拷贝到刚分配的内存处，返回指向该内存地址的指针；如果分配空间或复制失败则返回NULL
 不需要使用返回的字符串时，需要用free()释放相应的内存空间，否则会造成内存泄漏
 */

/*
int main(int agrc, char *argv[]){

	char name[64] = "anony";
	char *namep;
	int num = 1;
	namep = strdup(name);
	printf("the string is %s\n",namep);
	sprintf(namep, "%d", num);
	printf("the string is %s\n",namep);

}
*/


/*<string.h>
 extern char *strcpy (char *__restrict __dest, const char *__restrict __src)  ============ Copy SRC to DEST.
 功能：把从src地址开始且含有NULL结束符的字符串复制到以dest开始的地址空间
 说明：src和dest所指内存区域不可以重叠且dest必须有足够的空间来容纳src的字符串。
 返回指向dest的指针
 extern char *strncpy (char *__restrict __dest,const char *__restrict __src, size_t __n) ========= Copy no more than N characters of SRC to DEST
 */

//******************************************************************************* 字串追加  *******************************************************************************************************

/*<string.h>
 extern char *strcat (char *__restrict __dest, const char *__restrict __src) =======  Append SRC onto DEST.
 把src所指字符串添加到dest结尾处(覆盖dest结尾处的'\0')。
 src和dest所指内存区域不可以重叠且dest必须有足够的空间来容纳src的字符串。
 返回指向dest的指针
 extern char *strncat (char *__restrict __dest, const char *__restrict __src,size_t __n) ===== Append no more than N characters from SRC onto DEST
*/


//******************************************************************************* 字串拆分  *******************************************************************************************************
/*<string.h>
 extern char *strtok (char *__restrict __s, const char *__restrict __delim) === Divide S into tokens separated by characters in DELIM
 */


/* 
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int agrc, char *argv[]){
	
//	char input[16] = "abc,d,c,e";
	char *token;
	char *tmp;
	int count = 0;
	tmp = argv[1];
	while (*tmp != '\0'){
	
		if (*tmp == '.'){
			count++;
		}
		tmp++;
	}

	if(count != 3){
		printf("\033[31;1mInvalid Ip Address;\033[0m[A.B.C.D]\n");
		return 0;
	}
	token = strtok(argv[1],".");
	while (token){
	
		printf("%s\n",token);
		token = strtok(NULL,".");
	}
}

 */

//******************************************************************************* 字串拼接  *******************************************************************************************************
/*<自定义>
 实现功能：字符串的拼接
 输入：两个子字串指针；一个新字串指针，用来接收拼接后的字符串	
 */
char *strjoin(const char *substr1, const char *substr2){
	
	if( (substr1 == NULL) || (substr2 == NULL)  ){
		printf("\033[31;1mInvilid Param\033[0m");
		return 0;
	}
	char *joinstr = NULL;
	joinstr = (char *)malloc(strlen(substr1)+strlen(substr2)+1);
	if(joinstr == NULL){
		printf("\033[31;1mMemory Allocation Fail\033[0m");
		return joinstr;
	}
	memset(joinstr,0,strlen(joinstr));
	strcpy(joinstr,substr1);
	printf("the result of strcpy is:%s\n",joinstr);
	strcat(joinstr,substr2);
	printf("the result of strcat is:%s\n",joinstr);
	return joinstr;

} 

int main(int argc, char *argv[]){
	char *new_str = NULL;
	printf("the number of param is :%d\n",argc);
	printf("the number of str1 is :%s\n",argv[1]);
	printf("the number of str1 is :%s\n",argv[2]);
	new_str = strjoin(argv[1],argv[2]);
	if(NULL == new_str){
		printf("\033[31;1mJoin FAIL\n\033[0m");
		return 0;
	}
	printf("the joinstring is:%s\n",new_str);
	free(new_str);
	new_str = NULL;
	return 1;
	
}





