//#include<iostream>
//#include<malloc.h> 
//#include<stdio.h>
//using namespace std;
//struct BiTNode {
//	BiTNode* l;
//	BiTNode* r;
//	char ch;
//};
//struct Queue {
//	BiTNode* p;
//};
//BiTNode* func();
//void read(BiTNode* T);
//int main()
//{
//	BiTNode* Tree = func();
//	read(Tree);
//	return 0;
//}
//BiTNode* func()
//{
//	char ch;
//	cin >> ch;
//	char s = 0;
//	s = getchar();
//	BiTNode* root;
//	if (s == '\n')
//	{
//		return NULL;
//	}
//	if (ch == '*')
//	{
//		root = NULL;
//	}
//	else
//	{
//		root = new BiTNode();
//		root->ch = ch;
//		root->l = func();
//		root->r = func();
//	}
//	return root;
//}
//
//void read(BiTNode* T)
//{
//	int left = -1;
//	int right = -1;
//	if (T == NULL)
//	{
//		return;
//	}
//	Queue q[100];
//	q[++right].p = T;
//	while (left < right)
//	{
//		Queue q1 = q[++left];
//		if (q1.p->l != NULL)
//		{
//			q[++right].p = q1.p->l;
//		}
//		if (q1.p->r != NULL)
//		{
//			q[++right].p = q1.p->r;
//		}
//		cout << q1.p->ch << " ";
//	}
//}