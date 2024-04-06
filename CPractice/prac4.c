
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "prac4.h"


void Prac4_1() {
	int x = 12, y = 5;
	if (x > y) {
		printf("xはyより大きい");
	}
}

void Prac4_2() {
	int x = 12, y = 15;
	if (x > y) {
		printf("xはyより大きい");
	}
	else if (x < y) {
		printf("yはxより大きい");
	}
}

void Prac4_3() {
	int x, y;
	printf("数値を2つ入力してください、大きい数字を出力します。\n");
	scanf("%d%d", &x, &y);
	if (x > y) { printf("%d", x); }
	else if (x < y) { printf("%d", y); }
}

void Prac4_4() {
	int x, y;
	printf("数値を２つ入力してください\n");
	scanf("%d%d", &x, &y);
	if (x > y) { printf("xはyより大きい"); }
	else if (x < y) { printf("yはxより大きい"); }
	else { printf("xとyは等しい"); }
}

void Prac4_5() {
	int x;
	printf("数値を入力してください\n");
	scanf("%d", &x);
	printf("入力された数値[%d]は", x);
	if (x % 2 == 0) { printf("偶数です"); }
	else { printf("奇数です"); }
}

void Prac4_6() {
	int x;
	scanf("%d", &x);

	// 正側の場合
	if (x >= 0) {
		if (x % 2 == 0) { printf("正の偶数"); }
		else { printf("正の奇数"); }
	}
	else // 負側の場合
		if (x < 0) {
			if (x % 2 == 0) { printf("負の偶数"); }
			else { printf("負の奇数"); }
		}
}

void Prac4_7(const int xcase) {
	int x;
	printf("テストの点数を入力してください:");
	scanf("%d", &x);

	switch (xcase) {
	case 1:
		if (x >= 60) { printf("合格"); }
		else if (x < 60) { printf("不合格"); }
		break;
	case 2:
		if (x >= 80) { printf("たいへんよくできました。"); }
		else if (x >= 60) { printf("よくできました。"); }
		else if (x < 60) { printf("ざんねんでした。"); }
		break;
	case 3:
		if (x >= 80) { printf("優"); }
		else if (x >= 70) { printf("良"); }
		else if (x >= 60) { printf("可"); }
		else if (x < 60) { printf("不可"); }
		break;
	}
}

void Prac4_8() {
	int mid, end;
	printf("中間試験の点数を入力してください:");
	scanf("%d", &mid);
	printf("期末試験の点数入力してください:");
	scanf("%d", &end);

	if (mid >= 60 && end >= 60) { printf("合格"); }
	else if (mid + end >= 130) { printf("合格"); }
	else if ((mid + end >= 100) && ((mid >= 90) || (end >= 90))) { printf("合格"); }
	else { printf("不合格"); }
}

void Prac4_9() {
	printf("> 0 = 日曜、1 = 月曜、2 = 火曜、3 = 水曜、4 = 木曜、5 = 金曜、6 = 土曜\n");
	printf(">0=午前、1=午後、2=夜間\n");

	int am[] = { 0, 1, 0, 1, 1, 0, 1 };
	int pm[] = { 0, 1, 1, 1, 1, 1, 0 };
	int mn[] = { 0, 1, 1, 0, 1, 1, 0 };

	int week;
	int zone;

	printf("曜日を数字で入力してください:");
	scanf("%d", &week);
	printf("時間帯を数字で入力してください:");
	scanf("%d", &zone);

	switch (zone) {
	case 0:
		if (am[week] == 0) { printf("休診です"); }
		else { printf("営業しています"); }
		break;
	case 1:
		if (pm[week] == 0) { printf("休診です"); }
		else { printf("営業しています"); }
		break;
	case 2:
		if (mn[week] == 0) { printf("休診です"); }
		else { printf("営業しています"); }
		break;
	}
}

void Prac4_10() {
	int x, y;
	scanf("%d%d", &x, &y);

	if ((x < y) && ((x % 2 == 0) && (y % 2 == 0)))
		printf("xはyより小さく、かつ、xとyは共に偶数である。\n");

	if ((x == y) && (x < 0))
		printf("xとyは等しく、かつ、負の数である。\n");

	if ((x < y) || (x % 2 == 0))
		printf("xはyより小さい、または、xは偶数である。\n");

	if (((x <= 10) || (x >= 100)) && ((y >= 10) && (y <= 100)))
		printf("xは10以下または100以上で、かつ、yは10以上かつ100以下である。\n");

	if (!((x < 0) && (y < 0)))
		printf("xもyも負の数である、ではない。\n");
}

void Prac4_11() {
	int month;
	printf("月を入力してください:");
	scanf("%d", &month);

	switch (month) {
	case 1:
		printf("１月：元日、成人の日\n");
	case 2:
		printf("２月：建国記念の日\n");
	case 3:
		printf("３月：春分の日\n");
	case 4:
		printf("４月：昭和の日\n");
	case 5:
		printf("５月：憲法記念日、みどりの日、こどもの日\n");
	case 6:
		printf("");
	case 7:
		printf("７月：海の日\n");
	case 8:
		printf("");
	case 9:
		printf("９月：敬老の日、秋分の日\n");
	case 10:
		printf("１０月：体育の日\n");
	case 11:
		printf("１１月：文化の日、勤労感謝の日\n");
	case 12:
		printf("１２月：天皇誕生日\n");
	}
}

void Prac4_12() {
	int sushi;
	printf("1:まぐろ 2:えび 3:こはだ\n");
	printf("好きな鮨を数字で入力してください:");
	scanf("%d", &sushi);

	switch (sushi) {
	case 1:
		printf("大吉");
		break;
	case 2:
		printf("凶");
		break;
	case 3:
		printf("大凶");
		break;
	}
}

void Prac4_13() {
	int month;
	printf("月を数字で入力してください:");
	scanf("%d", &month);

	switch (month) {
	case 1:
		printf("31日");
		break;
	case 2:
		printf("28日");
		break;
	case 3:
		printf("31日");
		break;
	case 4:
		printf("30日");
		break;
	case 5:
		printf("31日");
		break;
	case 6:
		printf("30日");
		break;
	case 7:
		printf("31日");
		break;
	case 8:
		printf("31日");
		break;
	case 9:
		printf("30日");
		break;
	case 10:
		printf("31日");
		break;
	case 11:
		printf("30日");
		break;
	case 12:
		printf("31日");
		break;
	default:
		printf("入力が間違っています");
		break;
	}
}