#include <bits/stdc++.h> 
using namespace std; 
class node  
{  
public :
int value;  
node *left;  
node *right;  
};  
void preOrder(node* Node)  
{  
    if (Node == NULL)  
        return;  
    cout<< Node->value <<" ";
    preOrder(Node->left);  
    preOrder(Node->right);  
}  
int sumTree(node *Node)  
{  
    if(Node == NULL)  
    {
        return 0;
    }
    int temp = Node->value;  
    Node->value = sumTree(Node->right) +  sumTree(Node->left);  
    return Node->value + temp;  
}  
node* newNode(int value)  
{  
    node *temp = new node;  
    temp->value = value;
    temp->right = NULL; 
    temp->left = NULL;  
    return temp;  
}
node* insert(node* node, int value) 
{ 
    if (node == NULL){
      return newNode(value);  
    }  
    if (value < node->value){
        node->left  = insert(node->left, value);
    } 
    else if (value > node->value) {
        node->right = insert(node->right, value);    
    }
    return node; 
} 
int main() {
  
    //Getting input via STDIN
    int n;
    cin >> n;
    vector<int> a(n,0);
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    node* root = newNode(a[0]);
    for(int i = 1 ; i < n ; i++){
        insert(root,a[i]);
    }
    sumTree(root);
    preOrder(root);
    return 0;
}
