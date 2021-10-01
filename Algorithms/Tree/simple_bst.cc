#include "simple_bst.hpp"
#include <iostream>

struct no_root {};

template<class T>
sg::Node<T>::Node(T d): data {d} {}


template<class T>
sg::Simple_bst<T>::Simple_bst() {}

template<class T>
void sg::Simple_bst<T>::put(T d) {
    sg::Node<T>* parent {root};
    sg::Node<T>** position {nullptr};
    while (parent) {
        if (d <= parent->data)
            position = &parent->left;
        else
            position = &parent->right;
        if (*position)
            parent = *position;
        else
            break;
    }
    
    sg::Node<T>* temp = new sg::Node<T> {d};
    temp->parent = parent;
    if (!parent) root = temp;
    else *position = temp;
}

// template<class T>
// sg::Node<T>* sg::search_r(sg::Simple_bst<T>& bst, T t) {
//     return search_r_aux(bst.root, t);
// }

template<class T>
sg::Node<T>* search_r_aux(sg::Node<T>* root, T t) {
    if (!root) return root;
    if (t == root->data) return root;
    else if (t < root->data) return search_r_aux(root->left, t);
    else return search_r_aux(root->right, t);
}

template<class T>
sg::Node<T>* sg::Simple_bst<T>::search(T t) {
    sg::Node<T>* current {root};
    while (current) {
        if (t == current->data) return current;
        else if (t < current->data) current = current->left;
        else current = current->right;
    }
    return current;
}

template<class T>
T sg::Simple_bst<T>::min() {
    if (!root) throw no_root ();
    sg::Node<T>* current {root};
    while (current->left) {
        current = current->left;
    }
    return current->data;
}

template<class T>
T sg::Simple_bst<T>::max() {
    if (!root) throw no_root ();
    sg::Node<T>* current {root};
    while (current->right) {
        current = current->right;
    }
    return current->data;
}

template<class T>
void sg::Simple_bst<T>::free(sg::Node<T>* start) {
    if (start) {
        free(start->left);
        free(start->right);
        delete start;
    }
}

template<class T>
sg::Simple_bst<T>::~Simple_bst() {
    free(root);
}

template<class T>
sg::Node<T>* sg::Simple_bst<T>::upper_bound(T k) {
    sg::Node<T>* current {root};
    sg::Node<T>* bound {root};
    while (current) {
        if (k < current->data) {
            bound = current;
            current = current -> left;
        } else current = current->right;
    }
    return bound;
}

template<class T>
void sg::Simple_bst<T>::print_in(sg::Node<T>* p) {
    if (p == nullptr) return;
    else {
        print_in(p->left);
        std::cout << " " << p->data << " " << std::endl;
        print_in(p->right);
    }
}

template<class T>
void sg::Simple_bst<T>::print_pre(sg::Node<T>* p) {
    if (!p) return;
    else {
        std::cout << " " << p->data << " " << std::endl;
        print_pre(p->left);
        print_pre(p->right);
    }
}

template<class T>
void sg::Simple_bst<T>::print_post(sg::Node<T>* p) {
    if (!p) return;
    else {
        print_post(p->left);
        print_post(p->right);
        std::cout << " " << p->data << " " << std::endl;
    }
}

#define SBST_TEST 0

#if SBST_TEST == 1
int main() {
    sg::Simple_bst<int> bst;

    int n, temp;
    std::cin >> n;

    while (n--) {
        std::cin >> temp;
        bst.put(temp);
    }

    std::cin >> temp;

    std::cout << "upper: " <<bst.upper_bound(temp)->data << std::endl;

    std::cout << "-------------in-------------" << std::endl;
    bst.print_in(bst.get_root());
    std::cout << "-------------pre-------------" << std::endl;
    bst.print_pre(bst.get_root());
    std::cout << "-------------post-------------" << std::endl;
    bst.print_post(bst.get_root());

    // std::cout << bst.search(6)->data << std::endl;
    return 0;
}
#endif