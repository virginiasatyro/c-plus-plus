#ifndef NODE_H_
#define NODE_H_

class Node {
    private:
        Node* _prox;
        float _value;
    public:
        Node(float value);
        ~Node();
        float get_value();
        void set_value(float value);
        Node* get_prox();
        void set_prox(Node* prox);
};

#endif
