class Node{
    int data;
    Node left,right;
    public Node(int item){
        data=item;
        left=right=null;
    }
}
    //binary tree class
public class BinaryTree{
    Node root;
    //constructor
    public BinaryTree(){
        root=null;
    }
    //inorder traversal (left,root,right)
    void inorder (Node node){
        if(node==null)
        return;
        inorder(node.left);
        System.out.println(node.data+"");
        inorder(node.right);
    }
    //preorder Traversal (Root,left,right)
    void preorder(Node node){
        if(node==null)
        return;
        System.out.println(node.data+"");
        preorder(node.left);
        preorder(node.right);
    }
    //postoder traversal (left,right,root)
   void postorder(Node node){
   if(node==null)
   return;
   postorder(node.left);
   postorder(node.right);
   System.out.println(node.data+"");
}
//driver code
public static void main(String args[]){
    BinaryTree tree=new BinaryTree();
    //creating tree manually
    tree.root=new Node(1);
    tree.root.left=new Node(2);
    tree.root.right=new Node(3);
    tree.root.left.left=new Node(4);
    tree.root.left.right=new Node(5);
    System.out.println("inorder traversal:");
    tree.inorder(tree.root);
    System.out.println("\n preorder traversal:");
    tree.preorder(tree.root);
    System.out.println("\n postorder traversal:");
    tree.postorder(tree.root);
}
}
