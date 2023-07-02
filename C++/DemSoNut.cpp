// Đếm số nút trong cây
int countNodes(Node *t)
{
	if (t == NULL)
		return 0;
	return 1 + countNodes(t->left) + countNodes(t->right);
}

// Đếm số nút lá trong cây (nút lá là nút không có con)
int countLeaves(Node *t)
{
	if (t == NULL)
		return 0;
	if (t->left == NULL && t->right == NULL)
		return 1;
	return countLeaves(t->left) + countLeaves(t->right);
}

// Đếm số nút có đủ hai con trong cây
int countNodesWithTwoChildren(Node *t)
{
	if (t == NULL)
		return 0;
	if (t->left != NULL && t->right != NULL)
		return 1 + countNodesWithTwoChildren(t->left) + countNodesWithTwoChildren(t->right);
	return countNodesWithTwoChildren(t->left) + countNodesWithTwoChildren(t->right);
}
