//#include <stdio.h>
//
//int main() {
//	int a[4], i, j, temp;
//	for (i = 0; i < 3; i++) {
//		scanf("%d", &a[i]);
//	}
//	for (i = 0; i < 3; i++) {
//		for (j = 0; j < 2; j++) {
//			if (a[j] > a[j + 1]) {
//				temp = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = temp;
//			}
//		}
//	}
//
//	printf("%d", a[1]);
//
//	return 0;
//}

//#include <stdio.h>
////혜강
//int main() {
//	int a, b, c;
//
//	scanf("%d %d %d", &a, &b, &c);
//	if (a <= b && b <= c) printf("%d", b);
//	else if (a <= c && c <= b) printf("%d", c);
//	else if (c <= a && a <= b) printf("%d", a);
//	else if (c <= b && b <= a) printf("%d", b);
//	else if (b <= a && a <= c) printf("%d", a);
//	else if (b <= c && c <= a) printf("%d", c);
//
//	return 0;
//}




//#include <stdio.h>
//
//int main() {
//	int a, b, c;
//
//	scanf("%d %d %d", &a, &b, &c);
//	if (c <= a && a <= b || b <= a && a <= c)
//		printf("%d", a);
//
//	else if (a <= b && b <= c || c <= b && b <= a)
//		printf("%d", b);
//
//	else if (b <= c && c <= a || a <= c && c <= b)
//		printf("%d", c);
//
//	return 0;
//}





//#include <stdio.h>
//
//int main() {
//	int a, b;
//
//	scanf("%d %d", &a, &b);
//	if (a >= 4 && b >= 4)
//		printf("win");
//	else if (a >= 4 || b >= 4)
//		printf("draw");
//	else
//		printf("lose");
//
//	return 0;
//}




//#include <stdio.h>
//
//int main() {
//	int a;
//	printf("입력 : ");
//	scanf("%d", &a);
//	printf("\n\"%d\"", a);
//	{
//		if (a > 0)
//			printf("\n\n양수\n");
//		else if (a < 0)
//			printf("\n\n음수\n");
//		else
//			;
//	}
//	{
//		if (a == 0);
//		else if (a % 2 == 0)
//			printf("짝수");
//		
//		else
//			printf("홀수");
//	}
//}




//#include <stdio.h>
//
//int main() {
//	int a, b, c;
//
//	scanf("%d %d %d", &a, &b, &c);
//
//	if (a <= b && b <= c || a <= c && c <= b)
//		printf("%d", a);
//	else if (b <= a && a <= c || b <= c && c <= a)
//		printf("%d", b);
//	else if (c <= a && a <= b || c <= b && b <= a)
//		printf("%d", c);
//
//
//	return 0;
//}




//#include <stdio.h>
//
//int main() {
//	int a, b, c;
//
//	scanf("%d %d %d", &a, &b, &c);
//
//	if (a >= b && b >= c || a >= c && c >= b) {
//		if (a < b + c)
//			printf("yes");
//		else
//			printf("no");
//	}
//	else if (b >= a && a >= c || b >= c && c >= a) {
//		if (b < a + c)
//			printf("yes");
//		else
//			printf("no");
//	}
//	else if (c >= a && a >= b || c >= b && b >= a) {
//		if (c < b + a)
//			printf("yes");
//		else
//			printf("no");
//	}
//	return 0;
//}



//#include <stdio.h>
//
//int main () {
//	int a, b, c, d;
//
//	scanf("%d %d %d %d", &a, &b, &c, &d);
//	if ((double)a / b > (double)c / d)
//		printf(">");
//	else if ((double)a / b < (double)c / d)
//		printf("<");
//	else
//		printf("=");
//
//	return 0;
//}




//#include <stdio.h> 
//
//int main() {
//	int a, b, c, max = 0;
//	scanf("%d %d %d", &a, &b, &c);
//
//	if (a == b && b == c) {
//		printf("!\"●●●\"!\n\n%d\n[%d + (%d * %d)]", 10000 + a * 1000, 10000, a, 1000);
//	}
//	if (a == b || b == c || c == a) {
//		if (a == b) {
//			if (a > c)
//				max = a;
//			else
//				max = c;
//		}
//		else if (b == c) {
//			if (b > a)
//				max = b;
//			else
//				max = a;
//		}
//		else if (c == a) {
//			if (c > b)
//				max = c;
//			else
//				max = b;
//		}
//
//		printf("\"●●○\"\n\n%d\n[%d + (%d * %d)]", 1000 + max * 1000, 1000, max, 100);
//	}
//	else {
//		if (a > b) {
//			if (a > c) {
//				max = a;
//			}
//			else {
//				max = c;
//			}
//		}
//		else { //b가 큰 케이스
//			if (b > c) {
//				max = b;
//			}
//			else {
//				max = c;
//			}
//		}
//
//		printf("\"●○○\"\n\n%d\n[%d * %d]", max * 100, max, 100);
//	}
//
//	return 0;
//}




#include <stdio.h>

int main() {
	int a;

	scanf("%d", &a);
	if (a >= 90)
	{
		printf("A");
	}

	else if (a >= 70)
	{
		printf("B");
	}

	else if (a >= 40)
	{
		printf("C");
	}

	else
	{
		printf("D");
	}

	return 0;
}