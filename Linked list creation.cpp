#include <iostream>
#include <string>
using namespace std;

struct node {
	int data;
	node* next;
};






void initnode(node *head, int n)
{
	head->data = n;
	head->next = NULL;
}






void addnode(node *head, int n)
{

	node *newnode = new node;
	newnode->data = n;
	newnode->next = NULL;

	node *cur = head;
	while (cur)
	{
		if (cur->next == NULL)
		{
			cur->next = newnode;
			return;
		}
		cur = cur->next;
	}

}






void insertfront(node **headptr, int n)
{

	node *newnode = new node;
	newnode->data = n;
	newnode->next = *headptr;

	*headptr = newnode;
}





node *searchnode(node *head, int n)
{
	node *cur = head;
	while (cur) {
		if (cur->data == n)
			return cur;
		cur = cur->next;
	}
	cout << "No Node Containning Data field" << n << "Found on list.\n\n";
	cur = NULL;
	return cur;
}


bool deletenode(node **headptr, node *ptrDel)
{
	if (ptrDel == NULL)
		return false;

	node * cur = *headptr;

	if (ptrDel == *headptr) {
		*headptr = cur->next;
		delete ptrDel;
		return true;
	}





	while (cur) {
		if (cur->next = ptrDel) {
			cur->next = ptrDel->next;
			delete ptrDel;
			return true;
		}
		cur = cur->next;
	}
	return false;
}


void dLL(node **nextnode)
{
	node*tmpnode;
	while (*nextnode)
	{
		tmpnode = *nextnode;
		*nextnode = tmpnode->next;
		delete tmpnode;
	}
}


void display(node *head)
{
	node *list = head;
	while (list)
	{
		cout << list->data << " ";
		list = list->next;
	}

	cout << endl;
	cout << endl;
}



int main()
{

	node * head = new node;
	int sval;
	node *ptrDelete;


	int data[] = { 21,23,45,67,78 };
	int n = 5;
	int i;


	initnode(head, data[0]);
	display(head);


	for (i = 1; i<n; i++)
	{
		addnode(head, data[i]);
		display(head);
	}



	insertfront(&head, -3);
	display(head);


	sval = 125;
	ptrDelete = searchnode(head, sval);
	if (deletenode(&head, ptrDelete))
	{
		cout << "Node containing " << sval << "has been deleted\n";
		cout << "The new list after the delete is\n";
		display(head);
	}


	sval = data[3];
	ptrDelete = searchnode(head, sval);
	if (deletenode(&head, ptrDelete))
	{
		cout << "Node containing " << sval << "has been deleted\n";
		cout << "The new list after the delete is\n";
		display(head);
	}


	sval = -3;
	ptrDelete = searchnode(head, sval);
	if (deletenode(&head, ptrDelete))
	{
		cout << "Node containing " << sval << "has been deleted\n";
		cout << "The new list after the delete is\n";
		display(head);
	}

	cout << endl;
	cout << "De-allocating the linked list\n";
	dLL(&head);
	display(head);

	return 0;

}