#include <iostream>
using namespace std;

struct celltype {
	string s;
	celltype* next;
};

typedef celltype* LinkedList;

int main()
{
	
	LinkedList head = new celltype;
	LinkedList second = new celltype;
	LinkedList third = new celltype;
	/*创建三个结点的链表*/
	head->next = second;
	head->s = "num1";
	second->next = third;
	second->s = "num2";
	third->next = NULL;
	third->s = "num3";

	LinkedList P = second;

	//second = second->next;
	//head->next = second->next;
  /*测试引用&*/
	LinkedList& FD = head->next;
	//LinkedList FD = head->next;
	FD = FD->next;

	/*测试delete删除的是指针指向的地址空间*/
	//delete P;
	//delete second;
	second = new celltype;
	/**输出**/
	LinkedList F=head;
	while (F) {
		cout <<F->s <<endl;
		F = F->next;
	}
}

