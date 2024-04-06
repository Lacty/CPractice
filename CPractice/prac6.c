
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "prac6.h"


void Prac6_1() {
   int arr[10];
   for (int i = 0; i < 10; i++) {
      scanf("%d", &arr[i]);
      arr[i] = arr[i] * 2;
   }
   for (int i = 0; i < 10; i++) {
      printf("%d, ", arr[i]);
   }
}

void Prac6_2() {
   int arr[10];
   for (int i = 0; i < 10; i++) {
      scanf("%d", &arr[i]);
   }
   for (int i = 0; i < 10; i++) {
      printf("%d, ", arr[9 - i]);
   }
}

void Prac6_3() {
   int arr[10];
   for (int i = 0; i < 10; i++) {
      scanf("%d", &arr[i]);
   }
   printf("偶数:");
   for (int i = 0; i < 10; i++) {
      if (arr[i] % 2 == 0) {
         printf("%d ", arr[i]);
      }
   }
   printf("\n奇数:");
   for (int i = 0; i < 10; i++) {
      if (arr[i] % 2 != 0) {
         printf("%d ", arr[i]);
      }
   }
}

void Prac6_4() {
   int arr[10];
   int sum = 0;
   int cnt = 0;
   for (int i = 0; i < 10; i++) {
      scanf("%d", &arr[i]);
      sum += arr[i];
      cnt++;
      if (sum > 100) break;
   }
   for (int i = 0; i < cnt; i++) {
      printf("%d ", arr[i]);
   }
   printf("\n合計: %d", sum);
}

void Prac6_5() {
   int binary[16];
   int value;
   int i;

   scanf("%d", &value);

   // 配列 binaryに0か1を代入する
   for (i = 0; i < 16; i++) {
      binary[15 - i] = value % 2;
      value /= 2;
   }

   for (i = 0; i < 16; i++)
      printf("%d", binary[i]);
}

void Prac6_6() {
   int kuku[9][9];
   int i, j;

   // 配列 kuku に値を代入する
   for (i = 0; i < 9; i++) {
      for (j = 0; j < 9; j++)
         kuku[i][j] = (i + 1) * (j + 1);
   }

   for (i = 0; i < 9; i++) {
      for (j = 0; j < 9; j++)
         printf(" %2d", kuku[i][j]);

      printf("\n");
   }
}

void Prac6_7() {
   int kuku[9][9];
   int i, j;

   int x, y;
   scanf("%d%d", &x, &y);

   for (i = 0; i < 9; i++) {
      for (j = 0; j < 9; j++)
         kuku[i][j] = (i + 1) * (j + 1);
   }

   printf("積:%d", kuku[x-1][y-1]);
}

void Prac6_8() {
   int arr[10];
   int temp;
   int notyet = 1;

   for (int i = 0; i < 10; i++) {
      scanf("%d", &arr[i]);
   }

   while (notyet) {
      notyet = 0;
      for (int i = 0; i < 9; i++) {
         if (arr[i] > arr[i + 1]) { // 右の数値と比較
            temp = arr[i + 1];
            arr[i + 1] = arr[i];
            arr[i] = temp;
            notyet = 1;
         }
      }
   }

   for (int i = 0; i < 10; i++) {
      printf("%d ", arr[i]);
   }
}