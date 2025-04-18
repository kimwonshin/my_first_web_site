#include<iostream>
using namespace std;

void func(int a [][10], int* b[], int* c[10]) {//인자시 첫번째 []는 무조건 * -> a==(*)[10], b==**, c==**
	cout << a << " " << b << " " << c << endl;
}

int main() {
	int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int* p = arr;//
	int(*ap)[10] = &arr;//ap == p, but ap + 1 != p + 1 -> ap는 (*)[10], p는 *
	int* next_p = (arr + 1);
	int(*next_ap)[10] = (&arr + 1);
	int** pp = (int**) & arr;// pp == &arr, *pp == arr, (*pp)[index] == *(arr + index)
	//int test = (*pp)[0];
	//cout << test << endl;(X)
	int* p_arr[10] = {arr + 1, nullptr};
	pp = p_arr;
	cout << "p_arr : " << *pp << endl;
	cout << "*p_arr : " << *pp << endl;
	cout << "pp : " << *pp << endl;
	cout << "*pp : " << *pp << endl;
	cout << "**pp : " << *pp << endl;
	
	char arr_str[6] = "hello";//문자열 값 가진 배열
	const char* ptr_str = "hello";//코드 영역 문자열 주소 가리킴

	cout << "&arr: " << arr << endl;
	cout << "&arr: " << &arr << endl;//배열 전체 주소
	cout << "p: " << p << endl;//배열 시작 원소 주소
	cout << "ap: " << ap << endl;
	cout << "&next_p: " << next_p << endl;
	cout << "&next_ap: " << next_ap << endl;

	cout << "sizeof(arr): " << sizeof(arr) << endl;//배열 크기
	cout << "sizeof(p): " << sizeof(p) << endl;//포인터 크기

	
	//pointer to array > array to array != pointer to pointer > array to pointer, pointer to type < pointer 
	//pointer != array -> pointer > array
	//array == constant
	// (An array is a single, preallocated chunk of contiguous elements (all of the same type), fixed in size and location)
	// pointer is much more general data structure
	//T 타입의 배열의 `lvalue'가 수식에서 나타날 때에는 배열의 첫번째 요소를 가리키는 포인터로 변경(decay)됩니다.
	//3가지 예외 -> 문자배열, &arr, sizeof(arr)
	return 0;
}
//자료형과 자료구조, 추상 자료형과 자료 구조, 자료 구조와 알고리즘, null과 nullptr과 null접근
//stl과 standard library
//컨테이너(자료 담는 템플릿 클래스), 컨테이너 어댑터(컨테이너 활용해 만든 자료구조), 반복자(컨테이너 반복하게 추상화)

//a data structure is a collection of data values, 
// the relationships among them, and the functions or operations that can be applied to the data,
// i.e., it is an algebraic structure about data.

//an abstract data type (ADT) is a mathematical model for data types, defined by its behavior (semantics)
//semantics is the rigorous mathematical study of the meaning of programming languages.
//The ADT defines the logical form of the data type. 
//The data structure implements the physical form of the data type.

//Abstract Data Type is a definition of new type, describes its properties and operations.

//Data Structure is an implementation of ADT.Many ADT can be implemented as the same Data Structure.
//Simply put, an ADT (Abstract Data Type) is more of a logical description, while a Data Structure is concrete.

//Data types define the kind of data a variable can hold, 
// while data structures organize and store data for efficient access and manipulation.

//a composite data type or compound data type is a data type that consists of programming language scalar data types and other composite types 
// that may be heterogeneous and hierarchical in nature.
//a combination of primitives and other data types.

//adt == ads

//a general-purpose data structure for storing a group of objects. 
// A dictionary has a set of keys and each key has a single associated value. When presented with a key, 
// the dictionary will return the associated value.

//Key-Value 형태의 값을 저장할 수 있는 자료구조이다.

//It is a type of Data Structure where the data elements get linearly or sequentially arranged. 요소들을 순차적으로 나열시킨 형태, 자료간 앞뒤관계 1대1
//It is a form of data structure where the data elements don’t stay arranged linearly or sequentially. 요소들을 비순차적으로 나열시킨 형태, 자료간 앞뒤관계 1대n or n대n