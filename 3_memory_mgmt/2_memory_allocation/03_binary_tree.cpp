#include <iostream>
//#include "LeakTester.h"
class binary_tree {

    private:
        struct node {
            int data;
            node *left;
            node *right;

            node(int _data, node *_left,node *_right): data(_data),left(_left),right(_right){}
            ~node() {
                if (left) { delete left; }
                if (right) { delete right; }
            }
        };

        node *root;

        void add(int val, node *ptr){
            if(val > ptr->data){
                if(ptr->left != NULL) { add(val, ptr->left); }
                else { ptr->left=new node(val, NULL, NULL); }
            }
            else if(val <= ptr->data){
                if(ptr->right!= NULL) { add(val, ptr->right); }
                else { ptr->right = new node(val, NULL, NULL); }
            }
        }
        
        bool search(int item, node *ptr) {
            if(!ptr->left && !ptr->right) {
                if(ptr->data == item) { return true; }
                return false;
            }
            
            if(ptr->data < item && ptr->left){ search(item, ptr->left); }
            else if(ptr->data > item && ptr->right){ search(item, ptr->right); }
        }

    public:
        binary_tree(int data){
            binary_tree::root = new node(data, NULL, NULL);
        }
        
        ~binary_tree() { delete binary_tree::root; }
        
        void addData(int new_data){
            binary_tree::add(new_data, binary_tree::root);
        }
        
        bool searchItem(int item) {
            return binary_tree::search(item, binary_tree::root);
        }
};

int main() {
    binary_tree tree(2);
    tree.addData(10);
    tree.addData(1);
    tree.addData(20);
    tree.addData(0);

    std::cout<<tree.searchItem(0)<<std::endl;
    std::cout<<tree.searchItem(9)<<std::endl;
    tree.addData(11);
    std::cout<<tree.searchItem(11)<<std::endl;

    return 0;
}