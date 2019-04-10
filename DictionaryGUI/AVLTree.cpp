#include "AVLTree.h"

void AVLTree::makeEmpty(node* t)
{
	if (t == NULL)
		return;
	makeEmpty(t->left);
	makeEmpty(t->right);
	delete t;
}

node* AVLTree::insert(string word,string mean, node* t)
{
	if (t == NULL)
	{
		t = new node;
		t->word = word;
		t->mean = mean;
		t->height = 0;
		t->left = t->right = NULL;
	}
	else if (word < t->word)
	{
		t->left = insert(word,mean, t->left);
		if (height(t->left) - height(t->right) == 2)
		{
			if (word < t->left->word)
				t = singleRightRotate(t);
			else
				t = doubleRightRotate(t);
		}
	}
	else if (word > t->word)
	{
		t->right = insert(word,mean, t->right);
		if (height(t->right) - height(t->left) == 2)
		{
			if (word > t->right->word)
				t = singleLeftRotate(t);
			else
				t = doubleLeftRotate(t);
		}
	}

	t->height = max(height(t->left), height(t->right)) + 1;
	return t;
}

node* AVLTree::singleRightRotate(node* &t)
{
	node* u = t->left;
	t->left = u->right;
	u->right = t;
	t->height = max(height(t->left), height(t->right)) + 1;
	u->height = max(height(u->left), t->height) + 1;
	return u;
}

node* AVLTree::singleLeftRotate(node* &t)
{
	node* u = t->right;
	t->right = u->left;
	u->left = t;
	t->height = max(height(t->left), height(t->right)) + 1;
	u->height = max(height(t->right), t->height) + 1;
	return u;
}

node* AVLTree::doubleLeftRotate(node* &t)
{
	t->right = singleRightRotate(t->right);
	return singleLeftRotate(t);
}

node* AVLTree::doubleRightRotate(node* &t)
{
	t->left = singleLeftRotate(t->left);
	return singleRightRotate(t);
}


node* AVLTree::remove(string x, node* t)
{
	node* temp;

	if (t == NULL)
		return NULL;

	else if (x < t->word)
		t->left = remove(x, t->left);
	else if (x > t->word)
		t->right = remove(x, t->right);
	else if (t->left && t->right)
	{
		temp = findMin(t->right);
		t->word = temp->word;
		t->right = remove(t->word, t->right);
	}
	else
	{
		temp = t;
		if (t->left == NULL)
			t = t->right;
		else if (t->right == NULL)
			t = t->left;
		delete temp;
	}
	if (t == NULL)
		return t;

	t->height = max(height(t->left), height(t->right)) + 1;

	if (height(t->left) - height(t->right) == 2)
	{
		if (height(t->left->left) - height(t->left->right) == 1)
			return singleLeftRotate(t);
		else
			return doubleLeftRotate(t);
	}
	else if (height(t->right) - height(t->left) == 2)
	{
		if (height(t->right->right) - height(t->right->left) == 1)
			return singleRightRotate(t);
		else
			return doubleRightRotate(t);
	}
	return t;
}
node* AVLTree::findMin(node* t)
{
	if (t == NULL)
		return NULL;
	else if (t->left == NULL)
		return t;
	else
		return findMin(t->left);
}

node* AVLTree::findMax(node* t)
{
	if (t == NULL)
		return NULL;
	else if (t->right == NULL)
		return t;
	else
		return findMax(t->right);
}

int AVLTree::height(node* t)
{
	return (t == NULL ? -1 : t->height);
}
void AVLTree::inorder(node* t,ofstream &f)
{
	if (t == NULL)
		return;
	inorder(t->left,f);
	f << t->word << "  " << t->mean << endl;
	inorder(t->right,f);
}
string AVLTree::find(string word, node *t)
{
	if (t == NULL) return "Not found!";
	if (t->word == word) return t->mean;
	if (t->word < word) return find(word, t->right);
	return find(word, t->left);
}
void AVLTree::edit(string word, string mean, node *t)
{
	if (t == NULL) return;
	if (t->word == word)t->mean = mean; 
	if (t->word < word)  edit(word,mean, t->right);
	if (t->word > word)  edit(word, mean, t->left);
}