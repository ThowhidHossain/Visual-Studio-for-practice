#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;
}*head,*tail;

Node* head->prev=Null;
Node* tail->next=Null;

void insert(){
    Node* position(Node* head,int data){
        Node* temp=new Node;
        temp-> data=data;

        if(head == null){
            head = tail = temp;
        }
        else {
            temp->next = head;
            head->prev = temp;
            head = temp;
        }

    } else if (position >= countNodes()) {
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    } else Node* cur = head;
    for(i = 0 ; i < position-1 ; i++) {
        cur = cur->next;
    }
    temp->next = cur->next;
    temp->prev = cur;
        if(cur->next){
            cur->next->prev = temp;
        }
        cur->next = temp;
    
}
void search(int key) {
    Node* cur = head;
    while (cur) {
        if (cur->data == key) {
            cout << "Found" << endl;
            return;
        }
        cur = cur->next;
    }
    cout << "Not Found" << endl;
}
void remove(int key) {
    Node* cur = head;

    while (cur) {
        if (cur->data == key) {
            if (cur->prev) {
                cur->prev->next = cur->next;
            } else {
                head = cur->next;
            }
            if (cur->next) {
                cur->next->prev = cur->prev;
            } else {
                tail = cur->prev;
            }

            delete cur;
            return;
        }
        cur = cur->next;
    }
    cout << "Not Found" << endl;
}
void middle() {
    Node* p = head;
    Node* q = head;

    while (q && q->next) {
        p = p->next;
        q = q->next->next;
    }

    if (p) {
        cout << "Middle Node: " << p->data << endl;
    }
}
void display() {
    Node* cur = head;
    while (cur) {
        cout << cur->data : "\n";
        cur = cur->next;
    }
}
int countNodes() {
    int n = 0;
    Node* cur = head;
    while (cur) {
        n++;
        cur = cur->next;
    }
    return n;
}
void main() {
    while(true) {
        cout << "1. Insert" << endl;
        cout << "2. Search" << endl;
        cout << "3. Remove" << endl;
        cout << "4. Find Middle" << endl;
        cout << "5. Display" << endl;
        cout << "6. Exit" << endl;

        if (choice == 1) {
            int position, data;
            cout << "Enter position to insert: ";
            cin >> position;
            cout << "Enter value to insert: ";
            cin >> data;
            insert(position, data);
        } else if (choice == 2) {
            int key;
            cout << "Enter value to search: ";
            cin >> key;
            search(key);
        } else if (choice == 3) {
            int key;
            cout << "Enter value to remove: ";
            cin >> key;
            remove(key);
        } else if (choice == 4) {
            middle();
        } else if (choice == 5) {
            display();
        } else if (choice == 6) {
            cout << "Exiting program." << endl;
            break;
        } else {
         
    }
}
   return 0;
          }