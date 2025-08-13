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

Node* removesHead(Node* head){
    if(head == nullptr) return head;
    Node* temp = head;
    head = head->next;
    free(temp);
    return head;
}

Node* removesTail(Node* head){
    if(head == nullptr || head->next == nullptr) return nullptr;
    Node* temp = head;
    while(temp->next->next != nullptr){
        temp = temp->next;
    }
    free(temp->next);
    temp->next = nullptr;

    return head;
}

Node* removesK(Node* head,int key){
    if(head == NULL) return head;
    if(key == 1){
        Node* temp = head;
        head = head->next;
        free(temp);
        return head;
    }
    int cnt = 0;
    Node* temp = head;
    Node* prev = NULL;
    while(temp != NULL){
        cnt++;
        if(cnt == key){
            prev->next = prev->next->next;
            free(temp);
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}

Node* removesEle(Node* head,int el){
    if(head == NULL) return head;
    if(head->data == el){
        Node* temp = head;
        head = head->next;
        free(temp);
        return head;
    }
    
    Node* temp = head;
    Node* prev = NULL;
    while(temp != NULL){
        if(temp->data == el){
            prev->next = prev->next->next;
            free(temp);
            break;
        }
        prev = temp;
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

    // int n;
    // cout << "Enter the position you want to delete: "; 
    // cin >> n;

    int n;
    cout << "Enter the element you want to delete: "; 
    cin >> n;

    Node* head = convertArr2LL(arr);
    //head = removesHead(head);
    // head = removesTail(head);
    // head = removesK(head , n);
    head = removesEle(head , n);
    print(head);
    
    return 0;
}