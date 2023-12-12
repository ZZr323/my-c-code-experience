#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* createCircularLinkedList(int n) {
    struct Node* head = NULL;
    struct Node* current = NULL;
    for (int i = 1; i <= n; ++i) {
        struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->data = i;
        newNode->next = NULL;
        if (head == NULL) {
            head = newNode;
            current = newNode;
        } else {
            current->next = newNode;
            current = newNode;
        }
    }
    current->next = head;
    return head;
}

struct Node* deleteNode(struct Node* head, int k, int* deletedData) {
    if (head == NULL) {
        return NULL;
    }
    struct Node* temp = head;
    for (int i = 1; i < k - 1; ++i) {
        temp = temp->next;
    }
    struct Node* deletedNode = temp->next;
    temp->next = deletedNode->next;
    *deletedData = deletedNode->data; 
    free(deletedNode);
    return temp->next;
}

int findLastPerson(struct Node* head, int m) {
    struct Node* current = head;
    printf("每次退出圈子的人的序号：\n");
    while (current->next != current) {
        int deletedData;
        current = deleteNode(current, m, &deletedData);
        printf("%d ", deletedData);
    }
    printf("\n");
    return current->data;
}

int main() {
    int n = 13; 
    int m = 3;  
    struct Node* head = createCircularLinkedList(n);
    int lastPerson = findLastPerson(head, m);
    printf("最后留在圈子中的人的序号是：%d\n", lastPerson);
    return 0;
}
