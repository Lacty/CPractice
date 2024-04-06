
#pragma once


// ================================
// 文字列
// ================================


/*
   練習問題 7 - 1
   char 型の変数 a、b、c に文字‘A’、‘B’、‘C’を代入し、３文字連続して“ABC”と表示するプログラムを作成しなさい。
*/
void Prac7_1();

/*
   練習問題 7 - 2
   char 型の変数 a に文字‘A’を代入し、その変数に演算を施し、小文字‘a’にして表示するプログラムを作成しなさい。
   
   ※ 	文字コード（参考として）
   ‘A’= 0x41 = 65
   ‘a’= 0x61 = 97
*/
void Prac7_2();

/*
   練習問題 7 - 3
   列数を示す数値を入力し、‘a’〜‘z’の 26 文字を指定された列数に従って表示するプログラムを作成しなさい。
   
   例：列 7
   abcdefg
   hijklmn
   opqrstu
   vwxyz
*/
void Prac7_3();

/*
   練習問題 7 - 4
   次のコードに追加し、入力された数値を 16 桁の 2 進数で表示するプログラムを完成させなさい。
   
   char    sbinary[16];
   int     value;
   int     i;
   
   scanf( "%d", &value );
   
   // 配列 sbinaryに'0'か'1'を代入する
   
   printf( "%s", binary );
*/
void Prac7_4();

/*
   練習問題 7 - 5
   次のプログラムを作成しなさい。
   
   文字列を入力する。
   入力された文字列を表示する。
   ※ 	文字列の入力には scanf 関数を使用する。
*/
void Prac7_5();

/*
   練習問題 7 - 6
   文字列を入力し、その文字列の長さ（文字数）を表示するプログラムを作成しなさい。
   
   ※ 	標準関数を使用しないこと。
*/
void Prac7_6();

/*
   練習問題 7 - 7
   次のプログラムを作成しなさい。
   
   文字列を入力する。
   入力された文字列を逆順に表示する。
*/
void Prac7_7();

/*
   練習問題 7 - 8
   文字列を入力し、文字列中のアルファベット小文字を大文字に変換して表示するプログラムを作成しなさい。
   
   ※ 	printf 関数を 1 回だけ使用する。（ 1 文字ずつ表示してはいけない）
*/
void Prac7_8();

/*
   練習問題 7 - 9
   char 型の配列に“SPAM”という単語を 20 個分格納して表示するプログラムを作成しなさい。
   
   ※ 	標準関数を使用しないこと。
*/
void Prac7_9();

/*
   練習問題 7 - 10
   文字列を入力し、文字列中のアルファベット小文字を取り除いて表示するプログラムを作成しなさい。
*/
void Prac7_10();

/*
   練習問題 7 - 11
   次のコードに追加し、str1 に str2 を結合して表示するプログラムを完成させなさい。
   
   char    str1[100] = "Hello ";
   char    str2[] = "World";
   
   // str1にstr2を結合する
   
   printf( "%s\n", str1 );
*/
void Prac7_11();

/*
   練習問題 7 - 12
   次のコードに追加し、str の文字列を逆順にして表示するプログラムを完成させなさい。
   
   char str[] = "Hello World";
   
   // strの要素を逆順にする
   
   printf( "%s\n", str );
*/
void Prac7_12();