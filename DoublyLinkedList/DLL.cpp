#include<bits/stdc++.h>
using namespace std;
struct Node {
    public:
    int data;
    Node* next;
    Node* back;

    public:
    Node(int data1, Node* next1, Node* back1){
        data = data1;
        next = next1;
        back = back1;
    }

    public:
    Node(int data1){
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};

Node* convertArr2DLL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* prev = head;

    for(int i = 1; i < arr.size();i++){
        Node* temp = new Node(arr[i],nullptr,prev);
        prev->next = temp;
        prev = temp;
    }
    return head;
}

Node* deleteHead(Node* head){
    if(head == NULL || head->next == NULL){
        return NULL;
    }
     
    Node* prev = head;
    head = head->next;

    head->back = nullptr;
    prev->next = nullptr;
    
    delete prev;
    return head;
}


Node* deleteTail(Node* head){
    if(head == NULL || head->next == NULL){
        return NULL;
    }
     
    Node* tail = head;
    while(tail->next != nullptr){
        tail = tail->next;
    }
    Node* prev = tail->back;
    tail->back = nullptr;
    prev->next = nullptr;
    delete tail;
    return head;
}

Node* deleteKNode(Node* head, int k){
    if(head == NULL){
        return NULL;
    }

    int cnt = 0;
    Node* temp = head;
    
    while(temp != nullptr){
        cnt++;

        if(cnt == k){
            break;
        }

        temp = temp->next;
    }

    Node* prev = temp->back;
    Node* front = temp->next;

    if(prev == NULL && front == NULL){
        return NULL;
    }
    else if(prev == nullptr){
       return deleteHead(head);
    }
    else if(front == nullptr){
       return deleteTail(head);
    }
    prev->next = front;
    front->back = prev;

    temp->next = nullptr;
    temp->back = nullptr;
    delete temp;

    return head;
}

void deleteNode(Node*temp){
    Node* prev = temp->back;
    Node* front = temp->next;

    if(front == NULL){
        prev->next = nullptr;
        temp->back = nullptr;
        free(temp);
        return;
    }

    prev->next = front;
    front->back = prev;

    temp->next = temp->back = nullptr;
    free(temp);
}

void print(Node* head){
    while(head != nullptr){
        cout << head->data << " ";
        head = head->next;
    }
}

int main(){
    vector<int> arr = { 12, 5, 8, 7};

    // Convert Array into Doubly Linked List
    // Node* head = convertArr2DLL(arr);
    // print(head);

    // Delete Head Node
    // Node* head = convertArr2DLL(arr);
    // head = deleteHead(head);
    // print(head);

    // // Delete Tail Node
    // Node* head = convertArr2DLL(arr);
    // head = deleteTail(head);
    // print(head);

    // // Delete Kth Node
    // Node* head = convertArr2DLL(arr);
    // head = deleteKNode(head,3);
    // print(head);

    // Delete Node
    Node* head = convertArr2DLL(arr);
    deleteNode(head->next->next);
    print(head);

    return 0;
}