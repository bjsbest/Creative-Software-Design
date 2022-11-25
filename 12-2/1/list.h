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
            delete tmp;
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