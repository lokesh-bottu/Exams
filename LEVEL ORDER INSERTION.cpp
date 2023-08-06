#include<iostream>
#include<queue>
using namespace std;

class node
{
	public:
		int data;
		node *left;
		node * right;
		node(int x)
		{
			data = x;
			left = NULL;
			right = NULL;
		}
		node * insert(queue<node*> &que,node *head,int data);
		void levelordertraversal(node * head);	
		void mirrorview(node * head);
};
node * cur = NULL;
void node::mirrorview(node *head)
{
	if(head == NULL)
	{
		cout<<"List is Empty";
	}
	else
	{
		cout<<"Mirror View of the binary Tree"<<endl;
		node *next = head;
		queue<node *> ans;
		ans.push(next);
		while(!ans.empty())
		{
			cout<<next->data<<" ";
			if(next->right != NULL)
			{
				ans.push(next->right);
			}
			if(next->left != NULL)
			{
				ans.push(next->left);
			}
			ans.pop();
			next = ans.front();
		}
	}
	
} 
node* node::insert(queue<node*> &que,node *head,int data)
{
	node * temp = new node(data);
	if(que.size()==0)
	{
		que.push(temp);
		cur = temp;
		return temp;
	}
	else
	{
		if(cur->left == NULL)
		{
			cur->left = temp;
			que.push(temp);
			
		}
		else if(cur->right == NULL)
		{
			cur->right = temp;
			que.push(temp);
		}
		else
		{
			que.pop();
			cur = que.front();
			cur->left = temp;
		}
	}
	return head;
}
void node::levelordertraversal(node *head)
{
	if(head == NULL)
	cout<<"List is empty"<<endl;
	else
	{
		queue<node *> dis;
		dis.push(head);
		node *present = head;
		while(!dis.empty())
		{
			cout<<present->data<<" ";
			if(present->left != NULL)
				dis.push(present->left);
			if(present->right != NULL)
				dis.push(present->right);
			dis.pop();
			present = dis.front();
		}
	}
}
int main()
{
	queue<node*> que;
	node obj(0);
	node * head = NULL;
	head = obj.insert(que,head,15);
	head = obj.insert(que,head,20);
	head = obj.insert(que,head,2);
	head = obj.insert(que,head,0);
	head = obj.insert(que,head,14);
	head = obj.insert(que,head,8);
	head = obj.insert(que,head,95);
	head = obj.insert(que,head,30);
	obj.levelordertraversal(head);
	obj.mirrorview(head);
}
