#include<iostream>
using namespace std;

void func(int a [][10], int* b[], int* c[10]) {//���ڽ� ù��° []�� ������ * -> a==(*)[10], b==**, c==**
	cout << a << " " << b << " " << c << endl;
}

int main() {
	int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int* p = arr;//
	int(*ap)[10] = &arr;//ap == p, but ap + 1 != p + 1 -> ap�� (*)[10], p�� *
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
	
	char arr_str[6] = "hello";//���ڿ� �� ���� �迭
	const char* ptr_str = "hello";//�ڵ� ���� ���ڿ� �ּ� ����Ŵ

	cout << "&arr: " << arr << endl;
	cout << "&arr: " << &arr << endl;//�迭 ��ü �ּ�
	cout << "p: " << p << endl;//�迭 ���� ���� �ּ�
	cout << "ap: " << ap << endl;
	cout << "&next_p: " << next_p << endl;
	cout << "&next_ap: " << next_ap << endl;

	cout << "sizeof(arr): " << sizeof(arr) << endl;//�迭 ũ��
	cout << "sizeof(p): " << sizeof(p) << endl;//������ ũ��

	
	//pointer to array > array to array != pointer to pointer > array to pointer, pointer to type < pointer 
	//pointer != array -> pointer > array
	//array == constant
	// (An array is a single, preallocated chunk of contiguous elements (all of the same type), fixed in size and location)
	// pointer is much more general data structure
	//T Ÿ���� �迭�� `lvalue'�� ���Ŀ��� ��Ÿ�� ������ �迭�� ù��° ��Ҹ� ����Ű�� �����ͷ� ����(decay)�˴ϴ�.
	//3���� ���� -> ���ڹ迭, &arr, sizeof(arr)
	return 0;
}
//�ڷ����� �ڷᱸ��, �߻� �ڷ����� �ڷ� ����, �ڷ� ������ �˰���, null�� nullptr�� null����
//stl�� standard library
//�����̳�(�ڷ� ��� ���ø� Ŭ����), �����̳� �����(�����̳� Ȱ���� ���� �ڷᱸ��), �ݺ���(�����̳� �ݺ��ϰ� �߻�ȭ)

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

//Key-Value ������ ���� ������ �� �ִ� �ڷᱸ���̴�.

//It is a type of Data Structure where the data elements get linearly or sequentially arranged. ��ҵ��� ���������� ������Ų ����, �ڷᰣ �յڰ��� 1��1
//It is a form of data structure where the data elements don��t stay arranged linearly or sequentially. ��ҵ��� ����������� ������Ų ����, �ڷᰣ �յڰ��� 1��n or n��n