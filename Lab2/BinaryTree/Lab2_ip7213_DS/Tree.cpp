#include "stdafx.h"
#include "Tree.h"


string Tree::findLeft()
{
	Node * el = vertex;
	while (true) {
		if (el->left != NULL) {
			el = el -> left;
			continue;
		}
		else {
			return el->data;
		}
	}
	return string();
}

int Tree::find(string E)
{
	Node * finder = vertex;

	findReq(E, finder);

	return counter;
}

void Tree::findReq(string E, Node *f)
{
	
	if (f->data == E) {
		counter++;
	}
	if ( f->left != NULL )
		findReq(E, f->left);
	if (f->right != NULL)
		findReq(E, f->right);

}

void Tree::push(string a, string b)
{
	Node * itm = new Node();
	itm->left = nullptr;
	itm->right = nullptr;
	itm->key = a;
	itm->data = b;

	if (vertex == NULL) {
		vertex = itm;
	}
	else
	{
		Node * el = vertex;
		while (true) {
			if ( itm->key > el->key ) {
				if (el->right != NULL) {
					el = el->right;
					continue;
				}
				else {
					el->right = itm;
					break;
				}
			}
			else if ( itm->key < el->key ) {
				if (el->left != NULL) {
					el = el->left;
					continue;
				}
				else {
					el->left = itm;
					break;
				}
			}
			else {
				el->data = itm->data;
				break;
			}

		}
	}


}

Tree::Tree()
{
}


Tree::~Tree()
{
}
