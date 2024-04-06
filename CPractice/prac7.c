
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "prac7.h"


void Prac7_1() {
   char a = 'A', b = 'B', c = 'C';
   printf("%c%c%c", a, b, c);
}

void Prac7_2() {
   char a = 'A';
   a += 0x20;
   printf("%c", a);
}

void Prac7_3() {
   int clm;
   char c = 'a';
   scanf("%d", &clm);
   for (int i = 0; i < 26; i++) {
      if (i % clm == 0 && i) printf("\n");
      printf("%c", c);
      c += 0x01;
   }
}

void Prac7_4() {
   char    sbinary[17];
   int     value;
   int     i;

   scanf("%d", &value);

   // îzóÒ sbinaryÇ…'0'Ç©'1'Çë„ì¸Ç∑ÇÈ
   for (int i = 0; i < 16; i++) {
      sbinary[15 - i] = '0' + value % 2;
      value /= 2;
   }
   sbinary[16] = 0;

   printf("%s", sbinary);
}

void Prac7_5() {
   char strings[200];
   scanf("%s", strings);
   printf("%s", strings);
}

void Prac7_6() {
   char strings[200];
   scanf("%s", strings);
   int cnt = 0;
   while (strings[cnt] != NULL) {
      cnt++;
   }
   printf("%d", cnt);
}

void Prac7_7() {
   char strings[200];
   scanf("%s", strings);
   int cnt = 0;
   while (strings[cnt] != NULL) {
      cnt++;
   }
   char inv[200];
   for (int i = 0; i < cnt; i++) {
      inv[i] = strings[cnt - i - 1];
   }
   inv[cnt] = 0;
   printf("%s", inv);
}

void Prac7_8() {
   char strings[200];
   scanf("%s", strings);
   int cnt = 0;
   while (strings[cnt] != NULL) {
      //if (strings[cnt] == 0) break;

      if (strings[cnt] <= 'Z' && strings[cnt] >= 'A') {
         strings[cnt] += 0x20;
      }
      cnt++;
   }
   printf("%s", strings);
}

void Prac7_9() {
   char SPAM[] = "SPAM";
   char spams[200];

   for (int i = 0; i < 20; i++) {
      for (int y = 0; y < 4; y++) {
         spams[i * 4 + y] = SPAM[y];
      }
   }
   spams[20 * 4] = 0;
   printf("%s", spams);
}

void Prac7_10() {
   char strings[200];
   char ans[200];
   int cnt = 0;
   scanf("%s", strings);
   for (int i = 0; i < 200; i++) {
      if (strings[i] < 'a' && 'z' > strings[i]) {
         ans[cnt] = strings[i];
         cnt++;
      }
      else if (strings[i] == NULL) break;
   }
   ans[cnt] = 0;

   printf("%s", ans);
}

void Prac7_11() {
   char    str1[100] = "Hello ";
   char    str2[] = "World";

   // str1Ç…str2ÇåãçáÇ∑ÇÈ
   int cnt1 = 0;
   int cnt2 = 0;
   while (str1[cnt1] != NULL) cnt1++;
   while (str2[cnt2] != NULL) cnt2++;

   int y = 0;
   for (int i = cnt1; i < 100; i++) {
      if (str2[y] != NULL) {
         str1[i] = str2[y];
         y++;
      }
      else {
         str1[i] = 0;
         break;
      }
   }

   printf("%s\n", str1);
}

void Prac7_12() {
   char str[] = "Hello World";

   // strÇÃóvëfÇãtèáÇ…Ç∑ÇÈ
   int cnt = 0;
   while (str[cnt] != NULL) cnt++;

   char temp[100];
   for (int i = 0; i < cnt; i++) {
      temp[i] = str[cnt - i - 1];
   }
   for (int i = 0; i < cnt; i++) {
      str[i] = temp[i];
   }
   str[cnt] = 0;

   printf("%s\n", str);
}