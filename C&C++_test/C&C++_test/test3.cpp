#pragma once
#include<vector>
/*메모리의 맨 끝부분으로 삽입/삭제가 이루어지는 동적 배열 클래스 std::vector를 제공하는 모듈.
* 
* class std::vector<T,allocator>;
이름이 다소 이상하게 붙어 있지만 개념적으로는 크기가 자동으로 동적 할당되는 배열이며 연산자 오버로딩 덕분에 C언어의 배열과 거의 비슷하게 사용할 수 있다.
임의 위치 참조 O(1), 끝에 삽입/삭제 O(1), 끝을 제외한 임의 위치에서의 삽입/삭제 O(n)이다.

constexpr void push_back(const T& item);
constexpr void push_back(T&& item);
C++11
요소를 인자로 받아 벡터의 맨 뒤쪽에 하나 추가한다.

constexpr void append_range(container-compatible-range<T> Range&& range);
C++23
지정한 범위를 벡터의 맨 뒤쪽에 연달아 추가한다.

constexpr void pop_back();
벡터의 맨 뒤쪽에 있는 요소를 하나 제거한다.

constexpr void insert(const_iterator pos, const T& item);
constexpr void insert(const_iterator pos, T&& item);
C++11
지정한 순회자의 뒤쪽에 요소를 하나 추가한다. const_iterator는 해당 벡터의 순회자만 사용할 수 있다.

constexpr void insert(const_iterator pos, size_type count, const T& copy_item);
constexpr void insert(const_iterator pos, InputIterator first, InputIterator last);
constexpr void insert(const_iterator pos, initializer_list<T> list);
constexpr void
insert_range(const_iterator pos, container-compatible-range<T> Range&& range);
C++23
지정한 순회자의 뒤쪽에 요소를 여러 개 연달아 추가한다. const_iterator는 해당 벡터의 순회자만 사용할 수 있다.

constexpr void erase(iterator pos);
constexpr void erase(const_iterator pos);
constexpr void erase(iterator first, iterator last);
constexpr void erase(const_iterator first, const_iterator last);
지정한 순회자 혹은 순회자 범위 내의 요소를 모두 삭제한다. 그러나 할당된 메모리 공간은 줄이지 않는다.

constexpr void clear();
벡터의 요소를 모두 삭제한다. 그러나 할당된 메모리 공간은 줄이지 않는다.

[[nodiscard]] constexpr size_tsize() const noexcept;
벡터의 크기를 부호없는 정수형으로 반환한다.

[[nodiscard]] constexpr bool empty() const noexcept;
벡터가 비어있는지 아닌지 여부를 반환한다.
*/
#include<iostream>
#include<stack>
#include<deque>
#include<queue>
#include<algorithm>
#include<string>
using namespace std;

int main() {
	int val = 1;
	vector<int> a;
	a.push_back(1);
	a.push_back(val);
	for (int i = 0; i < 10; ++i) {
		a.push_back(i);
	}
	a.size();
	vector<int>::iterator iter = a.begin();
	vector<int>::const_iterator con_iter = a.begin();
	con_iter = a.end();
	iter = a.erase(iter);
	iter = a.erase(iter, iter + 1);
	a.pop_back();

	stack<int> stk;
	stk.push(1);

	queue<int> que;
	que.push(1);

	priority_queue<int> pri_que;
	pri_que.push(1);

	deque<int> deq;

	char const* st1 = "he";
	//char* const st2 = "he";
	
	return 0;
}