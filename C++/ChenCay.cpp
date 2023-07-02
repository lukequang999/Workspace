// Duyệt cây theo thứ tự trước (pre-order)
void preOrderTraversal(Node *t)
{
	if (t != NULL)
	{
		cout << t->maSV << " - " << t->hoTen << endl;
		preOrderTraversal(t->left);
		preOrderTraversal(t->right);
	}
}

// Duyệt cây theo thứ tự giữa (in-order)
void inOrderTraversal(Node *t)
{
	if (t != NULL)
	{
		inOrderTraversal(t->left);
		cout << t->maSV << " - " << t->hoTen << endl;
		inOrderTraversal(t->right);
	}
}

// Duyệt cây theo thứ tự sau (post-order)
void postOrderTraversal(Node *t)
{
	if (t != NULL)
	{
		postOrderTraversal(t->left);
		postOrderTraversal(t->right);
		cout << t->maSV << " - " << t->hoTen << endl;
	}
}
