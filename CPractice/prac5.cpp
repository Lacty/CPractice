
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
   printf("\n平均値%d", x / 2);
}

void Prac5_6() {
   int issue;
   int win = 0;
   int lose = 0;
   printf("勝敗を0か1で入力してください(10回)\n");
   for (int i = 0; i < 10; i++) {
      scanf("%d", &issue);
      if (issue == 1) win++;
      else lose++;
   }
   printf("勝ち数[%d] 負け数[%d]", win, lose);
}

void Prac5_7() {
   int kyo = 0, han = 0;
   int x;
   for (int i = 1; i < 10; i++) {
      printf("%d回表,巨人の得点は? ", i);
      scanf("%d", &x);
      kyo += x;

      printf("%d回裏,阪神の得点は? ", i);
      scanf("%d", &x);
      han += x;
   }
   printf("巨人:%d 阪神:%d\n", kyo, han);
   if      (kyo > han) printf("巨人の勝ち");
   else if (kyo < han) printf("阪神の勝ち");
   else                printf("引き分け");
}

void Prac5_8() {
   int x;
   int maximam = 0;
   for (int i = 0; i < 10; i++) {
      scanf("%d", &x);
      maximam = maximam < x ? x : maximam;
   }
   printf("最大値は%d", maximam);
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
   printf("最大値は%d", maximam);
   printf("最小値は%d", minimam);
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
      printf("ストライク = 1 or ボール = 2\n");
      scanf("%d", &x);
      if (x == 1) strike++;
      else ball++;
   }
   printf("ストライク:%d ボール:%d", strike, ball);
}

void Prac5_15() {
   int x;
   int strike = 0;
   int ball = 0;

   while ((ball < 4) && (strike < 3)) {
      printf("ストライク = 1 or ボール = 2 or ファウル = 3\n");
      scanf("%d", &x);
      if (x == 1) strike++;
      else if (x == 2) ball++;
      else if (strike < 2) strike++;
   }
   printf("ストライク:%d ボール:%d", strike, ball);
}