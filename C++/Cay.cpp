#include <iostream>

struct Node
{
    int elem;
    Node* left;
    Node* right;
};

struct bstTree
{
    Node* root;
};

// Hàm đệ quy để tính tổng giá trị các nút có đủ 2 nút con
int sumNodesWithBothChildren(Node* node) {
    if (node == nullptr)
        return 0;

    int sum = 0;
    if (node->left && node->right) {
        sum += node->elem;
    }

    sum += sumNodesWithBothChildren(node->left);
    sum += sumNodesWithBothChildren(node->right);

    return sum;
}

// Hàm wrapper để tính tổng giá trị các nút có đủ 2 nút con trong cây nhị phân tìm kiếm
int sumNodesWithBothChildren(bstTree tree) {
    return sumNodesWithBothChildren(tree.root);
}

int main() {
    using namespace std;

    // Khởi tạo cây nhị phân tìm kiếm
    bstTree tree;
    tree.root = new Node{10, nullptr, nullptr};
    tree.root->left = new Node{5, nullptr, nullptr};
    tree.root->right = new Node{15, nullptr, nullptr};
    tree.root->left->left = new Node{3, nullptr, nullptr};
    tree.root->left->right = new Node{8, nullptr, nullptr};
    tree.root->right->left = new Node{12, nullptr, nullptr};
    tree.root->right->right = new Node{18, nullptr, nullptr};

    // Tính tổng giá trị các nút có đủ 2 nút con trong cây
    int sum = sumNodesWithBothChildren(tree);
    cout << "Tong gia tri cac nut co du 2 nut con trong cay: " << sum << endl;

    return 0;
}
