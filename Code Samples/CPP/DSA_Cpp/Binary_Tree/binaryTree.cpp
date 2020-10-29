#include<bits/stdc++.h>
using namespace std;
// [1,3,7,8,71,9,2,11,10]
// Level order BT making & BT printing without using recursions. 
struct BT{
    int value;
    BT* left;
    BT* right;
};

// Utility function to make a BT. 
BT* makeBT(int value){
    BT *newBT = new BT();
    if (!newBT){
        cout << "Memory Error";
        return NULL;
    }
    newBT->value = value;
    newBT->left = NULL;
    newBT->right = NULL;
    return newBT;
}

// Function to level order insert elements. 

void push_back(BT* root, int val){
   
    
    // check if first elem is NULL or not. 
    if (root == NULL){
        root = makeBT(val);
        root->left = NULL;
        root->right = NULL;
        return;
    }

    
    std::queue<BT*> global_q;
    global_q.push(root);
   
    while (!global_q.empty()){
        // make a temp node and assign first.
        BT* temp = global_q.front();
        global_q.pop();

        if(temp->left == NULL){
            temp->left = makeBT(val);            
            return;
        }
        else global_q.push(temp->left);

        if(temp->right == NULL){
            temp->right=makeBT(val);            
            return;            
        }
        else global_q.push(temp->right);
    
    }
    
}

void level_order_print(BT* root){
    std::queue<BT*> q;
    BT* temp = root;
    while(temp != NULL){
        cout << temp->value << " " ;
        q.push(temp->left);
        q.push(temp->right);
        temp = q.front();
        q.pop();
    }
    cout << endl;
        
}


int main(){
    BT* b_tree=makeBT(1);
    std::vector<int> vect{3,7,8,71,9,2,11,10};
    for(auto x: vect){
        push_back(b_tree,x);
    }
   
    level_order_print(b_tree);


}