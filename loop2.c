//#include <stdio.h>
//
//int main() {
//	int i, a, b = 0;
//	scanf("%d", &a);
//	for (i = 1; i <= a; i++) {
//		if (a % i == 0) {
//			printf("%d ", i);
//			b++;
//		}
//	}
//		printf("\n");
//
//	if (b > 2)
//		printf("소수가 아닙니다");
//	else
//		printf("소수입니다");
//
//	return 0;
//}




//#include <stdio.h>
//
//int main() {
//	int a, i, j;
//	scanf("%d", &a);
//
//	for (i = 1; i <= a; i++) {
//		scanf("%d", &j);
//		if (i == 1 || i == a / 2 + 1 || i == a)
//			printf("%d ", j);
//	}
//
//	return 0;
//}




//#include<stdio.h>
//int main() {
//	int i;
//
//	for (i = 1; i <= 18; i++) {
//		if (i >= 10) {
//			if (i == 12) {
//				printf("%d번 학생 결석\n", i);
//				continue;
//			}
//			printf("%d번 학생 발표\n", i);
//		}
//	}
//
//	return 0;
//}




//#include <stdio.h>
//
//int main() {
//	int i, j, l;
//	scanf("%d", &l);
//
//	for (i = 1; i <= l; i++) {
//		for (j = 1; j <= l; j++) {
//			if (j == i) {
//				printf("%% ");
//			}
//			else {
//				printf("* ");
//			}
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
//	int i, j, l;
//
//	scanf("%d", &l);
//
//	for (i = 1; i <= l; i++) {
//		for (j = 1; j <= i; j++) {
//			printf("* ");
//		}
//
//		printf("\n");
//	}
//
//	return 0;
//}



//
//#include <stdio.h>
//
//int main() {
//	int i, j, l;
//
//	scanf("%d", &l);
//
//	for (i = l; i >= 1; i--) {
//		for (j = 1; j <= i; j++) {
//			printf("* ");
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
//	int i, j, l;
//
//	scanf("%d", &l);
//
//	for (i = l; i >= 1; i--) {
//		for (j = l - i-1; j >= 0; j--) {
//			printf("  ");
//		}
//		for (j = 1; j <= i; j++) {
//			printf("* ");
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
//	int n, i, j;
//
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++) {
//		for (j = 1; j <= i; j++) {
//			printf("* ");
//		}
//		printf("\n");
//	}
//	for (i = n-1; i >= 1; i--) {
//		for (j = 1; j <= i; j++) {
//			printf("* ");
//		}
//		printf("\n");
//	}
//}

	


//#include <stdio.h>
//
//int main() {
//	int n, m = 1, i, j;
//
//	scanf("%d", &n);
//
//	for (i = 1; i <= (n + 1) / 2; i++) {
//		for (j = 1; j <= ((n + 1) / 2) - i; j++) {
//			printf(" ");
//		}
//		for (j = 0; j < m; j++) {
//			printf("*");
//		}
//
//		m += 2;
//		printf("\n");
//	}
//	return 0;
//}




//#include <stdio.h>
//
//int main() {
//	int n, i, j, sco;
//
//	scanf("%d", &n);
//	
//	sco = 1 + ((n - 1) * 2);
//
//	for (i = n; i >= 1; i--) {
//		for (j = i; j < n; j++) {
//			printf(" ");
//		}
//		for (j = 0; j < sco; j++) {
//			printf("*");
//		}
//		sco -= 2;
//		printf("\n");
//	}
//	return 0;
//}




//#include <stdio.h>
//
//int main() {
//	int n, i, j;
//
//	scanf("%d", &n);
//
//	for (i = 1; i <= n; i++) {
//
//		for (j = 1; j <= 2 * n - i; j++) {
//			if (j > i - 1)
//				printf("* ");
//			else
//				printf("  ");
//		}
//		printf("\n");
//	}
//	return 0;
//}