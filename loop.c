//#include <stdio.h>
//
//int main() {
//	int num = 0;
//
//	while (1) {
//		if (num >= 5)
//			break;
//
//		num++;
//		printf("%d\n", num);
//
//	}
//
//	return 0;
//}




//#include <stdio.h>
//
//int main() {
//	int i = 1, num;
//	scanf("%d", &num);
//
//	while (1) {
//		if (i > num)
//			break;
//
//		printf("%d ", i);
//		i++;
//	}
//
//	printf("\n프로그램 종료");
//
//	return 0;
//}




//int main() {
//	int i = 1, num;
//	scanf("%d", &num);
//
//	while (i <= num) {
//		printf("%d ", i);
//		i++;
//	}
//
//	printf("\n프로그램 종료");
//
//	return 0;
//}




//#include <stdio.h>
//
//int main() {
//	int i = 1, num;
//	scanf("%d", &num);
//
//	while (i <= num) {
//		printf("while문 내부 %d번 실행\n", i);
//		i++;
//	}
//	printf("프로그램 종료");
//
//	return 0;
//}




//#include <stdio.h>
//
//int main() {
//	int i, j, temp;
//	scanf("%d %d", &i, &j);
//	if (i > j) {
//		temp = i;
//		i = j;
//		j = temp;
//	}
//
//	while (i <= j) {
//		printf("%d ", i);
//		i++;
//	}
//
//	return 0;
//}




//#include <stdio.h>
//
//int main() {
//	int i, j, temp;
//	scanf("%c %c", &i, &j);
//	if (i > j) {
//		temp = i;
//		i = j;
//		j = temp;
//	}
//
//	while (i <= j) {
//		printf("%c ", i);
//		i++;
//	}
//
//	return 0;
//}




//#include <stdio.h>
//
//int main() {
//	int i, num = 0;
//	scanf("%d", &i);
//
//	while (num < i) {
//		printf("*");
//		num++;
//	}
//
//	return 0;
//}




//#include <stdio.h>
//
//int main() {
//	int i, j, temp;
//	scanf("%d %d", &i, &j);
//	if (i > j) {
//		temp = i;
//		i = j;
//		j = temp;
//	}
//
//	while (i <= j) {
//		if (i % 2 != 0) {
//			printf("%d ", i);
//		}
//		i++;
//	}
//
//	return 0;
//}




//#include <stdio.h>
//
//int main() {
//	int i, j, temp;
//
//	while (1)
//	scanf("%d %d", &i, &j);
//	if (i > j) {
//		temp = i;
//		i = j;
//		j = temp;
//	}
//
//	while (i <= j) {
//		printf("%d ", i);
//		i++;
//	}
//
//	return 0;
//}




//#include <stdio.h>
//
//int main() {
//	int i, a, b;
//
//	while (1) {
//		scanf("%d %d", &a, &b);
//		if (a == 0 && b == 0)
//			break;
//		else
//			printf("%d\n", a + b);
//	}
//
//	return 0;
//}




//#include <stdio.h>
//
//int main() {
//	int i;
//	for (i = 1; i <= 5; i++) {
//		printf("%d : for문 내부 실행문\n", i);
//	}
//	printf("프로그램 종료\n");
//
//	return 0;
//}




//#include <stdio.h>
//
//int main() {
//	int i, num;
//	scanf("%d", &num);
//	for (i = num; i >= 1; i--) {
//		printf("%d ", i);
//	}
//	printf("\n프로그램 종료");
//
//	return 0;
//}




//#include <stdio.h>
//
//int main() {
//	int arr[4], i, j, temp;
//
//    for (i = 0; i <= 2; i++) {
//        scanf("%d", &arr[i]);   
//    }
//	
//    for (int i = 0; i < 3; i++)
//    {
//        for (int j = 0; j < 3 - 1; j++)
//        {
//            if (arr[j] > arr[j + 1])
//            {
//                temp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = temp;
//            }
//        }
//    }
//    printf("%d", arr[1]);
//
//    return 0;
//}




#include <stdio.h>

int main() {
	int A, X;
	int i, j;

	scanf("%d %d", &A, &X);
	for (i = 1; i <= A; i++) {
		scanf("%d", &j);
		if (j < X) {
			printf("%d ", j);
		}
	}

	return 0;
}