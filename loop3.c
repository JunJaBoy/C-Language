////#include <stdio.h>
////
////int main() {
////	int a, i, j, al = 65;
////
////	scanf("%d", &a);
////	for (i = 0; i < a; i++) {
////		for (j = 0; j < a - i; j++) {
////			printf("%c", al++);
////		}
////		printf("\n");
////	}
////
////	return 0;
////}
//
//
//
//
//#include <stdio.h>
//
//int main() {
//	int a, al = 65, num = 1, i, j;
//
//	scanf("%d", &a);
//	for (i = 1; i <= a; i++) {
//		for (j = a-i; j >= 0; j--) {
//			printf("%2d ", num++);
//		}
//		for (j = 0; j < i; j++) {
//			printf("%2c ", al++);
//		}
//		
//		printf("\n");
//	}
//
//	return 0;
//}




//#include <stdio.h>
//
//int main() {
//	int i, a;
//
//	scanf("%d", &a);
//	for (i = 1; ; i++) {
//		printf("%d ", a * i);
//		if ((a * i) % 10 == 0) {
//			break;
//		}
//	}
//	return 0;
//}




//#include <stdio.h>
//
//int main() {
//	int i, j, a;
//
//	scanf("%d", &a);
//
//	for (i = 1; i <= a; i++) {
//		for (j = a - i; j >= 1; j--) {
//			printf("  ");
//		}
//		for (j = 1; j <= i; j++) {
//			printf("%d ", j);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}




//#include <stdio.h>
//
//int main() {
//	int i, j, a, cnt = 1;
//
//	scanf("%d", &a);
//
//	for (i = 1; i <= a; i++) {
//		for (j = 0; j <= a-i; j++) {
//			printf("%d ", cnt++);
//		}
//		for (j = 1; j <= a-i; j++) {
//			printf("  ");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}




