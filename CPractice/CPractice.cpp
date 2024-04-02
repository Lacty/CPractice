#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// 練習問題 4 - 1
// int 型の変数 x、y にそれぞれ数値を入力し、x が y より大きい場合に、
// “xはyより大きい”という文を表示するプログラムを作成しなさい。
void Prac4_1() {
	int x = 12, y = 5;
	if (x > y) {
		printf("xはyより大きい");
	}
}

// 練習問題 4 - 2
// int 型の変数 x、y にそれぞれ数値を入力し、x が ｙ より大きい場合には“x は y より大きい”
// x が y より小さい場合には“xはyより小さい”と表示するプログラムを作成しなさい。
void Prac4_2() {
	int x = 12, y = 15;
	if (x > y) {
		printf("xはyより大きい");
	}
	else if (x < y) {
		printf("yはxより大きい");
	}
}

// 練習問題 4 - 3
// ２つの整数値を入力し、大きい方（小さくない方）の数を表示するプログラムを作成しなさい。
void Prac4_3() {
	int x, y;
	printf("数値を2つ入力してください、大きい数字を出力します。\n");
	scanf("%d%d", &x, &y);
	if      (x > y) { printf("%d", x); }
	else if (x < y) { printf("%d", y); }
}

// 練習問題 4 - 4
// int 型の変数 x、y にそれぞれ数値を入力し、x が ｙ より大きい場合には“xはyより大きい”
// x が y より小さい場合には“xはyより小さい”、x と y が等しい場合には“xとyは等しい”と表示するプログラムを作成しなさい
void Prac4_4() {
	int x, y;
	printf("数値を２つ入力してください\n");
	scanf("%d%d", &x, &y);
	if      (x > y) { printf("xはyより大きい"); }
	else if (x < y) { printf("yはxより大きい"); }
	else            { printf("xとyは等しい"); }
}

// 練習問題 4 - 5
// 正の整数値を入力し、それが偶数か奇数かを判定するプログラムを作成しなさい。
// ※ 	奇数、偶数の判定には除算の余りを利用する。
void Prac4_5() {
	int x;
	printf("数値を入力してください\n");
	scanf("%d", &x); 
	printf("入力された数値[%d]は", x);
	if (x % 2 == 0) { printf("偶数です"); }
	else				 { printf("奇数です"); }
}

// 練習問題 4 - 6
// 整数値を入力し、以下の四つの分類から該当するものを表示するプログラムを作成しなさい。
// “正の偶数”、“正の奇数”、“負の偶数”、“負の奇数”
// ※ 	負の数であっても、2で割り切れれば偶数、そうでなければ奇数とする。
// ※ 	0は“正の偶数”であるとする。
// ※ 	2で割った余りを0と比較するようにした方が良い。（1と比較しない）
void Prac4_6() {
	int x;
	scanf("%d", &x);
	
	// 正側の場合
	if (x >= 0) {
		if (x % 2 == 0) { printf("正の偶数"); }
		else            { printf("正の奇数"); }
	}
	else // 負側の場合
	if (x < 0) {
		if (x % 2 == 0) { printf("負の偶数"); }
		else            { printf("負の奇数"); }
	}
}

/* 
   練習問題 4 - 7
   試験の点数を入力し、対応する成績を表示するプログラムを３種類作成しなさい。
   試験は 100 点満点（ 0 点 ～ 100 点）とし、点数と成績の対応を以下のようにします。
   ケース1
   60 点以上：“合格”
   60 点未満：“不合格”
   ケース2
   80 点以上：“たいへんよくできました。”
   60 点以上、80 点未満：“よくできました。”
   60 点未満：“ざんねんでした。”
   
   ケース3
   80 点以上：“優”
   70 点以上、80 点未満：“良”
   60 点以上、70 点未満：“可”
   60 点未満：“不可”
*/
void Prac4_7(const int& xcase) {
	int x;
	printf("テストの点数を入力してください:");
	scanf("%d", &x);

	switch (xcase) {
	case 1:
		if      (x >= 60) { printf("合格"); }
		else if (x < 60)  { printf("不合格"); }
		break;
	case 2:
		if      (x >= 80) { printf("たいへんよくできました。"); }
		else if (x >= 60) { printf("よくできました。"); }
		else if (x < 60)	{ printf("ざんねんでした。"); }
		break;
	case 3:
		if      (x >= 80) { printf("優"); }
		else if (x >= 70) { printf("良"); }
		else if (x >= 60) { printf("可"); }
		else if (x < 60)  { printf("不可"); }
		break;
	}
}

/*
	練習問題 4 - 8
	中間試験と、期末試験の点数（それぞれ 0 ～ 100 点）を入力し、次の条件に従って合格、不合格を判定するプログラムを作成しなさい。

	両方とも 60 点以上の場合、合格
	合計が 130 点以上の場合、合格
	合計が 100 点以上で、どちらかの試験が 90 点以上であれば合格
	上記以外は不合格
*/
void Prac4_8() {
	int mid, end;
	printf("中間試験の点数を入力してください:");
	scanf("%d", &mid);
	printf("期末試験の点数入力してください:");
	scanf("%d", &end);

	if      (mid >= 60 && end >= 60)                             { printf("合格"); }
	else if (mid + end >= 130)                                   { printf("合格"); }
	else if ((mid + end >= 100) && ((mid >= 90) || (end >= 90))) { printf("合格"); }
	else                                                         { printf("不合格"); }
}

/*
	練習問題 4 - 9
	曜日と、午前、午後、夜間の区別を入力し、病院が開いているか、休診であるかを表示するプログラムを作成しなさい。
	
	開いているか、休診であるかは、次の表に従います。
	      日曜	月曜	火曜	水曜	木曜	金曜	土曜
	午前	休診	○	   休診	○	   ○	   休診	○
	午後	休診	○	   ○	   ○	   ○	   ○	   休診
	夜間	休診	○	   ○	   休診	○	   ○	   休診
*/
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
		else					 { printf("営業しています"); }
		break;
	case 1:
		if (pm[week] == 0) { printf("休診です"); }
		else					 { printf("営業しています"); }
		break;
	case 2:
		if (mn[week] == 0) { printf("休診です"); }
		else					 { printf("営業しています"); }
		break;
	}
}

/*
	練習問題 4 - 10
	整数値 x, y を入力し、以下の条件に該当する場合、そうであることを示す文を表示しなさい。
	
	x は y より小さく、かつ、x と y は共に偶数である。
	x と y は等しく、かつ、負の数である。
	x は y より小さい、または、x は偶数である。
	x は 10 以下または 100 以上で、かつ、y は 10 以上かつ 100 以下である。
	x も y も負の数である、ではない。（ x も y も負の数である、の否定）
*/
void Prac4_10() {
	int x, y;
	scanf("%d%d", &x, &y);

	if ((x < y) && ((x % 2 == 0) && (y % 2 ==0)))
		printf("xはyより小さく、かつ、xとyは共に偶数である。\n");

	if ((x == y) && (x < 0))
		printf("xとyは等しく、かつ、負の数である。\n");

	if ((x < y) || (x % 2 == 0))
		printf("xはyより小さい、または、xは偶数である。\n");

	if (((x <=10) || (x >= 100)) && ((y >= 10) && (y <= 100)))
		printf("xは10以下または100以上で、かつ、yは10以上かつ100以下である。\n");

	if (!((x < 0) && (y < 0)))
		printf("xもyも負の数である、ではない。\n");
}

/*
	練習問題 4 - 11
	月を表す数値を入力し、その月の初めから年末までにある祝日を表示するプログラムを作成しなさい。
	
	表示する祝日は以下の日とします。
	
	１月：元日、成人の日
	２月：建国記念の日
	３月：春分の日
	４月：昭和の日
	５月：憲法記念日、みどりの日、こどもの日
	７月：海の日
	９月：敬老の日、秋分の日
	１０月：体育の日
	１１月：文化の日、勤労感謝の日
	１２月：天皇誕生日
*/
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

/*
	練習問題 4 - 12
	好きな鮨（すし）を選択させ、それに対応したメッセージを表示する、鮨占いプログラムを作成しなさい。
	
	※ 	switch文を使用する。
	※ 	選択は、“1：まぐろ　2：えび　3：こはだ．．．”のようなガイドを表示し数字で入力させる。
	※ 	題材は鮨でなくても良い。
*/
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

/*
	練習問題 4 - 13
   月を表す数値を入力し、その月の日数を表示するプログラムを作成しなさい。2 月は 28 日とします。
   また、1 ～ 12 以外の数値が入力された場合に、“入力が間違っています”と表示しなさい。
*/
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

int main() {
	Prac4_13();
	return 0;
}