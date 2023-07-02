#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next;
    Node* prev;
};

void addToEnd(Node*& head, int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
        head->prev = NULL;
    } else {
        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
    }
}

int findMax(Node* head) {
    if (head == NULL) {
        cout << "Danh sach lien ket doi rong." << endl;
        return -1;
    }

    int maxVal = head->data;
    Node* temp = head;
    while (temp != NULL) {
        if (temp->data > maxVal) {
            maxVal = temp->data;
        }
        temp = temp->next;
    }
    return maxVal;
}

void displayList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = NULL;
    int n, value;

    cout << "Nhap so luong phan tu trong danh sach: ";
    cin >> n;

    cout << "Nhap cac phan tu cua danh sach lien ket doi: ";
    for (int i = 0; i < n; ++i) {
        cin >> value;
        addToEnd(head, value);
    }

    cout << "Danh sach lien ket doi vua nhap: ";
    displayList(head);

    int maxVal = findMax(head);
    if (maxVal != -1) {
        cout << "Gia tri lon nhat trong danh sach lien ket doi la: " << maxVal << endl;
    }

    return 0;
}

