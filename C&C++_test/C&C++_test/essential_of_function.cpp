#pragma once
//#include</Program Files/Microsoft Visual Studio/2022/Community\VC/Tools/MSVC/14.43.34808/include/algorithm>
//#include<../iostream> 이것도 되네...? 빨간줄 생기긴 하는데..
//#include"/Program Files/Microsoft Visual Studio/2022/Community\VC/Tools/MSVC/14.43.34808/include/algorithm" 절대 경로를 통한 include /는 루트 디렉토리(담긴 파일 정보를 저장하는 특별한 파일)
//#include"../algorithm" 상대 경로를 통한 include ../는 현재 디렉토리의 상위 디렉토리
//#include<헤더.h> <>는 위의 절대 경로의 디렉토리를 보고 헤더 파일을 찾기에 거기에 헤더 파일을 넣어주면 사용 가능
//#include"algorithm" ""는 프로젝트마다 만들어진 소스 파일(프로그래머가 만든 파일->.c파일 + .h파일) 저장한 디렉토리 찾고, 그 후 위의 절대 경로의 디렉토리 찾으므로 둘 중 한 곳에 헤더 파일 존재하면 됨
#include<iostream>
using namespace std;
extern int a = 1;

class test {
public:
	static void print() {
		cout << "Hello World" << endl;
	}
	static int hp;
	int mp = 1;
};

int test::hp = 0;

int func(int c, int b) {
	int a = c + b;

	return a;
}

enum tenum {
	A,
	b,
	c,
};

int main() {
	test::hp = 1;
	cout << func(10, 20);

	test::print();

	test obj;
	
	obj.print();

	(int)tenum::A;
	tenum tobj = tenum::A;

	static int staint;

	staint = tenum::A;
	cout << staint;
	{ static int block=1; }
	//block=2;
	return 0;
}