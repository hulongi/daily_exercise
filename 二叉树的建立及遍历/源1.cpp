#include<iostream>
using namespace std;
#define MAXSIZE 100
typedef struct bitnode
{
	char data;
	bitnode* lchild;
	bitnode* rchild;
}bitnode,*bittree;

typedef struct sqqueue
{
	bittree* base;
	int front, rear;
};

void initsqueue(sqqueue& q)
{
	q.base = new bittree[MAXSIZE];
	q.front = q.rear = 0;
}

void ensqqueue(sqqueue& q, bittree& t)
{
	q.base[q.rear] = t;
	q.rear++;
}

bittree outsqqueue(sqqueue& q)
{
	bittree t = q.base[q.front];
	q.front++;
	return t;
}

void precreate(bittree &T)//先序遍历创建二叉树
{
	char data;
	cin >> data;
	if (data == '*')
		T = NULL;
	else
	{
		T = new bitnode;
		T->data = data;
		precreate(T->lchild);
		precreate(T->rchild);
	}
}

void inordercreate(bittree& T)//中序遍历创建二叉树
{
	char data;
	cin >> data;
	if (data == '*')
		T = NULL;
	else
	{
		T = new bitnode;
		inordercreate(T->lchild);
		T->data = data;
		inordercreate(T->rchild);
	}
}

void postcreate(bittree& T)//后序遍历创建二叉树
{
	char data;
	cin >> data;
	if (data == '*')
		T = NULL;
	else
	{
		T = new bitnode;
		postcreate(T->lchild);
		postcreate(T->rchild);
		T->data = data;
	}
}

void pretravl(bittree& T)
{
	if (T)
	{
		cout << T->data << " ";
		pretravl(T->lchild);
		pretravl(T->rchild);
	}
}

void inordertravl(bittree& T)
{
	if (T)
	{
		inordertravl(T->lchild);
		cout << T->data << " ";
		inordertravl(T->rchild);
	}
}

void posttravl(bittree& T)
{
	if (T)
	{
		posttravl(T->lchild);
		posttravl(T->rchild);
		cout << T->data << " ";
	}
}

void seqder(bittree T)//层序遍历
{
	sqqueue q;
	initsqueue(q);
	ensqqueue(q, T);
	while (q.rear != q.front)
	{
		bittree root = outsqqueue(q);
		if (!root)
			return;
		cout << root->data << " ";
		seqder(root->lchild);
		seqder(root->rchild);
	}
}
int main()
{
	return 0;
}