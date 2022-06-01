//#include <stdio.h>
//
//int main() {
//	int arr[5][5];
//	int i, j;
//
//	for (i = 0; i < 5; i++) {
//		for (j = 0; j < 5; j++) {
//			if (i == 0 || j == 0)
//				arr[i][j] = 1;
//			else
//				arr[i][j] = arr[i - 1][j] + arr[i][j - 1];
//			printf("%-2d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	//for (i = 0; i < 4; i++) {
//	//	for (j = 0; j < 4; j++) {
//	//		arr[i + 1][j + 1] = arr[i + 1][j] + arr[i][j + 1];
//	//	}
//	//}
//	//for (int i = 0; i < 5; i++) {
//	//	for (int j = 0; j < 5; j++) {
//	//		printf("%d ", arr[i][j]);
//	//	}
//	//	printf("\n");
//	//}
//}




//#include <stdio.h>
//
//int main() {
//	int arr[100], i, max = 0, min = 0;
//	for (i = 0; ; i++) {
//		scanf("%d", &arr[i]);
//		if (arr[i] == 999)
//			break;
//	}
//
//	for (i = 0; ; i++) {
//		if (arr[i] > arr[i + 1]) {
//			max = arr[i];
//		}
//
//	}
// 
//}




//#include <stdio.h>
////안됨
//int main() {
//	int arr[4][2], avg[7];
//	int i, j, k;
//
//	for (i = 0; i < 4; i++) {
//		for (j = 0; j < 2; j++) {
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (i = 0; i < 4; i++) {
//		for (j = 0; j < 4; j++) {
//			for (k = 0; k < 2; k++) {
//				avg[i] = arr[j][k] + arr[j][k];
//			}
//		}
//	}
//	for (i = 4; i < 6; i++) {
//		for (j = 0; j < 2; j++) {
//			for (k = 0; k < 4; k++) {
//				avg[i] = arr[j][k] + arr[j][k];
//			}
//		}
//	}
//	avg[3] += avg[0] + avg[1] + avg[2];
//	avg[5] += avg[4] + avg[5];
//	for (i = 0; i < 6; i++) {
//		avg[6] += avg[i];
//	}
// 	
//	for (i = 0; i < 4; i++) {
//		printf("%d ", avg[i]);
//	}
//	printf("\n");
//	for (i = 4; i < 6; i++) {
//		printf("%d ", avg[i]);
//	}
//	printf("%d ", avg[7]);
//}




//#include<stdio.h>
//int main()
//{
//    int i, j, num;
//    int sum = 0;//for문마다 초기화 해주기
//    int arr[4][2];
//    for (int i = 0; i < 4; i++) {
//        for (j = 0; j < 2; j++) {
//            scanf(" %d", &arr[i][j]);
//        }
//    }
//
//    for (i = 0; i < 4; i++) {
//        sum = 0;
//        for (j = 0; j < 2; j++) {
//            sum += arr[i][j];
//        }
//        printf("%d ", sum / 2);
//    }
//    printf("\n");
//    for (j = 0; j < 2; j++) {
//        sum = 0;
//        for (i = 0; i < 4; i++) {
//            sum += arr[i][j];
//        }
//        printf("%d ", sum / 4);
//    }
//    printf("\n");
//    sum = 0;
//    for (int i = 0; i < 4; i++) {
//        for (j = 0; j < 2; j++) {
//            sum += arr[i][j];
//        }
//    }
//    printf("%d", sum / 8);
//}