#pragma once
//#include</Program Files/Microsoft Visual Studio/2022/Community\VC/Tools/MSVC/14.43.34808/include/algorithm>
//#include<../iostream> �̰͵� �ǳ�...? ������ ����� �ϴµ�..
//#include"/Program Files/Microsoft Visual Studio/2022/Community\VC/Tools/MSVC/14.43.34808/include/algorithm" ���� ��θ� ���� include /�� ��Ʈ ���丮(��� ���� ������ �����ϴ� Ư���� ����)
//#include"../algorithm" ��� ��θ� ���� include ../�� ���� ���丮�� ���� ���丮
//#include<���.h> <>�� ���� ���� ����� ���丮�� ���� ��� ������ ã�⿡ �ű⿡ ��� ������ �־��ָ� ��� ����
//#include"algorithm" ""�� ������Ʈ���� ������� �ҽ� ����(���α׷��Ӱ� ���� ����->.c���� + .h����) ������ ���丮 ã��, �� �� ���� ���� ����� ���丮 ã���Ƿ� �� �� �� ���� ��� ���� �����ϸ� ��
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