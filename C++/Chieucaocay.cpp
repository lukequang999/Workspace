// Tính chiều cao của cây
int treeHeight(Node *t)
{
	if (t == NULL)
		return -1;
	int leftHeight = treeHeight(t->left);
	int rightHeight = treeHeight(t->right);
	return 1 + max(leftHeight, rightHeight);
}
