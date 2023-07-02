#include<bits/stdc++.h>
using namespace std ;
typedef double item ;
struct Node {
	item data ;
	Node *next ;
};
typedef Node *List ;
List L ;
void Init(List &L) {
	L = NULL ;
}
Node *CreateNode(item init_data) {
	Node *node = new Node ;
	node->data = init_data ;
	node->next = NULL ;
	return node ;
}
int main() {
	
}
