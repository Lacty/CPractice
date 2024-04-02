#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int age;
	printf("年齢を入力してください");
	scanf("%d", &age);

	printf("あなたの生まれてから現在までのおおよその日数は%d日です", age * 365);

	return 0;
}