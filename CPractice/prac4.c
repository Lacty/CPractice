
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "prac4.h"


void Prac4_1() {
	int x = 12, y = 5;
	if (x > y) {
		printf("x��y���傫��");
	}
}

void Prac4_2() {
	int x = 12, y = 15;
	if (x > y) {
		printf("x��y���傫��");
	}
	else if (x < y) {
		printf("y��x���傫��");
	}
}

void Prac4_3() {
	int x, y;
	printf("���l��2���͂��Ă��������A�傫���������o�͂��܂��B\n");
	scanf("%d%d", &x, &y);
	if (x > y) { printf("%d", x); }
	else if (x < y) { printf("%d", y); }
}

void Prac4_4() {
	int x, y;
	printf("���l���Q���͂��Ă�������\n");
	scanf("%d%d", &x, &y);
	if (x > y) { printf("x��y���傫��"); }
	else if (x < y) { printf("y��x���傫��"); }
	else { printf("x��y�͓�����"); }
}

void Prac4_5() {
	int x;
	printf("���l����͂��Ă�������\n");
	scanf("%d", &x);
	printf("���͂��ꂽ���l[%d]��", x);
	if (x % 2 == 0) { printf("�����ł�"); }
	else { printf("��ł�"); }
}

void Prac4_6() {
	int x;
	scanf("%d", &x);

	// �����̏ꍇ
	if (x >= 0) {
		if (x % 2 == 0) { printf("���̋���"); }
		else { printf("���̊"); }
	}
	else // �����̏ꍇ
		if (x < 0) {
			if (x % 2 == 0) { printf("���̋���"); }
			else { printf("���̊"); }
		}
}

void Prac4_7(const int xcase) {
	int x;
	printf("�e�X�g�̓_������͂��Ă�������:");
	scanf("%d", &x);

	switch (xcase) {
	case 1:
		if (x >= 60) { printf("���i"); }
		else if (x < 60) { printf("�s���i"); }
		break;
	case 2:
		if (x >= 80) { printf("�����ւ�悭�ł��܂����B"); }
		else if (x >= 60) { printf("�悭�ł��܂����B"); }
		else if (x < 60) { printf("����˂�ł����B"); }
		break;
	case 3:
		if (x >= 80) { printf("�D"); }
		else if (x >= 70) { printf("��"); }
		else if (x >= 60) { printf("��"); }
		else if (x < 60) { printf("�s��"); }
		break;
	}
}

void Prac4_8() {
	int mid, end;
	printf("���Ԏ����̓_������͂��Ă�������:");
	scanf("%d", &mid);
	printf("���������̓_�����͂��Ă�������:");
	scanf("%d", &end);

	if (mid >= 60 && end >= 60) { printf("���i"); }
	else if (mid + end >= 130) { printf("���i"); }
	else if ((mid + end >= 100) && ((mid >= 90) || (end >= 90))) { printf("���i"); }
	else { printf("�s���i"); }
}

void Prac4_9() {
	printf("> 0 = ���j�A1 = ���j�A2 = �Ηj�A3 = ���j�A4 = �ؗj�A5 = ���j�A6 = �y�j\n");
	printf(">0=�ߑO�A1=�ߌ�A2=���\n");

	int am[] = { 0, 1, 0, 1, 1, 0, 1 };
	int pm[] = { 0, 1, 1, 1, 1, 1, 0 };
	int mn[] = { 0, 1, 1, 0, 1, 1, 0 };

	int week;
	int zone;

	printf("�j���𐔎��œ��͂��Ă�������:");
	scanf("%d", &week);
	printf("���ԑт𐔎��œ��͂��Ă�������:");
	scanf("%d", &zone);

	switch (zone) {
	case 0:
		if (am[week] == 0) { printf("�x�f�ł�"); }
		else { printf("�c�Ƃ��Ă��܂�"); }
		break;
	case 1:
		if (pm[week] == 0) { printf("�x�f�ł�"); }
		else { printf("�c�Ƃ��Ă��܂�"); }
		break;
	case 2:
		if (mn[week] == 0) { printf("�x�f�ł�"); }
		else { printf("�c�Ƃ��Ă��܂�"); }
		break;
	}
}

void Prac4_10() {
	int x, y;
	scanf("%d%d", &x, &y);

	if ((x < y) && ((x % 2 == 0) && (y % 2 == 0)))
		printf("x��y��菬�����A���Ax��y�͋��ɋ����ł���B\n");

	if ((x == y) && (x < 0))
		printf("x��y�͓������A���A���̐��ł���B\n");

	if ((x < y) || (x % 2 == 0))
		printf("x��y��菬�����A�܂��́Ax�͋����ł���B\n");

	if (((x <= 10) || (x >= 100)) && ((y >= 10) && (y <= 100)))
		printf("x��10�ȉ��܂���100�ȏ�ŁA���Ay��10�ȏォ��100�ȉ��ł���B\n");

	if (!((x < 0) && (y < 0)))
		printf("x��y�����̐��ł���A�ł͂Ȃ��B\n");
}

void Prac4_11() {
	int month;
	printf("������͂��Ă�������:");
	scanf("%d", &month);

	switch (month) {
	case 1:
		printf("�P���F�����A���l�̓�\n");
	case 2:
		printf("�Q���F�����L�O�̓�\n");
	case 3:
		printf("�R���F�t���̓�\n");
	case 4:
		printf("�S���F���a�̓�\n");
	case 5:
		printf("�T���F���@�L�O���A�݂ǂ�̓��A���ǂ��̓�\n");
	case 6:
		printf("");
	case 7:
		printf("�V���F�C�̓�\n");
	case 8:
		printf("");
	case 9:
		printf("�X���F�h�V�̓��A�H���̓�\n");
	case 10:
		printf("�P�O���F�̈�̓�\n");
	case 11:
		printf("�P�P���F�����̓��A�ΘJ���ӂ̓�\n");
	case 12:
		printf("�P�Q���F�V�c�a����\n");
	}
}

void Prac4_12() {
	int sushi;
	printf("1:�܂��� 2:���� 3:���͂�\n");
	printf("�D����齂𐔎��œ��͂��Ă�������:");
	scanf("%d", &sushi);

	switch (sushi) {
	case 1:
		printf("��g");
		break;
	case 2:
		printf("��");
		break;
	case 3:
		printf("�勥");
		break;
	}
}

void Prac4_13() {
	int month;
	printf("���𐔎��œ��͂��Ă�������:");
	scanf("%d", &month);

	switch (month) {
	case 1:
		printf("31��");
		break;
	case 2:
		printf("28��");
		break;
	case 3:
		printf("31��");
		break;
	case 4:
		printf("30��");
		break;
	case 5:
		printf("31��");
		break;
	case 6:
		printf("30��");
		break;
	case 7:
		printf("31��");
		break;
	case 8:
		printf("31��");
		break;
	case 9:
		printf("30��");
		break;
	case 10:
		printf("31��");
		break;
	case 11:
		printf("30��");
		break;
	case 12:
		printf("31��");
		break;
	default:
		printf("���͂��Ԉ���Ă��܂�");
		break;
	}
}