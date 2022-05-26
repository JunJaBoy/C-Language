//#include <stdio.h>
//
//int main() {
//	char arr[11];
//	int i;
//	for (i = 0; i < 9; i++) {
//		scanf("%c ", &arr[i]);
//	}
//	for (i = 0; i < 9; i++) {
//		printf("%c", arr[i]);
//	}
//}




//#include <stdio.h>
//
//int main() {
//	char a;
//	int arr[10], i;
//
//	for (i = 0; i < 10; i++) {
//		scanf(" %c", &arr[i]);
//	}
//	for (i = 0; i < 10; i++) {
//		printf("%c", arr[i]);
//	}
//	return 0;
//}




//#include<stdio.h>
//int main()
//{
//	char str[50] = "I	Like	C	Programming!!";
//	printf("string	:	%s\n", str);
//	str[8] = '\0'; //	인덱스	8번	널	문자로	저장
//	printf("string	:	%s\n", str);
//	str[6] = '\0'; //	인덱스	6번	널	문자로	저장
//	printf("string	:	%s\n", str);
//	str[1] = 0; //	인덱스	1번	문자를	널	문자로	저장(아스키	코드로	널문자	저장)
//	printf("string	:	%s\n", str);
//	return 0;
//}




//#include <stdio.h>
//
//int main() {
//	int arr[10], temp, i, j;
//	
//	for (i = 0; i < 10; i++) {
//		scanf("%d", &arr[i]);
//	}
//
//	for (i = 0; i < 10; i++) {//개수만큼 반복
//		for (j = 0; j < 9; j++) {//개수i-1만큼 반복(안하면 마지막 숫자가 인덱스 밖과 비교-출처 나무위키)
//			if (arr[j] < arr[j + 1]) {
//				temp = arr[j]; //temp값 없이 값을 넣어주면 기존값이 덮이니까
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//	
//	//printf("%d", arr[0]);//오름차순 정렬이니까 첫번째 수가 가장 큰 수
//	for (i = 0; i < 10; i++) {
//		printf("%d\n", arr[i]);	
//	}
//
//	return 0;
//}




//#include <stdio.h> 
//
//int main() {
//	int arr[10], i, max = 0, min = 10000;
//
//	for (i = 0; i < 10; i++) {
//		scanf("%d", &arr[i]);
//		if (arr[i] < 100) {
//			if (arr[i] > max)
//				max = arr[i];
//		}
//		else if (arr[i] >= 100) {
//			if (arr[i] < min)
//				min = arr[i];
//		}
//	}
//	if (max == 0) {
//		max = 100;
//	}
//	if (min == 10000) {
//		min = 100;
//	}
//	printf("%d %d", max, min);
//}




//#include <stdio.h>
//
//int main() {
//	int a[5] = { 95, 75, 85, 100, 50 };
//	int i, j, temp, min;
//	for (i = 0; i <= 3; i++) {
//		min = i;
//		for (j = i + 1; j <= 4; j++) {
//			if (a[j] < a[min])
//				min = j;
//		}
//		if (min != i) {
//			temp = a[min];
//			a[min] = a[i];
//			a[i] = temp;
//		}
//	}
//	for (i = 0; i < 5; i++) {
//		printf("%d ", a[i]);
//	}
//}




//#include <stdio.h>
//
//int main() {
//	int arr[10], temp, i, j;
//	
//	for (i = 0; i < 10; i++) {
//		scanf("%d", &arr[i]);
//	}
//
//	for (i = 0; i < 10; i++) {
//		for (j = 0; j < 9; j++) {
//			if (arr[j] < arr[j + 1]) {
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//
//	for (i = 0; i < 10; i++) {
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}




//#include <stdio.h>
//
//int main() {
//	int i;
//	char arr[1000];
//
//	scanf("%s", &arr);
//
//	for (i = 0; ; i++) {
//		if (arr[i] < 91 && arr[i] > 64) {
//			arr[i] += 32;
//		}
//		else if (arr[i] > 96 && arr[i] < 123) {
//			arr[i] -= 32;
//		}
//		else if (arr[i] == 0)
//			break;
//	}
//	
//	printf("%s", arr);
//
//}




//#include <stdio.h>
//
//int count[26] = { 0, };
//char st;
//
//while (1) {
//    scanf(" %c", &st);
//    if (st > 64 && st < 91) {
//        count[st - 65]++;
//    }
//    else {
//        break;
//    }
//}
//
//for (int i = 0; i <= 25; i++) {
//    if (count[i] != 0) {
//        printf("%c : %d\n", i + 65, count[i]);
//    }
//}




//#include <stdio.h>
//
//int main() {
//	int arr[10] = { 0 };
//	int i, a;
//
//	for (i = 0; ; i++) {
//		scanf("%d", &a);
//		if (a != 0)
//			arr[a / 10]++;
//		else
//			break;
//	}
//	for (i = 0; i < 10; i++) {
//		if (arr[i] != 0) {
//			printf("%d : %d\n", i, arr[i]);
//		}
//	}
//	return 0;
//}




//#include <stdio.h>
//
//int main() {
//	int arr[100] = { 100, 0, }, i;
//	scanf("%d", &arr[1]);
//	printf("%d %d "s, arr[0], arr[1]);
//
//	for (i = 2; ; i++) {
//		arr[i] = arr[i - 2] - arr[i - 1];
//		printf("%d ", arr[i]);
//		if (arr[i] < 0)
//			break;
//	}
//
//	return 0;
//}