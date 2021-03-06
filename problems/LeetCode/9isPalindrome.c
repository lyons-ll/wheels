/*
 *9. 回文数
 *
 *描述 判断一个整数是否是回文数。回文数是指正序（从左向右）和倒序（从右向左）读都是一样的整数。
 *
 *示例	输入: 121
 *		输出: true
 *
 *		输入: -121
 *		输出: false
 *		解释: 从左向右读, 为 -121 。 从右向左读, 为 121- 。因此它不是一个回文数。
 *		
 *		输入: 10
 *		输出: false
 *		解释: 从右向左读, 为 01 。因此它不是一个回文数。
 *		进阶: 不将整数转为字符串来解决这个问题
 */
#include <stdio.h> 
#include <stdlib.h>
#include <stdbool.h>

//basic
bool isPalindrome(int x) {
	char tmp[12] = {0};
	int len = sprintf(tmp, "%d", x);
	if(len <= 1)
		return true;
	
	int i = 0;
	for(i=0; i<len/2; i++)
		if(tmp[i] != tmp[len-1-i])
			return false;

	return true;
}

//advanced
bool isPalindrome2(int x) {
	int a = x;
	int b = 0;
	
	if(x<0)
		return false;
	if(x>=0 && x<=9)
		return true;

	while(a) {
		b = b*10+(a%10);
		a/=10;
	}

	if(x == b)
		return true;
	else
		return false;
}

int main()
{
	printf("%d\n", isPalindrome2(121));
	printf("%d\n", isPalindrome2(-121));
	printf("%d\n", isPalindrome2(10));
}
