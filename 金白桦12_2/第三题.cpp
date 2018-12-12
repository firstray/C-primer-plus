//3、使用STL中的两个栈实现自己队列模板类，实现判空、入队，出队，获取队头元素，清空等操作
//思路：1个栈专门用来入队，一个栈专门用来出队，每次操作判断两个栈是否有元素。
#include <iostream>
#include <stack>
using namespace std;
template<class T>
class MyQueue
{
public:
	//清空队列
	void clear()
	{
		while (!stack1.empty())
			stack1.pop();
		while (!stack2.empty())
			stack2.pop();
	}
	//入队
	void push(T data)
	{
		stack1.push(data);	//stack1用来 入队
	}
	//出队
	T pop()
	{
		if (stack2.size() == 0)	//stack2用来 出队，将stack1元素倒腾到stack2
		{
			while (stack1.size() > 0)
			{
				T top = stack1.top();
				stack1.pop();
				stack2.push(top);
			}
		}
		if (stack2.size() == 0)
			throw std::exception("queue is empty");
		T top = stack2.top();
		stack2.pop();
		return top;
	}
	//队尾
	T back()	//入队的，最后一个元素
	{
		if (stack1.size() > 0)	//stack1中有数据，栈顶为最后入队的元素
			return stack1.top();

		while (stack2.size() > 0) //stack1中没有数据，stack2中有元素，栈底为入队的最后一个元素，将stack2中的数据倒腾到stack1
		{
			T top = stack2.top();
			stack2.pop();
			stack1.push(top);
		}

		if (stack1.size() == 0)
			cout << "空队列";
		return stack1.top();
	}
	//队头
	T front()	//出队的，第一个元素，
	{
		if (stack2.size() == 0)	//stack2用来 出队，将stack1元素倒腾到stack2
		{
			while (stack1.size() > 0)
			{
				T top = stack1.top();
				stack1.pop();
				stack2.push(top);
			}
		}
		if (stack2.size() == 0)
			throw std::exception("queue is empty");
		return stack2.top();
	}
private:
	stack<T> stack1;
	stack<T> stack2;
};
int main(int argc, char *argv[])
{
	MyQueue<int> que;
	que.push(1);
	que.push(2);
	que.push(3);
	// 出队<-  1  2  3 <-入队
	cout << que.front() << endl;//1
	cout << que.back() << endl;	//3

	cout << que.pop() << endl;//1
	cout << que.pop() << endl;//2
	cout << que.pop() << endl;//3

	que.clear();

	system("pause");
	return 0;
}
