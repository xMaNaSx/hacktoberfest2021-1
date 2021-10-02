// A simple BST implementation

namespace sg {

struct no_root;

template<class T>
struct Node {
    T data;
    Node<T>* parent = nullptr;
    Node<T>* left = nullptr;
    Node<T>* right = nullptr;
    Node(T);
};

template<class T>
class Simple_bst {
    Node<T>* root = nullptr;
    void free(Node<T>* start);
public:
    Simple_bst();
    void put(T);
    Node<T>* search(T);
    T min();
    T max();
    Node<T>* upper_bound(T);
    void print_in(Node<T>*);
    void print_pre(Node<T>*);
    void print_post(Node<T>*);
    Node<T>* get_root() { return root; }

    // friend Node<T>* search_r(Simple_bst<T>&, T);

    ~Simple_bst();
};

}