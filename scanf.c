//#include <stdio.h>
//int main() {
//	int num1 = 3;
//	int num2 = 4;
//
//	printf("num1: %d, num2: %d\n", num1, num2, num1 + num2);
//	printf("���� ���: %d\n", num1 + num2);
//	printf("%d + %d = %d\n", num1, num2, num1 + num2);
//	printf("%d��(��) %d�� ���� %d�Դϴ�.", num1, num2, num1 + num2);
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
//	printf("���� �� ���� �Է��ϼ���(0 ����) : ");
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
//	printf("�� ���� ������ �Է��ϼ���.(0 ����) : ");
//	scanf("%d%d%d", &num1, &num2, &num3);
//	printf("%d * %d + %d = %d", num1, num2, num3, num1 * num2 + num3);
//
//	return 0;
//}




//#include <stdio.h>
//int main() {
//	int num1;
//	
//	printf("���� �� ���� �Է��ϼ���.(0 ����) : ");
//	scanf("%d", &num1);
//
//	printf("%d�� ������ %d", num1, num1 * num1);
//
//	return 0;
//}




//#include <stdio.h>
//int main() {
//	int num1, num2;
//	
//	printf("�� ���� ������ �Է��ϼ���(0 ����) : ");
//	scanf("%d%d", &num1, &num2);
//	printf("%d / %d �� : %d\n", num1, num2, num1 / num2);
//	printf("%d %% %d ������ : %d", num1, num2, num1 % num2);
//
//	return 0;
//}




//#include <stdio.h>
//int main() {
//	int num1, num2, num3;
//
//	printf("�� ���� ������ �Է��ϼ���.(0 ����) : ");
//	scanf("%d%d%d", &num1, &num2, &num3);
//	printf("������ : %d", (num1 - num2) * (num2 + num3) * (num3 % num1));
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
//	a = (int)a; //568.000000 int ����ȯ �Ҷ� �Ҽ����� �� ©�� 
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
//	printf("x1, y1 ��ǥ (���� : 1 2) : ");
//	scanf("%d %d", &a, &b);
//	printf("x2, y2 ��ǥ (���� : 4 5) : ");
//	scanf("%d %d", &c, &d);
//	printf("�� ���� �̷�� ���簢���� ���̴� %d �Դϴ�.", (b - a) * (d - c));
//
//	return 0;
//}




//#include <stdio.h>
//
//int main() {
//	char a;
//	printf("���ĺ� �Է� (���� : p) : ");
//	scanf("%c", &a);
//	printf("%c �� �ش��ϴ� �ƽ�Ű �ڵ� ���� %d �Դϴ�.", a, a);
//
//	return 0;
//}




//#include <stdio.h>
//
//int main() {
//	int num;
//	printf("���� �Է� : ");
//	scanf("%d", &num);
//
//	if (num < 0) {
//		printf("�Է� ��(%d)�� 0���� �۴�.\n", num);
//	}
//	if (num > 0) {
//		printf("�Է� ��(%d)�� 0���� ũ��.\n", num);
//	}
//	if (num == 0) {
//		printf("�Է� ���� 0�̴�.\n");
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
//	printf("1.����\t2.����\t3.����\t4.������\n");	//	����	�޴�	show
//	printf("����	:\t");	//	�޴�	�Է�	�ȳ�
//	scanf("%d", &opt);	//	1,2,3,4	��	�޴�	�Է�
//	printf("�� ���� �Ǽ� �Է� :\t");	//	�Ǽ�	�Է�	�ȳ�	
//	scanf("%lf%lf", &num1, &num2);	//	�Ǽ�	2��	�Է�
//	if (opt == 1)
//		result = num1 + num2;
//	if (opt == 2)
//		result = num1 - num2;
//	if (opt == 3)
//		result = num1 * num2;
//	if (opt == 4)
//		result = num1 / num2;
//	printf("���	: %f\n", result);
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
//		printf("�Է¹��� �� �� ū ���� %d�̰� ���� ���� %d�Դϴ�.", a, b);
//	}
//	if (a < b) {
//		printf("�Է¹��� �� �� ū ���� %d�̰� ���� ���� %d�Դϴ�.", b, a);
//	}
//	if (a == b) {
//		printf("�Է¹��� �� %d, %d�� �����մϴ�.", a, b);
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
//		printf("%d�� 10���� Ů�ϴ�.", a;
//	}
//	if (a <= b) {
//		printf("%d�� 10���� �۰ų� �����ϴ�.", a);
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