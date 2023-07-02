#include <iostream>

using namespace std;

typedef float T;

struct Vector {
    int size;
    int capacity;
    T* array;
};

void vecInit(Vector& vec, int initCapacity = 16) {
    vec.size = 0;
    vec.capacity = initCapacity;
    vec.array = new T[initCapacity];
}

void vecDestroy(Vector& vec) {
    delete[] vec.array;
    vec.size = 0;
    vec.capacity = 0;
    vec.array = nullptr;
}

void vecCopy(Vector& vec, Vector& vec2) {
    vec.size = vec2.size;
    vec.capacity = vec2.capacity;
    vec.array = new T[vec.capacity];
    for (int i = 0; i < vec.size; i++) {
        vec.array[i] = vec2.array[i];
    }
}

int vecGetSize(Vector& vec) {
    return vec.size;
}

bool vecIsEmpty(Vector& vec) {
    return vec.size == 0;
}

T vecGetElem(Vector& vec, int index) {
    if (index >= 0 && index < vec.size) {
        return vec.array[index];
    } else {
        cout << "Invalid index.\n";
        return T();
    }
}

void vecSetElem(Vector& vec, int index, T newValue) {
    if (index >= 0 && index < vec.size) {
        vec.array[index] = newValue;
    } else {
        cout << "Invalid index.\n";
    }
}

void vecExpand(Vector& vec, int newCapacity) {
    if (newCapacity > vec.capacity) {
        T* newArray = new T[newCapacity];
        for (int i = 0; i < vec.size; i++) {
            newArray[i] = vec.array[i];
        }
        delete[] vec.array;
        vec.array = newArray;
        vec.capacity = newCapacity;
    }
}

void vecPushBack(Vector& vec, T newElement) {
    if (vec.size >= vec.capacity) {
        vecExpand(vec, vec.capacity * 2);
    }
    vec.array[vec.size] = newElement;
    vec.size++;
}

void vecInsert(Vector& vec, int pos, T newElement) {
    if (pos < 0 || pos > vec.size) {
        cout << "Invalid position.\n";
        return;
    }
    if (vec.size >= vec.capacity) {
        vecExpand(vec, vec.capacity * 2);
    }
    for (int i = vec.size - 1; i >= pos; i--) {
        vec.array[i + 1] = vec.array[i];
    }
    vec.array[pos] = newElement;
    vec.size++;
}

void vecPopBack(Vector& vec) {
    if (vec.size > 0) {
        vec.size--;
    } else {
        cout << "Vector is empty.\n";
    }
}

void vecClear(Vector& vec) {
    vec.size = 0;
}

void vecErase(Vector& vec, int pos) {
    if (pos < 0 || pos >= vec.size) {
        cout << "Invalid position.\n";
        return;
    }
    for (int i = pos; i < vec.size - 1; i++) {
        vec.array[i] = vec.array[i + 1];
    }
    vec.size--;
}

int main() {
    Vector vec;
    vecInit(vec);

    vecPushBack(vec, 10.5);
    vecPushBack(vec, 20.3);
    vecPushBack(vec, 30.7);
    vecInsert(vec, 1, 15.2); 
    vecSetElem(vec, 0, 5.1);
    vecErase(vec, 2);

    cout << "Vector size: " << vecGetSize(vec) << endl;

    for (int i = 0; i < vecGetSize(vec); i++) {
        cout << vecGetElem(vec, i) << " ";
    }
    cout << endl;

    vecClear(vec);

    vecDestroy(vec);

    return 0;
}
