
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// ���K��� 4 - 1
// int �^�̕ϐ� x�Ay �ɂ��ꂼ�ꐔ�l����͂��Ax �� y ���傫���ꍇ�ɁA
// �gx��y���傫���h�Ƃ�������\������v���O�������쐬���Ȃ����B
void Prac4_1() {
	int x = 12, y = 5;
	if (x > y) {
		printf("x��y���傫��");
	}
}

// ���K��� 4 - 2
// int �^�̕ϐ� x�Ay �ɂ��ꂼ�ꐔ�l����͂��Ax �� �� ���傫���ꍇ�ɂ́gx �� y ���傫���h
// x �� y ��菬�����ꍇ�ɂ́gx��y��菬�����h�ƕ\������v���O�������쐬���Ȃ����B
void Prac4_2() {
	int x = 12, y = 15;
	if (x > y) {
		printf("x��y���傫��");
	}
	else if (x < y) {
		printf("y��x���傫��");
	}
}

// ���K��� 4 - 3
// �Q�̐����l����͂��A�傫�����i�������Ȃ����j�̐���\������v���O�������쐬���Ȃ����B
void Prac4_3() {
	int x, y;
	printf("���l��2���͂��Ă��������A�傫���������o�͂��܂��B\n");
	scanf("%d%d", &x, &y);
	if (x > y) { printf("%d", x); }
	else if (x < y) { printf("%d", y); }
}

// ���K��� 4 - 4
// int �^�̕ϐ� x�Ay �ɂ��ꂼ�ꐔ�l����͂��Ax �� �� ���傫���ꍇ�ɂ́gx��y���傫���h
// x �� y ��菬�����ꍇ�ɂ́gx��y��菬�����h�Ax �� y ���������ꍇ�ɂ́gx��y�͓������h�ƕ\������v���O�������쐬���Ȃ���
void Prac4_4() {
	int x, y;
	printf("���l���Q���͂��Ă�������\n");
	scanf("%d%d", &x, &y);
	if (x > y) { printf("x��y���傫��"); }
	else if (x < y) { printf("y��x���傫��"); }
	else { printf("x��y�͓�����"); }
}

// ���K��� 4 - 5
// ���̐����l����͂��A���ꂪ����������𔻒肷��v���O�������쐬���Ȃ����B
// �� 	��A�����̔���ɂ͏��Z�̗]��𗘗p����B
void Prac4_5() {
	int x;
	printf("���l����͂��Ă�������\n");
	scanf("%d", &x);
	printf("���͂��ꂽ���l[%d]��", x);
	if (x % 2 == 0) { printf("�����ł�"); }
	else { printf("��ł�"); }
}

// ���K��� 4 - 6
// �����l����͂��A�ȉ��̎l�̕��ނ���Y��������̂�\������v���O�������쐬���Ȃ����B
// �g���̋����h�A�g���̊�h�A�g���̋����h�A�g���̊�h
// �� 	���̐��ł����Ă��A2�Ŋ���؂��΋����A�����łȂ���Ί�Ƃ���B
// �� 	0�́g���̋����h�ł���Ƃ���B
// �� 	2�Ŋ������]���0�Ɣ�r����悤�ɂ��������ǂ��B�i1�Ɣ�r���Ȃ��j
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

/*
	���K��� 4 - 7
	�����̓_������͂��A�Ή����鐬�т�\������v���O�������R��ލ쐬���Ȃ����B
	������ 100 �_���_�i 0 �_ �` 100 �_�j�Ƃ��A�_���Ɛ��т̑Ή����ȉ��̂悤�ɂ��܂��B
	�P�[�X1
	60 �_�ȏ�F�g���i�h
	60 �_�����F�g�s���i�h
	�P�[�X2
	80 �_�ȏ�F�g�����ւ�悭�ł��܂����B�h
	60 �_�ȏ�A80 �_�����F�g�悭�ł��܂����B�h
	60 �_�����F�g����˂�ł����B�h

	�P�[�X3
	80 �_�ȏ�F�g�D�h
	70 �_�ȏ�A80 �_�����F�g�ǁh
	60 �_�ȏ�A70 �_�����F�g�h
	60 �_�����F�g�s�h
*/
void Prac4_7(const int& xcase) {
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

/*
	���K��� 4 - 8
	���Ԏ����ƁA���������̓_���i���ꂼ�� 0 �` 100 �_�j����͂��A���̏����ɏ]���č��i�A�s���i�𔻒肷��v���O�������쐬���Ȃ����B

	�����Ƃ� 60 �_�ȏ�̏ꍇ�A���i
	���v�� 130 �_�ȏ�̏ꍇ�A���i
	���v�� 100 �_�ȏ�ŁA�ǂ��炩�̎����� 90 �_�ȏ�ł���΍��i
	��L�ȊO�͕s���i
*/
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

/*
	���K��� 4 - 9
	�j���ƁA�ߑO�A�ߌ�A��Ԃ̋�ʂ���͂��A�a�@���J���Ă��邩�A�x�f�ł��邩��\������v���O�������쐬���Ȃ����B

	�J���Ă��邩�A�x�f�ł��邩�́A���̕\�ɏ]���܂��B
			���j	���j	�Ηj	���j	�ؗj	���j	�y�j
	�ߑO	�x�f	��	   �x�f	��	   ��	   �x�f	��
	�ߌ�	�x�f	��	   ��	   ��	   ��	   ��	   �x�f
	���	�x�f	��	   ��	   �x�f	��	   ��	   �x�f
*/
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

/*
	���K��� 4 - 10
	�����l x, y ����͂��A�ȉ��̏����ɊY������ꍇ�A�����ł��邱�Ƃ���������\�����Ȃ����B

	x �� y ��菬�����A���Ax �� y �͋��ɋ����ł���B
	x �� y �͓������A���A���̐��ł���B
	x �� y ��菬�����A�܂��́Ax �͋����ł���B
	x �� 10 �ȉ��܂��� 100 �ȏ�ŁA���Ay �� 10 �ȏォ�� 100 �ȉ��ł���B
	x �� y �����̐��ł���A�ł͂Ȃ��B�i x �� y �����̐��ł���A�̔ے�j
*/
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

/*
	���K��� 4 - 11
	����\�����l����͂��A���̌��̏��߂���N���܂łɂ���j����\������v���O�������쐬���Ȃ����B

	�\������j���͈ȉ��̓��Ƃ��܂��B

	�P���F�����A���l�̓�
	�Q���F�����L�O�̓�
	�R���F�t���̓�
	�S���F���a�̓�
	�T���F���@�L�O���A�݂ǂ�̓��A���ǂ��̓�
	�V���F�C�̓�
	�X���F�h�V�̓��A�H���̓�
	�P�O���F�̈�̓�
	�P�P���F�����̓��A�ΘJ���ӂ̓�
	�P�Q���F�V�c�a����
*/
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

/*
	���K��� 4 - 12
	�D����齁i�����j��I�������A����ɑΉ��������b�Z�[�W��\������A齐肢�v���O�������쐬���Ȃ����B

	�� 	switch�����g�p����B
	�� 	�I���́A�g1�F�܂���@2�F���с@3�F���͂��D�D�D�h�̂悤�ȃK�C�h��\���������œ��͂�����B
	�� 	��ނ�齂łȂ��Ă��ǂ��B
*/
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

/*
	���K��� 4 - 13
	����\�����l����͂��A���̌��̓�����\������v���O�������쐬���Ȃ����B2 ���� 28 ���Ƃ��܂��B
	�܂��A1 �` 12 �ȊO�̐��l�����͂��ꂽ�ꍇ�ɁA�g���͂��Ԉ���Ă��܂��h�ƕ\�����Ȃ����B
*/
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