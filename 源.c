#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//1到50之间所有偶数的和
//1.限定范围()2.偶数()3.++；
//int main() {
//	int sum = 0;
//	for (int i = 0; i <= 50; i+=2) {
//		sum += i;
//	}
//	printf("%d\n", sum);
//}
//1.1 高仿
//1到30内能被四整除的数
//int main() {
//	int sum = 0;
//	for (int i = 1; i <= 30; i++) {
//		if (i % 4 == 0) {
//			sum += i;
//		}
//		
//	}
//	printf("%d\n", sum);
//}
//2.1统计字符串内小写字母的个数
//int main() {
//	char arr[100];
//	int num = 0;
//	fgets(arr, sizeof(arr), stdin);
//
//	//fgets() 是 C 标准库 <stdio.h> 提供的安全读取字符串函数
//	// 用于从文件 / 标准输入读取一整行字符，相比 gets() 没有缓冲区溢出风险
//	//写 stdin → 从键盘读取用户输入
//	for (int i = 0; arr[i] != '\0'; i++) {
//		if (arr[i] >= 'a' && arr[i] <= 'z') {//不同字符对应的ASCLL值以及范围比较
//			num++;
//		}
//	}
//	printf("%d\n", num);
//}
