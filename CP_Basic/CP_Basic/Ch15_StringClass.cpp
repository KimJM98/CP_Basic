#include"io.h"
#include<string>
/*
	String 클래스
		-문자열을 다루는 클래스
*/

void StringClass()

{
	char Character = 'A';
	char Char[6] = "Hello";

	string Word = "Hello World";
	cout << Word << endl;

	string Word2("World");
	cout << Word2 << endl;

	cout << Word.size() << endl;
	cout << Word.front() << endl;
	cout << Word.back() << endl;

	//sub string : 주어진 범위만큼 출력
	cout << Word.substr(5) << endl; //5번째 문자부터 출력
	cout << Word.substr(5,9) << endl; //5번째 문자부터 9개 출력

	Word2.push_back('A'); // 뒤에 원소를 붙여라
	cout << Word2 << endl;
	cout << Word2.size() << endl;
}