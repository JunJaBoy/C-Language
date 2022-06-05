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




//#include<stdio.h>
//int main()
//{
//	int num1 = 100, num2 = 100;
//	int* pnum;
//	pnum = &num1; // 포인터 pnum이 num1 을 가리킴
//	printf("num 1 : %d, &num1 : %p, pnum : %p, *pnum : %d\n", num1, &num1, pnum, *pnum);
//	(*pnum) += 30; // num1 += 30; 과 동일, 즉 *pnum은 num1과 같음
//	printf("num 1 : %d, &num1 : %p, pnum : %p, *pnum : %d\n", num1, &num1, pnum, *pnum);
//	pnum = &num2; // 포인터 pnum이 num2 를 가리킴, 즉 *pnum은 num2와 같음
//	printf("num 2 : %d, &num2 : %p, pnum : %p, *pnum : %d\n", num2, &num2, pnum, *pnum);
//	(*pnum) -= 30; // num2 -= 30; 과 동일
//	printf("num 2 : %d, &num2 : %p, pnum : %p, *pnum : %d\n", num2, &num2, pnum, *pnum);
//	return 0;
//}




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




//#include<stdio.h>
//int main()
//{
//	int arr1[3] = { 1,	2,	3 };
//	double arr2[3] = { 1.1,	2.2,	3.3 };
//	printf("arr[0]	:	%d,	arr2[0]	:	%lf\n", arr1[0], arr2[0]);
//	printf("*arr1	:	%d,	*arr2	:	%lf\n", *arr1, *arr2);
//	*arr1 += 100;
//	*arr2 += 100.0;
//	printf("arr[0]	:	%d,	arr2[0]	:	%lf\n", arr1[0], arr2[0]);
//	printf("*arr1	:	%d,	*arr2	:	%lf\n", *arr1, *arr2);
//	return 0;
//}




//#include<stdio.h>
//int main()
//{
//	int arr[3] = { 15,	25,	35 };
//	int* ptr = arr;	//	int	*ptr	=	&arr[0];과	동일한	문장
//	printf(" ptr :%p,  arr :%p, &arr[0]:%p\n", ptr, arr, &arr[0]);
//	printf("ptr+1:%p, arr+1:%p, &arr[1]:%p\n", ptr + 1, arr + 1, &arr[1]);
//	printf("ptr+2:%p, arr+2:%p, &arr[2]:%p\n", ptr + 2, arr + 2, &arr[2]);
//	printf("\n");
//	*ptr = 20;
//	printf("arr[0]	:	%d,	ptr[0]	:	%d,	*(ptr+0)	:	%d\n", arr[0], ptr[0], *(ptr + 0));
//	printf("arr[1]	:	%d,	ptr[1]	:	%d,	*(ptr+1)	:	%d\n", arr[1], ptr[1], *(ptr + 1));
//	printf("arr[2]	:	%d,	ptr[2]	:	%d,	*(ptr+2)	:	%d\n", arr[2], ptr[2], *(ptr + 2));
//	return 0;
//}
