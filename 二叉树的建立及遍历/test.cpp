//#include<iostream>
//#include<string>
//#include<vector>
//#include<cstdlib>
//using namespace std;
//#define MAXSIZE 100
//typedef struct bitnode
//{
//	char data;
//	struct bitnode* lchild, * rchild;
//}bitnode,*bitree;
//typedef struct sqqueue
//{
//	bitree* base;
//	int front;
//	int rear;
//};
//void initqueue(sqqueue& q)//�������
//{
//	q.base = new bitree[MAXSIZE];
//	if (!q.base) exit(0);
//	q.front = q.rear=0;
//}
//void enqueue(sqqueue& q, bitree& t)//���
//{
//	q.base[q.rear] = t;
//	q.rear++;
//}
//bitree outqueue(sqqueue& q)//����
//{
//	bitree t;
//	t = q.base[q.front];
//	q.front++;
//	return t;
//}
//void create(bitree& t)//�����������������
//{
//	char ch;
//	cin >> ch;
//	if (ch == '*')
//		t = NULL;
//	else
//	{
//		t = new bitnode;
//		t->data = ch;
//		create(t->lchild);
//		create(t->rchild);
//	}
//}
//void preorder(bitree t)//�������
//{
//	if (t)
//	{
//		cout << t->data<<" ";
//		preorder(t->lchild);
//		preorder(t->rchild);
//	}
//}
//void seqder(bitree t)//�������
//{
//	sqqueue q;
//	initqueue(q);
//	enqueue(q, t);
//	while (q.rear != q.front)
//	{
//		bitree root = outqueue(q);
//		if (!root)
//		{
//			exit(0);
//		}
//		cout << root->data << " ";
//		if (root->lchild)
//			enqueue(q, root->lchild);
//		if (root->rchild)
//			enqueue(q, root->rchild);
//	}
//}
//int main()
//{
//	
//	bitree t;
//	create(t);
//	seqder(t);
//	return 0;
//}