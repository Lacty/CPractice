
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