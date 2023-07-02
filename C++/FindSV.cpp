int maSVToFind;
cout << "Nhap vao ma sinh vien can tim: ";
cin >> maSVToFind;
Node *foundStudent = findStudentByMaSV(tree, maSVToFind);
if (foundStudent != NULL)
{
    cout << "Tim thay sinh vien: " << foundStudent->hoTen << endl;
}
else
{
    cout << "Khong tim thay sinh vien co ma " << maSVToFind << endl;
}
