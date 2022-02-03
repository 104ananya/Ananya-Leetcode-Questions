// { Driver Code Starts
//

#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
	
	Node(int x){
	    data = x;
	    left = NULL;
	    right = NULL;
	}
};


void printPostOrder(Node *root)
{
	if(root==NULL)
		return;
	printPostOrder(root->left);
	printPostOrder(root->right);
	cout<<root->data<<" ";
}

 // } Driver Code Ends


/*Complete the code here.
Node is as follows:
struct Node
{
  int data;
  Node* left;
  Node* right;
};
*/
class Solution
{
public:

    unordered_map<int, int> mpp;
    int preindex = 0;

    Node *Tree(int in[], int pre[], int instart, int inend)
    {

        

        if (instart > inend)
        {
            return NULL;
        }

        int current = pre[preindex++];
        Node *root = new Node(current);

        if(instart == inend){
            return root;
        }

        int inindex = mpp[root->data];

        root->left = Tree(in, pre, instart, inindex - 1);
        root->right = Tree(in, pre, inindex + 1, inend);

        return root;
    };

    Node *buildTree(int in[], int pre[], int n)
    {
        // Code here
        
        preindex = 0;

        for (int i = 0; i < n; i++)
        {
            mpp[in[i]] = i;
        }

        Node * ans = Tree(in, pre, 0, n-1);
        return ans;
    }
};

// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		
		int inorder[n], preorder[n];
		for(int i=0; i<n; i++)
			cin>> inorder[i];
		for(int i=0; i<n; i++)
			cin>> preorder[i];
		Solution obj;
		Node *root = obj.buildTree(inorder, preorder, n);
		printPostOrder(root);
		cout<< endl;
	}
}
  // } Driver Code Ends