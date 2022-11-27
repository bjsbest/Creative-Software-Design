#pragma once
#include <iostream>
using namespace std;

template <class T>
class Node{
    public:
        T data;
        Node<T>* next;
};

template <class T>
class List{
    private:
    Node<T>* head;

    public:
    List() : head(NULL){};

    ~List(){
        Node<T>* n = head;
        while(n){
            Node<T>* tmp = n;
            n = n->next;
            delete tmp; // delete all nodes in consecutive order.
        }
    }

    // List : When an argument is an array, The function makes a linked list from this array.
    List(T* arr, int n_nodes){ // create a list with n_nodes.
        head = new Node<T>();
        head->data = arr[0];
        head->next = NULL;

        Node<T> *n = head;
        for(int i=1; i<n_nodes; i++){
            Node<T> *nn = new Node<T>();
            nn->data = arr[i];
            nn->next = NULL;
            n->next = nn;
            n = n->next;
        }
    }

    void insert_at(int idx, const T& data){
        Node<T>* new_n = new Node<T>();
        new_n->data = data;

        Node<T>* n = head;
        Node<T>* temp = n;
        int cnt = 0;
        while(cnt < idx){
            temp = n;
            n = n->next;
            cnt++;
            if(temp->next == NULL) break;
        }
        
        if(temp->next == NULL){
            temp->next = new_n;
            new_n->next = NULL;
        }
        else{
            temp->next = new_n;
            new_n->next = n;
        }
    }

    void remove_at(int idx){ // 해당 인덱스의 노드 끊어내기
        Node<T>* n = head;
        Node<T>* temp = n;

        int cnt = 0;
        while(cnt < idx){
            temp = n;
            n = n->next;

            cnt++;
            if(temp->next == NULL) break;
        }
        // delete temp.
        // temp->next가 n이고 n을 없애고 싶다.
        Node<T>* temp2 = n->next;
        temp->next = temp2;
        delete n;
    }

    void pop_back(){
        Node<T>* n = head;
        Node<T>* temp = n;
        while(n->next != NULL){
            temp = n;
            n = n->next;
        }
        temp->next = NULL;
        delete n;
    }

    void push_back(const T& val){
        // 마지막 위치에 노드 붙이기
        Node<T>* new_n = new Node<T>();
        new_n->data = val;
        new_n->next = NULL;

        Node<T>* n = head;
        while(true){
            if(n->next != NULL){
                n = n->next;
            }
            else{ 
                n->next = new_n;
                break;
            }
        }
    }

    void pop_front(){
        Node<T>* n = head;
        head = n->next;
        delete n;
    }

    void push_front(const T& val){
        Node<T>* new_n = new Node<T>();
        new_n->data = val;
        Node<T>* temp = head;
        new_n->next = temp;
        head = new_n;
    }

    friend ostream& operator<<(ostream& out, List& rhs){ // print out nodes.
        Node<T>* n = rhs.head;
        while(n != NULL){
            if(n->next == NULL){
                out << n->data;
            }
            else{
                out << n->data << ", ";
            }
            n = n->next;
        }
        return out;
    }
};