#pragma once
#include <string>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <fstream>
//////////////////////////////////////////////
using namespace std;
struct node
{
	string word;
	string mean;
	node *right;
	node *left;
	int height;
};
class AVLTree
{
private:
	node * root;
	void makeEmpty(node* t);
	node* insert(string ,string, node* t);
	node* singleRightRotate(node* &t);
	node* singleLeftRotate(node* &t);
	node* doubleLeftRotate(node* &t);
	node* doubleRightRotate(node* &t);
	node* remove(string x, node* t);
	int height(node* t);
	void inorder(node* t, ofstream &f);
	node* findMin(node* t);
	node* findMax(node* t);
	string find(string word, node *t);
	void edit(string word, string mean, node *t);
	int countNode(node *t)
	{
		if (t == NULL) return 0;
		return countNode(t->left) + countNode(t->right) + 1;
	}
public:
	node * getRoot() { return root; }
	void setRoot(node *t) { root = t; }
	AVLTree(){root = NULL;}
	~AVLTree()
	{
		makeEmpty(root);
	}
	void insertLoad(string mean, string word)
	{
		if (find(word, root) == "Not found!")
			root = insert(word, mean, root);
	}
	int height() { return root->height; }
	string load(string file)
	{
		stringstream st;
		ifstream Dicfile(file);
		if (!Dicfile.is_open())
		{
			st << "Error loading file!" << endl;
		}
		else
		{
			while (!Dicfile.eof())
			{
				string s;
				getline(Dicfile, s);
				size_t foundPos = s.find("  ", 0);
				if (foundPos != string::npos&&s[0] != '-')
				{
					string word = s.substr(0, foundPos);
					string mean = s.substr(foundPos + 2, s.size());
					insertLoad(mean, word);
					//cout << "Load success word " << word << " !\n";
				}
			}
			st << "Load " << file << " success!";
		}
		return st.str();
	}
	string insert(string word, string mean )
	{	
		stringstream tf;
		if (find(word,root) != "Not found!") tf << word <<" already exist!\n";
		else
		{
			root = insert(word, mean, root);
			tf << "Insert "<<word<<" success!\n";
		}
		return tf.str();
	}

	string remove(string word)
	{
		stringstream st;
		if(find(word,root) == "Not found!") st << "Word isn't exist. Remove fail!\n";
		root = remove(word, root);
		st << "Remove "<<word<<" success!\n";
		return st.str();
	}

	string save(string File)
	{
		stringstream st;
		ofstream file(File);
		if (!file.is_open()) return "Save file fail!";
		inorder(root,file);
		st << "Save " << File << " success!";
		return st.str();
	
	}
	string find(string word)
	{
		stringstream st;
		string s = find(word, root);
		if (s == "Not found!") st << s << endl;
		else
		{
			st << word<<" mean " << s << endl;
		}
		return st.str();
	}
	string edit(string word,string mean)
	{
		stringstream st;
		string s = find(word, root);
		if (s == "Not found!")st << "Word not found. Edit fail!\n";
		else
		{
			st << "Edit success!\n";
			edit(word, mean, root);
		}
		return st.str();
	}
	int memory()
	{
		return countNode(root) * sizeof(node);
	}
};

