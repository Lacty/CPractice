
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "prac5.h"


void Prac5_1() {
   for (int i = 0; i < 10; i++) {
      printf("SPAM");
   }
}

void Prac5_2() {
   for (int i = 1; i < 10; i++) {
      printf("%d", i * 3);
   }
}

void Prac5_3() {
   int x = 2;
   for (int i = 1; i < 9; i++) {
      x *= 2;
      printf("%d ", x);
   }
}

void Prac5_4() {
   int x = 1;
   for (int i = 1; i < 8; i++) {
      x *= i;
      printf("%d", x);
   }
}

void Prac5_5() {
   int x = 0;
   for (int i = 0; i < 10; i++) {
      x += i;
      printf("%d ", x);
   }
   printf("\n���ϒl%d", x / 2);
}

void Prac5_6() {
   int issue;
   int win = 0;
   int lose = 0;
   printf("���s��0��1�œ��͂��Ă�������(10��)\n");
   for (int i = 0; i < 10; i++) {
      scanf("%d", &issue);
      if (issue == 1) win++;
      else lose++;
   }
   printf("������[%d] ������[%d]", win, lose);
}

void Prac5_7() {
   int kyo = 0, han = 0;
   int x;
   for (int i = 1; i < 10; i++) {
      printf("%d��\,���l�̓��_��? ", i);
      scanf("%d", &x);
      kyo += x;

      printf("%d��,��_�̓��_��? ", i);
      scanf("%d", &x);
      han += x;
   }
   printf("���l:%d ��_:%d\n", kyo, han);
   if      (kyo > han) printf("���l�̏���");
   else if (kyo < han) printf("��_�̏���");
   else                printf("��������");
}

void Prac5_8() {
   int x;
   int maximam = 0;
   for (int i = 0; i < 10; i++) {
      scanf("%d", &x);
      maximam = maximam < x ? x : maximam;
   }
   printf("�ő�l��%d", maximam);
}

void Prac5_9() {
   int x;
   int maximam = 0;
   int minimam = 0;
   for (int i = 0; i < 10; i++) {
      scanf("%d", &x);
      if (i == 0) {
         maximam = x;
         minimam = x;
      }
      else {
         maximam = maximam < x ? x : maximam;
         minimam = minimam > x ? x : minimam;
      }
   }
   printf("�ő�l��%d", maximam);
   printf("�ŏ��l��%d", minimam);
}

void Prac5_10() {
   int x;
   scanf("%d", &x);
   for (int i = 0; i < x; i++) {
      printf("*");
   }
}

void Prac5_11() {
   int x;
   scanf("%d", &x);
   for (int i = 0; i < x; i++) {
      printf("%d", i);
      if (i == 9) {
         i = 0;
         x -= 10;
      }
   }
}

void Prac5_12() {
   int x = 1;
   for (int i = 0; i < 1000; i++) {
      x *= 3;
      printf("%d ", x);
      i = x;
   }
}

void Prac5_13() {
   int x;
   int sum = 0;
   while (sum < 100) {
      scanf("%d", &x);
      sum += x;
      printf("%d\n", sum);
   }
}

void Prac5_14() {
   int x;
   int strike = 0;
   int ball = 0;

   while ((ball < 4) && (strike < 3)) {
      printf("�X�g���C�N = 1 or �{�[�� = 2\n");
      scanf("%d", &x);
      if (x == 1) strike++;
      else ball++;
   }
   printf("�X�g���C�N:%d �{�[��:%d", strike, ball);
}

void Prac5_15() {
   int x;
   int strike = 0;
   int ball = 0;

   while ((ball < 4) && (strike < 3)) {
      printf("�X�g���C�N = 1 or �{�[�� = 2 or �t�@�E�� = 3\n");
      scanf("%d", &x);
      if (x == 1) strike++;
      else if (x == 2) ball++;
      else if (strike < 2) strike++;
   }
   printf("�X�g���C�N:%d �{�[��:%d", strike, ball);
}

void Prac5_16() {
   int sosu;
   printf("���l(4�ȏ�)����͂��ĉ�����");
   scanf("%d", &sosu);
   for (int i = 2; i < sosu; i++) {
      if (sosu % i == 0) {
         printf("�f���ł͂���܂���");
         return;
      }
   }
   printf("�f���ł�");
}

void Prac5_17() {
   int x;
   printf("�f�����������������l����͂��Ă�������\n");
   scanf("%d", &x);
   
   for (int i = 2; i < x + 1; i++) {
      if (x % i == 0) {
         printf("%d ", i);
         x = x / i;
         i = 1;
      }
   }
}

void Prac5_18() {
   for (int y = 1; y < 10; y++) {
      for (int x = 1; x < 10; x++) {
         printf("%2d ", x * y);
      }
      printf("\n");
   }
}

void Prac5_19() {
   int sum = 0;
   int n = -1;

   while (n != 0) {
      scanf("%d", &n);
      if (n == 0) break;
      sum += n;
   }
   printf("���v:%d", sum);
}

void Prac5_20() {
   int sum = 0;
   int n = -1;
   int i = 0;

   while (n != 0) {
      scanf("%d", &n);
      if (n == 0) break;
      sum += n;
      i++;
   }
   printf("���ϒl:%d", sum / i);
}

void Prac5_21() {
   int n;
   scanf("%d", &n);
   for (int i = 0; i <= n; i++) {
      for (int y = 0; y < i; y++) {
         printf("$");
      }
      printf("\n");
   }
}

void Prac5_22() {
   int n;
   scanf("%d", &n);

   for (int i = 0; i < n; i++) {
      for (int y = 0; y < n; y++) {
         if (i == y || (i + y + 1) == n) {
            printf("X");
         }
         else {
            printf(" ");
         }
      }
      printf("\n");
   }
}

void Prac5_23() {
   int prev = 0;
   int n = 1;
   int temp;
   printf("0, 1, ");
   while (true) {
      temp = prev + n;
      if (temp >= 1000) break;
      printf("%d, ", temp);
      prev = n;
      n = temp;
   }
}