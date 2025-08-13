#include<bits/stdc++.h>
using namespace std;
struct Node {
    public:
    int data;
    Node* next;

    public:
    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }

    public:
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

Node* convertArr2LL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i=1;i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }

    return head;
}

Node* insertHead(Node* head, int el){
    return new Node(el,head);
    
}

Node* insertTail(Node* head, int el){
    if(head == nullptr) {
        return new Node(el);
    }
    Node* temp = head;
    while(temp->next != nullptr){
        temp = temp->next;
    }
    Node* newNode = new Node(el);
    temp->next = newNode;

    return head;
}

Node* insertK(Node* head,int pos, int el){
    if(head == NULL) {
        if(pos == 1){
            return new Node(el);
        }else{
            return head;
        } 
    }
    if(pos == 1){
        return new Node(el,head);
        
    }
    int cnt = 0;
    Node* temp = head;
    while(temp != NULL){
        cnt++;
        if(cnt == pos-1){
            Node* newNode = new Node(el,temp->next);
            temp->next = newNode;
            break;
        }
        temp = temp->next;
    }
    return head;
}

Node* insertBeforeEle(Node* head,int val,int el){
    if(head == NULL) {
        return NULL;
    }
    if(head->data == el){
        return new Node(val,head);
        
    }
    Node* temp = head;
    while(temp->next != NULL){
        if(temp->next->data == el ){
            Node* newNode = new Node(val,temp->next);
            temp->next = newNode;
            break;
        }
        temp = temp->next;
    }
    return head;
}

void print(Node* head){
    while(head != nullptr){
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main(){
    vector<int> arr = { 12, 5, 8, 7};

    // int pos;
    // cout << "Enter the position you want to add: ";  
    // cin >> pos;

    // int el;
    // cout << "Enter the element you want to add: ";
    // cin >> el;

    int el;
    cout << "Enter the element before you want to add value: ";
    cin >> el;

    int val;
    cout << "Enter the value : ";
    cin >> val;

    Node* head = convertArr2LL(arr);
    // head = insertHead(head,el);
    // head = insertTail(head,el);
    // head = insertK(head , pos, el);
    head = insertBeforeEle(head ,val, el);
    print(head);
    
    return 0;
}