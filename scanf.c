//#include <stdio.h>
//int main() {
//	int num1 = 3;
//	int num2 = 4;
//
//	printf("num1: %d, num2: %d\n", num1, num2, num1 + num2);
//	printf("덧셈 결과: %d\n", num1 + num2);
//	printf("%d + %d = %d\n", num1, num2, num1 + num2);
//	printf("%d와(과) %d의 합은 %d입니다.", num1, num2, num1 + num2);
//
//	return 0;
//}




//#include <stdio.h>
//int main() {
//	int num;
//	scanf("%d", &num);
//	printf("%d", num);
//
//	return 0;
//}




//#include <stdio.h>
//int main() {
//	int num1, num2;
//	
//	printf("정수 두 개를 입력하세요(0 제외) : ");
//	scanf("%d%d", &num1, &num2);
//	printf("%d * %d = %d\n", num1, num2, num1 * num2);
//	printf("%d / %d = %d", num1, num2, num1 / num2);
//
//	return 0;
//}





//#include <stdio.h>
//int main() {
//	int num1, num2, num3;
//
//	printf("세 개의 정수를 입력하세요.(0 제외) : ");
//	scanf("%d%d%d", &num1, &num2, &num3);
//	printf("%d * %d + %d = %d", num1, num2, num3, num1 * num2 + num3);
//
//	return 0;
//}




//#include <stdio.h>
//int main() {
//	int num1;
//	
//	printf("정수 한 개를 입력하세요.(0 제외) : ");
//	scanf("%d", &num1);
//
//	printf("%d의 제곱은 %d", num1, num1 * num1);
//
//	return 0;
//}




//#include <stdio.h>
//int main() {
//	int num1, num2;
//	
//	printf("두 개의 정수를 입력하세요(0 제외) : ");
//	scanf("%d%d", &num1, &num2);
//	printf("%d / %d 몫 : %d\n", num1, num2, num1 / num2);
//	printf("%d %% %d 나머지 : %d", num1, num2, num1 % num2);
//
//	return 0;
//}




//#include <stdio.h>
//int main() {
//	int num1, num2, num3;
//
//	printf("세 개의 정수를 입력하세요.(0 제외) : ");
//	scanf("%d%d%d", &num1, &num2, &num3);
//	printf("연산결과 : %d", (num1 - num2) * (num2 + num3) * (num3 % num1));
//
//	return 0;
//}




//#include <stdio.h>
//int main() {
//	int num1 = 2, num2 = 4, num3 = 3;
//	num1 += 3;
//	num2 *= num1;
//	num2 %= num3;
//	printf("Result : %d, %d\n", num1, num2);
//
//	return 0;
//}




//#include <stdio.h>
//int main() {
//	int num1 = 10;
//	int num2 = 12;
//	int result1, result2, result3, result4;
//
//	result1 = (num1 == 10 && num1 <= 9);
//	result2 = (12 >= num2 || num1 != num2);
//	result3 = !(num1 > num2);
//	result4 = !num2;
//
//	printf("result1:%d\nresult2:%d\nresult3:%d\nresult4:%d\n", result1, result2, result3, result4);
//
//	return 0;
//}




//#include <stdio.h>
//
//int main() {
//	int a, b;
//	scanf("%d %d", &a, &b);
//
//
//	printf("%d", a>b ? a:b);
//
//	return 0;
//}




//#include <stdio.h>
//
//int main() {
//	int num1, num2, num3;
//	scanf("%d %d %d", &num1, &num2, &num3);
//	printf("%.2f", (num1 + num2 + num3) / 3.0);
//
//	return 0;
//}




//#include <stdio.h>
//
//int main() {
//	double a;
//
//	scanf("%lf", &a); //56.77
//	a *= 10; //567.7
//	a += 0.5; //568.2
//	a = (int)a; //568.000000 int 형변환 할때 소수점은 다 짤림 
//	a /= 10; //56.8
//	printf("%.6lf", a); //56.800000
//
//	return 0;
//}




//#include <stdio.h>
//
//int main() {
//	char ch1 = 'A', ch2 = 65;
//	int ch3 = 'Z', ch4 = 90;
//
//	printf("%c %d\n", ch1, ch1);
//	printf("%c %d\n", ch2, ch2);
//	printf("%c %d\n", ch3, ch3);
//	printf("%c %d\n", ch4, ch4);
//
//	return 0;
//}




//#include <stdio.h>
//
//int main() {
//	int a, b, c, d;
//	printf("x1, y1 좌표 (예시 : 1 2) : ");
//	scanf("%d %d", &a, &b);
//	printf("x2, y2 좌표 (예시 : 4 5) : ");
//	scanf("%d %d", &c, &d);
//	printf("두 점이 이루는 직사각형의 넓이는 %d 입니다.", (b - a) * (d - c));
//
//	return 0;
//}




//#include <stdio.h>
//
//int main() {
//	char a;
//	printf("알파벳 입력 (예시 : p) : ");
//	scanf("%c", &a);
//	printf("%c 에 해당하는 아스키 코드 값은 %d 입니다.", a, a);
//
//	return 0;
//}




//#include <stdio.h>
//
//int main() {
//	int num;
//	printf("정수 입력 : ");
//	scanf("%d", &num);
//
//	if (num < 0) {
//		printf("입력 값(%d)은 0보다 작다.\n", num);
//	}
//	if (num > 0) {
//		printf("입력 값(%d)은 0보다 크다.\n", num);
//	}
//	if (num == 0) {
//		printf("입력 값은 0이다.\n");
//	}
//
//	return 0;
//}




//#include <stdio.h>
//
//int main() {
//	int opt;
//	double num1, num2;
//	double result;
//	printf("1.덧셈\t2.뺄셈\t3.곱셈\t4.나눗셈\n");	//	연산	메뉴	show
//	printf("선택	:\t");	//	메뉴	입력	안내
//	scanf("%d", &opt);	//	1,2,3,4	중	메뉴	입력
//	printf("두 개의 실수 입력 :\t");	//	실수	입력	안내	
//	scanf("%lf%lf", &num1, &num2);	//	실수	2개	입력
//	if (opt == 1)
//		result = num1 + num2;
//	if (opt == 2)
//		result = num1 - num2;
//	if (opt == 3)
//		result = num1 * num2;
//	if (opt == 4)
//		result = num1 / num2;
//	printf("결과	: %f\n", result);
//
//	return 0;
//}




//#include <stdio.h>
//
//int main() {
//	int a, b;
//
//	scanf("%d %d", &a, &b);
//
//	if (a > b) {
//		printf("입력받은 수 중 큰 수는 %d이고 작은 수는 %d입니다.", a, b);
//	}
//	if (a < b) {
//		printf("입력받은 수 중 큰 수는 %d이고 작은 수는 %d입니다.", b, a);
//	}
//	if (a == b) {
//		printf("입력받은 수 %d, %d는 동일합니다.", a, b);
//	}
//
//	return 0;
//}




//#include <stdio.h>
//
//int main() {
//	int a;
//
//	scanf("%d", &a);
//
//	if (a > 10) {
//		printf("%d는 10보다 큽니다.", a;
//	}
//	if (a <= b) {
//		printf("%d는 10보다 작거나 같습니다.", a);
//
//	return 0;
//}




//#include <stdio.h>
//
//int main() {
//	int a;
//
//	scanf("%d", &a);
//
//	if (a >= 20) {
//		printf("ADULT");
//	}
//	if (a < 20) {
//		printf("%d years later -> ADULT", 20 - a);
//	}
//	return 0;
//}




//#include <stdio.h>
//
//int main() {
//	int a;
//
//	scanf("%d", &a);
//
//	if (a >= 20) {
//		printf("ADULT");
//	}
//	if (a < 20) {
//		printf("%d years later -> ADULT", 20 - a);
//	}
//	return 0;
//}