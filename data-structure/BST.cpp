#include<iostream>
#include<queue>
#include<utility>
#include<algorithm>
#include<string>
using namespace std;

class bst
{
private:
	struct node
	{
		int data;
		node*left,*right;
	};
	node*root;

	void addhelper(node*temp, int item)
	{
		node*newitem=new node;
		newitem->data=item;
		newitem->left=NULL;
		newitem->right=NULL;
		if(temp->data<=item)
		{
			if(temp->left!=NULL)
			{
				addhelper(temp->left,item);
			}
			else
			{
				temp->left=newitem;
			}
		}
		else
		{
			if(temp->right!=NULL)
			{
				addhelper(temp->right,item);
			}
			else
			{
				temp->right=newitem;
			}
		}

	}

	int getminhelp(node*temp)
	{

		if(temp->left==NULL)
		{
			return temp->data;
		}
		else
		{
			return getminhelp(temp->left);
		}
	}
	int gitmaxhelp(node*temp)
	{
		if(temp->right==NULL)
			return temp->data;
		else
			return gitmaxhelp(temp->right);
	}
	int githeighthelper(node*temp)
	{
		if(root==NULL)
			return -1;
		int left=githeighthelper(temp->left);
		int right=githeighthelper(temp->right);

		return 1+max(left,right);
	}
	node*removehelper(node*root,int data )
	{
		if(root==NULL)
			return 0;
		else if(data<root->data)
		{
			root->left=removehelper(root->left,data);
		}
		else if(data>root->data)
		{
			root->right=removehelper(root->right,data);
		}
		else
		{
			if(root->left==NULL)
			{
				node*temp=root->right;
				delete root;
				return temp;
			}
			else if(root->right==NULL)
			{
				node*temp=root->left;
				delete root;
				return temp;
			}
			else
			{
				int maxvalue=this->gitmaxhelp(root->left);
				root->data=maxvalue;
				root->left=removehelper(root->left,maxvalue);
			}
		}
		return root;
	}
	int preorder(node*p)
	{
		if(p!=NULL)
		{
			cout<<p->data<<" ";
			preorder(p->left);
			preorder(p->right);
		}
	}
	int inorder(node*p)
	{
		if(p!=NULL)
		{
			inorder(p->left);
			cout<<p->data<<" ";
			inorder(p->right);

		}
	}
	int postorder(node*p)
	{
		if(p!=NULL)
		{
			postorder(p->left);
		postorder(p->right);
		cout<<p->data<<" ";
		}
	}
	int searchrechelp(node*temp, int item)
	{
		if(temp==NULL) return false;
		if(temp->data==item) return true;
		else if (temp->data>item) return searchrechelp(temp->left, item);
		else   return searchrechelp(temp->right, item);
	}
public:
	void add(int item)
	{
		node*newitem=new node;
		newitem->data=item;
		newitem->left=NULL;
		newitem->right=NULL;
		if(root== NULL)
		{
			root=newitem;
		}
		node*temp,*parent;
		temp=root;
		while(temp!=NULL)
		{
			parent=temp;
			if(temp->data<=item)
			{
				temp=temp->left;
			}
			else
			{
				temp=temp->right;
			}
		}
		if(parent->data<=item)
			temp->right=newitem;
		else
			temp->left=newitem;
	
	}

	void addrec(int item)
	{
		if(root==NULL)
		{

		node*newitem=new node;
		newitem->data=item;
		newitem->left=NULL;
		newitem->right=NULL;
		root=newitem;
		}
		else
		{
			addhelper(root,item);
		}
	}
	int getmax()
	{
		node*temp=root;
		while(temp->left!=NULL)
		{
			temp=temp->left;
		}
		return temp->data;
	}
	int getmin()
	{
		node*temp=root;
		while(temp->right!=NULL)
		{
			temp=temp->right;
		}
		return temp->data;
	}

	int getmaxrec()
	{
		return gitmaxhelp(root);
	}
	int gitminrec()	
	{
		return getminhelp(root);
	}
	int githeight()
	{
		if(root==NULL)
			return -1;
		else
			return githeighthelper(root);
	}
	void bfs()
	{

		queue<node*>q;
		q.push(root);
		while(!q.empty())
		{
			node*current=q.front();
			q.pop();
			cout<<current->data;
			if(current->left!=NULL)
				q.push(current->left);
			if(current->right!=NULL)
				q.push(current->right);

		}
	}
	void remove(int data)
	{
		root=removehelper(root,data);
	}
	void inorderTraversal()
{
	inorder(root);
}


void preorderTraversal()
{
	preorder(root);
}


void postorderTraversal()
{
	postorder(root);
}
bool search(int element)
{
	node*temp=root;
	while(temp!=NULL)
	{
		if(temp->data==element)
			return true;
		else if(temp->data>element)
			temp=temp->left;
		else
			temp=temp->right;
	}
	return false;
}
bool searchrec(int item)
{
	return searchrechelp(root, item);
}

	

};


int main()
{

	bst s; 
	s.addrec(8);
	s.addrec(5);
	s.addrec(13);
s.addrec(3);
s.addrec(7);
	s.addrec(10);
	s.addrec(15);
	cout<<s.getmaxrec();
}