//#include <stdio.h>
//
//int main() {
//	int a, b;
//	char c;
//
//	scanf("%d %c %d", &a, &c, &b);
//	printf("��� : ");
//	switch (c) {
//	case '+':
//		printf("%d", a + b);
//		break;
//	case '-':
//		printf("%d", a - b);
//		break;
//	case '*':
//		printf("%d", a * b);
//		break;
//	case 'x':
//		printf("%d", a * b);
//		break;
//	case '/':
//		printf("%d", a / b);
//		break;
//	default:
//		printf("��?��");
//	}
//
//	return 0;
//}




//#include <stdio.h>
//
//int main() {
//	int age, pay = 1000;
//	char k, y, a, e;
//
//	scanf("%d", &age);
//	
//
//
//	switch (age) {
//	case 'k':
//		printf("%d", pay - pay * (50 / 100));
//	case 'y':
//		printf("%d", pay - pay * (25 / 100));
//	case 'a':
//		printf("%d", pay);
//	case 'e':
//		printf("%d", 0);
//	}
//
//	return 0;
//}




//#include <stdio.h>
//
//int main() {
//	int a, b;
//	scanf("%d %d", &a, &b);
//	switch ((a > b) ? 1 : 0) {
//	case (1):
//		printf("%d", a);
//		break;
//	case (0):
//		printf("%d", b);
//		break;
//	}
//
//	return 0;
//}




//#include <stdio.h>
//
//int main() {
//	float a, b;
//	scanf("%lf %lf", &a, &b);
//	printf("%lf",)
//	switch ((a > b) ? 1 : 0) {
//	case (1):
//		printf("%d", a);
//		break;
//	case (0):
//		printf("%d", b);
//		break;
//	}
//
//	return 0;
//}




//#include <stdio.h>
//
//int main() {
//	int t1, t2, t3;
//
//	scanf("%d %d %d", &t1, &t2, &t3);
//	{
//		if (t1 >= 170)
//			printf("��\n");
//		else
//			printf("��\n");
//	}
//	{
//		if (t2 >= 170)
//			printf("��\n");
//		else
//			printf("��\n");
//	}
//	{
//		if (t3 >= 170)
//			printf("��\n");
//		else
//			printf("��\n");
//	}
//}




#include <stdio.h>

int main() {
	int arr[4], i, j, temp;

    for (i = 0; i <= 2; i++) {
        scanf("%d", &arr[i]);   
    }
	
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3 - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (i = 0; i < 3; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}