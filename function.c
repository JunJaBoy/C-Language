//#include <stdio.h>
//
//double circle(double x);
//
//int main() {
//	double num;
//	scanf("%lf", &num);
//	printf("%.2lf", circle(num));
//	return 0;
//}
//double circle(double x) {
//	double extend = x * x * 3.14;
//	return extend;
//}




//#include <stdio.h>
//
//int GetMax(int num1, int num2, int num3);	//�ִ밪
//int GetMin(int num1, int num2, int num3);	//�ּҰ�
//int main()
//{
//	int num1, num2, num3;
//	printf("�� ���� ���� �Է� : ");
//	scanf("%d %d %d", &num1, &num2, &num3);
//	printf("���� ū �� : %d\n", GetMax(num1, num2, num3));
//	printf("���� ���� �� : %d\n", GetMin(num1, num2, num3));
//	return 0;
//}
//int GetMax(int num1, int num2, int num3)
//{
//	if ((num1 >= num2) && (num2 >= num3) || (num1 >= num3) && (num3 >= num2))
//		return num1;
//	else if ((num2 >= num1) && (num1 >= num3) || (num2 >= num3) && (num3 >= num1))
//		return num2;
//	else
//		return num3;
//}
//int GetMin(int num1, int num2, int num3)
//{
//	if ((num1 <= num2) && (num2 <= num3) || (num1 <= num3) && (num3 <= num2))
//		return num1;
//	else if ((num2 <= num1) && (num1 <= num3) || (num2 <= num3) && (num3 <= num1))
//		return num2;
//	else
//		return num3;
//}




//#include <stdio.h>
//
//int isPrime(int N);
//
//int main() {
//	int N, TC;
//	scanf("%d", &TC);
//	while (TC--) {
//		scanf("%d", &N);
//		printf("%d\n", isPrime(N));
//	}
//	return 0;
//}
//
//int isPrime(int N) {
//	int i, cnt = 0;
//	for (i = 2; i <= N; i++) {
//		if (N % i == 0)
//			cnt++;
//	}
//	if (cnt == 1)
//		return 1;
//	else
//		return 0;
//}




//#include <stdio.h>
//
//int square(int x);
//
//int main() {
//	int num;
//	scanf("%d", &num);
//	printf("%d", square(num));
//}
//int square(int x) {
//	int num;
//	num = x * x;
//	return num;
//}




/*//��ȫ
#include <stdio.h>

int k = 1;
int b(int a, int n);
int main() {

   int a, n;
   scanf("%d %d", &a, &n);
   printf("%d", b(a, n));
   return 0;
}

int b(int a, int n) {
   for (int i = 1; i <= n; i++)
   {
	  k *= a;
   }
   return k;
}*/




/*//����
int GCD(int A, int B)
{
    int i, n;
    for(i=1; i<=A && i<=B; i++)
    {
        if(A%i==0 && B%i==0)
            n = i;
    }

    return n;
}

int LCD(int A, int B)
{
    int i, gcd, min;
    for (i = 1; i<=A && i<=B; i++)
    {
        if (A%i==0 && B%i==0)
            gcd = i;
    }

    min = (A*B)/gcd;

    return min;
}

int main()
{
    int A, B;
    printf("�� ���� �Է� : ");
    scanf("%d %d", &A, &B);

    printf("�ִ����� : %d\n", GCD(A, B));
    printf("�ּҰ���� : %d\n", LCD(A, B));

    return 0;
}
*/





//#include <stdio.h>
//int total = 0;
//int addToTotal(int num);
//int main()
//{
//    int num, i;
//    for (i = 0; i < 3; i++) {
//        printf("�Է�%d :   ", i + 1);
//        scanf("%d", &num);
//        printf("\t���� : %d\n", addToTotal(num));
//    }
//}
//int addToTotal(int num)
//{
//    total += num;
//    return total;
//}




