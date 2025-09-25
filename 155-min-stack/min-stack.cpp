class node{
    public:
        node(long long v=1e10+5){
            next = nullptr;
            val=v;
        }
        node *next;
        long long val;
};

class MinStack {
public:
    int mi ;
    node *Top , *top_min;
    MinStack() {
        Top = new node();
        top_min = new node();
    }
    
    void push(long long val) {
        node *new_node = new node(val);
        new_node->next = Top;
        Top = new_node;

        node *new_min_node = new node(min(val,top_min->val));
        new_min_node->next = top_min;
        top_min = new_min_node;
    }
    
    void pop() {
        Top = Top->next;
        top_min = top_min->next;
    }
    
    int top() {
        return Top->val;
    }
    
    int getMin() {
        return  top_min->val;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */