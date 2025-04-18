#pragma once
#include<vector>
/*�޸��� �� ���κ����� ����/������ �̷������ ���� �迭 Ŭ���� std::vector�� �����ϴ� ���.
* 
* class std::vector<T,allocator>;
�̸��� �ټ� �̻��ϰ� �پ� ������ ���������δ� ũ�Ⱑ �ڵ����� ���� �Ҵ�Ǵ� �迭�̸� ������ �����ε� ���п� C����� �迭�� ���� ����ϰ� ����� �� �ִ�.
���� ��ġ ���� O(1), ���� ����/���� O(1), ���� ������ ���� ��ġ������ ����/���� O(n)�̴�.

constexpr void push_back(const T& item);
constexpr void push_back(T&& item);
C++11
��Ҹ� ���ڷ� �޾� ������ �� ���ʿ� �ϳ� �߰��Ѵ�.

constexpr void append_range(container-compatible-range<T> Range&& range);
C++23
������ ������ ������ �� ���ʿ� ���޾� �߰��Ѵ�.

constexpr void pop_back();
������ �� ���ʿ� �ִ� ��Ҹ� �ϳ� �����Ѵ�.

constexpr void insert(const_iterator pos, const T& item);
constexpr void insert(const_iterator pos, T&& item);
C++11
������ ��ȸ���� ���ʿ� ��Ҹ� �ϳ� �߰��Ѵ�. const_iterator�� �ش� ������ ��ȸ�ڸ� ����� �� �ִ�.

constexpr void insert(const_iterator pos, size_type count, const T& copy_item);
constexpr void insert(const_iterator pos, InputIterator first, InputIterator last);
constexpr void insert(const_iterator pos, initializer_list<T> list);
constexpr void
insert_range(const_iterator pos, container-compatible-range<T> Range&& range);
C++23
������ ��ȸ���� ���ʿ� ��Ҹ� ���� �� ���޾� �߰��Ѵ�. const_iterator�� �ش� ������ ��ȸ�ڸ� ����� �� �ִ�.

constexpr void erase(iterator pos);
constexpr void erase(const_iterator pos);
constexpr void erase(iterator first, iterator last);
constexpr void erase(const_iterator first, const_iterator last);
������ ��ȸ�� Ȥ�� ��ȸ�� ���� ���� ��Ҹ� ��� �����Ѵ�. �׷��� �Ҵ�� �޸� ������ ������ �ʴ´�.

constexpr void clear();
������ ��Ҹ� ��� �����Ѵ�. �׷��� �Ҵ�� �޸� ������ ������ �ʴ´�.

[[nodiscard]] constexpr size_tsize() const noexcept;
������ ũ�⸦ ��ȣ���� ���������� ��ȯ�Ѵ�.

[[nodiscard]] constexpr bool empty() const noexcept;
���Ͱ� ����ִ��� �ƴ��� ���θ� ��ȯ�Ѵ�.
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