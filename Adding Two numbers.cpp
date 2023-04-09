#include<iostream>
using namespace std;
class Node
{
	public:
		Node * next;
		int data;
		Node *insert(Node * head,int data)
		{
			Node * temp = new Node;
			temp->data = data;
			temp->next = NULL;
			if (head==NULL)
			{
				return temp;
			}
			else
			{
				Node * cur = head;
				while(cur ->next != NULL)
				{
					cur = cur->next;
				}
				cur->next = temp;
				return head;
			}	
		}
		void * display(Node *root)
		{
			Node * cur = root;
			while(cur!=NULL)
			{
				cout<<cur->data<<" ";
				cur = cur->next;
			}
		}
		Node *addnumbers(Node *list1,Node * list2)
		{
			Node * cur1 = list1;
			int value1 = 0;
			while(cur1 !=NULL)
			{
				value1 = value1*10 + cur1->data;
				cur1 = cur1 ->next;
			}
			
			Node * cur2 = list2;
			int value2 = 0;
			while(cur2 !=NULL)
			{
				value2 = value2*10 + cur2->data;
				cur2 = cur2 ->next;
			}
			int total = value1 + value2;
			int num= 0;
			int n = total;
			while(n>0)
			{
				num = num*10 + n%10;
				n = n/10;
			}
			Node * loki = NULL;
			while(num>0){
				loki = insert(loki,num%10);
				num = num/10;
			}
			return loki;	
		}
};
int main()
{
	Node n;
	Node * head1 = NULL;
	head1 = n.insert(head1,5);
	head1 = n.insert(head1,1);
	head1 = n.insert(head1,2);
	head1 = n.insert(head1,5);
	head1 = n.insert(head1,1);
	head1 = n.insert(head1,2);
	Node * head2 = NULL;
	head2 = n.insert(head2,4);
	head2 = n.insert(head2,4);
	head2 = n.insert(head2,3);
	n.display(head1);
	cout<<endl;
	n.display(head2);
	cout<<endl;
	Node * address = n.addnumbers(head1,head2);
	n.display(address);
}
