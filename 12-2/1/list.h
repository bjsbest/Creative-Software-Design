#pragma once

template <class T>
class Node{
    public:
        T data;
        Node<T>* next;
}

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
        // 기존에 있던 list의 idx 값을 뒤로 밀어내고, 그 자리를 새로운 node가 채운다.
        // 새로운 node를 "마지막에" 붙여놓고, idx부터 값을 하나씩 뒤로 미룬다.
        Node<T>* new_n = new Node<T>();
        new_n->data = data;
        new_n->next = NULL;

        /* 마지막 위치에 노드 붙이기
        Node<T>* n = head;
        while(true){
            if(n != NULL){
                Node<T>* temp = n->next;
                n = temp;
            }
            else{ 
                n->next = new_n;
                break;
            }
        } */
        
        // "원하는" 위치에 노드 붙이기
        Node<T>* new_n = new Node<T>();
        new_n-> data = data;
        new_n->next = NULL;

        for(int cnt = 0; i<idx + 1; cnt++){
            
        }

    }

    void remove_at(int idx){

    }

    void pop_back(){

    }

    void push_back(const T& val){

    }

    void pop_front(){

    }

    void push_front(const T& val){

    }

    friend ostream& operator<<(ostream& out, List& rhs){ // print out nodes.

    }
}