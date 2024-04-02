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


int main() {
	Prac4_5();
	return 0;
}