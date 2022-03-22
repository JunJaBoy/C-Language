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
////Çý°­
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




#include <stdio.h>

int main() {
	int a, b, c;

	scanf("%d %d %d", &a, &b, &c);
	if (c <= a && a <= b || b <= a && a <= c)
		printf("%d", a);
	
	else if (a <= b && b <= c || c <= b && b <= a)
		printf("%d", b);

	else if (b <= c && c <= a || a <= c && c <= b)
		printf("%d", c);

	return 0;
}





//#include <stdio.h>
//
//int main() {
//	int a, b;
//
//	scanf("%d %d", &a, &b);
//	if (a >= 4 && b >= 4)
//		printf("WIN");
//	else if (a >= 4 || b >= 4)
//		printf("DRAW");
//	else
//		printf("LOSE");
//
//	return 0;
//}