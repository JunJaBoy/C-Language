//#include <stdio.h>
//
//int inc(int num) {
//    if (num <= 0) return;
//    inc(num - 1);
//    printf("%d\n", num);
//}
//int main() {
//    int a;
//    scanf("%d", &a);
//    inc(a);
//    return 0;
//}




//#include <stdio.h>
//
//int inc(int num) {
//    if (num <= 1) return 1;
//    return num + inc(num - 1);
//}
//
//int main() {
//    int a;
//    scanf("%d", &a);
//    printf("%d", inc(a));
//    return 0;
//}




//#include <stdio.h>
//
//int f(int n) {
//	if (n <= 1) return 1;
//	return f(n - 1) + n;
//}
//int main() {
//	int num;
//	scanf("%d", &num);
//	printf("%d", f(num));
//	return 0;
//}




//#include <stdio.h>
////피보나치
//int f(int n) {
//	if (n <= 2) return 1;
//	else {
//		return f(n - 2) + f(n - 1);
//	}
//}
//int main() {
//	int a;
//	scanf("%d", &a);
//	printf("%d", f(a));
//}




//#include <stdio.h>
//
//int main() {
//	int i = 10;
//	char c = 69;
//	double f = 12.3;
//	//변수에 들어있는 값을 출력
//	printf("%d %c %f\n", i, c, f);
//	//변수의 nData 메모리 주소를 출력
//	printf("%p %p %p\n", &i, &c, &f);
//	return 0;
//}




//#include <stdio.h>
//
//int main() {
//	int nData = 10;
//	int* pData = &nData;
//
//	printf("nData : %d\n", nData);
//	printf("&nData : %p\n", &nData);
//	printf("pData : %p\n", pData);
//	return 0;
//}




//#include <stdio.h>
//
//int main() {
//	int num1 = 20;
//	int num2 = 30;
//
//	int* pnum1 = &num1;
//	int* pnum2 = &num2;
//
//	printf(" num1 value : %8d, &num1 : %p\n", num1, &num1);
//	printf(" num2 value : %8d, &num2 : %p\n", num2, &num2);
//	printf("pnum1 value : %p, &pnum1 : %p\n", pnum1, &pnum1);
//	printf("pnum2 value : %p, &pnum2 : %p\n", pnum2, &pnum2);
//	return 0;
//}




//#include<stdio.h>
//int main()
//{
//	printf("sizeof(char)		:	%d, sizeof(char*)		:	%d\n", sizeof(char), sizeof(char*));
//	printf("sizeof(short)		:	%d, sizeof(short*)		:	%d\n", sizeof(short), sizeof(short*));
//	printf("sizeof(int)		:	%d, sizeof(int*)			:	%d\n", sizeof(int), sizeof(int*));
//	printf("sizeof(double)		:	%d, sizeof(double*)		:	%d\n", sizeof(double), sizeof(double*));
//	printf("sizeof(long long)	:	%d, sizeof(long long*)		:	%d\n", sizeof(long long), sizeof(long long*));
//	return 0;
//}




#include<stdio.h>
int main()
{
	int num1 = 100, num2 = 100;
	int* pnum;
	pnum = &num1; // 포인터 pnum이 num1 을 가리킴
	printf("num 1 : %d, &num1 : %p, pnum : %p, *pnum : %d\n", num1, &num1, pnum, *pnum);
	(*pnum) += 30; // num1 += 30; 과 동일, 즉 *pnum은 num1과 같음
	printf("num 1 : %d, &num1 : %p, pnum : %p, *pnum : %d\n", num1, &num1, pnum, *pnum);
	pnum = &num2; // 포인터 pnum이 num2 를 가리킴, 즉 *pnum은 num2와 같음
	printf("num 2 : %d, &num2 : %p, pnum : %p, *pnum : %d\n", num2, &num2, pnum, *pnum);
	(*pnum) -= 30; // num2 -= 30; 과 동일
	printf("num 2 : %d, &num2 : %p, pnum : %p, *pnum : %d\n", num2, &num2, pnum, *pnum);
	return 0;
}




//#include <stdio.h>
//int main()
//{
//	int i, arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* ptr = arr;
//	int len = sizeof(arr) / sizeof(int);
//	for (i = 0; i < len; i++) {
//		printf("ptr : %p, *ptr : %d, arr : %p\n", ptr, *ptr, arr);
//		*ptr *= 2;
//		ptr++;
//	}
//	printf("ptr : %p, *ptr : %d, arr : %p\n", ptr, *ptr, arr);
//	for (i = 0; i < len; i++) {
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}