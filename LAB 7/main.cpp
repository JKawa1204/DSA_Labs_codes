#include <iostream>
using namespace std;

struct node {
  int data;
  node *left;
  node *right;
};

struct node *create(int c) {
  struct node *newnode = new node;
  newnode->data = c;
  newnode->left = NULL;
  newnode->right = NULL;
  cout << "Node created : " << c << endl;
  return newnode;
}

void insertleft(struct node *root, int c) { root->left = create(c); }

void insertright(struct node *root, int c) { root->right = create(c); }

void preorder(struct node *root) {
  if (root == NULL) {
    return;
  }
  cout << " " << root->data;
  preorder(root->left);
  preorder(root->right);
}

void inorder(struct node *root) {
  if (root == NULL) {
    return;
  }

  inorder(root->left);
  cout << " " << root->data;
  inorder(root->right);
}

void postorder(struct node *root) {
  if (root == NULL) {
    return;
  }
  postorder(root->left);
  postorder(root->right);
  cout << " " << root->data;
}

int main() {
  int n;
  cout<<"Jay And Janay"<<endl;
  cout << "Enter the root node" << endl;
  cin >> n;
  struct node *root = create(n);
  insertleft(root, 15);
  insertright(root, 20);
  insertleft(root->left, 17);
  insertleft(root->right, 11);
  insertright(root->right, 16);
  insertright(root->right->right, 19);
  insertleft(root->left->left, 11);
  insertright(root->left->left, 14);

  cout<<"Preorder list :  ";
  preorder(root);
  cout << endl;
  cout<<"Inorder list :  ";
  inorder(root);
  cout << endl;
  cout<<"Postorder list :  ";
  postorder(root);

  return 0;
}