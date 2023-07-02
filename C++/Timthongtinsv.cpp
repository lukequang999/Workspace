// Tìm thông tin sinh viên trong cây dựa vào mã sinh viên
Node *findStudentByMaSV(SVTree &tree, int maSV)
{
	return treeSearch(maSV, tree.root);
}

Node *treeSearch(int maSV, Node *t)
{
	if (t == NULL || t->maSV == maSV)
		return t;
	if (maSV < t->maSV)
		return treeSearch(maSV, t->left);
	return treeSearch(maSV, t->right);
}
