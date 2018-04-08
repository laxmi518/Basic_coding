

class node:
    def __init__(self,key):
        self.data=key
        self.left= None
        self.right =None

def insert(root,nd):
    if(nd.data <= root.data):
        if(root.left is None):
            root.left = nd
        else:
            insert(root.left,nd)
    else:
        if(root.right is None):
            root.right = nd
        else:
            insert(root.right,nd)
def bin_search(root,key):
    if(root is None or root.data == key):
        return root
    else:
        if(key<root.data):
            return bin_search(root.left,key)
        else:
            return bin_search(root.right,key)


def tree_inorder_traverse(node):
    if(node == None):
        return
    tree_inorder_traverse(node.left)
    print(node.data)
    tree_inorder_traverse(node.right)

def inorder_iterative(node):
    stack = []
    current = node
    while(1):
        if(current is not None):
            stack.append(current)
            current = current.left
        else:
            if(len(stack)>0):
                current = stack.pop()
                print(current.data)
                current = current.right
            else:
                break

def preorder_traversal(node):
    if(node == None):
        return
    print(node.data)
    preorder_traversal(node.left)

    preorder_traversal(node.right)

def preorder_iterative(root):
    stack_pre=[]
    current = root
    while(1):
        if(current is not None):
            print(current.data)
            stack_pre.append(current)
            current =current.left
        else:
            if(len(stack_pre)>0):
                current = stack_pre.pop()
                current = current.right

            else:
                break


def preorder_iterative2(root):
    stack_pre=[]
    current = root
    stack_pre.append(current)
    while(len(stack_pre)>0):
        current = stack_pre.pop()
        print (current.data)
        if(current.right is not None):
            stack_pre.append(current.right)
        if(current.left is not None):
            stack_pre.append(current.left)


if __name__ == "__main__":
    root = node(50)
    insert(root,node(20))
    insert(root,node(70))
    insert(root,node(10))
    insert(root,node(30))
    insert(root,node(60))
    preorder_traversal(root)
    value = bin_search(root,20)
    print (value.data)

    print ("iterative")
    preorder_iterative(root)


