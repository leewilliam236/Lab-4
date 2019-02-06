#ifndef TREE_H
#define TREE_H
#include "TreeNode.h"

template<class T>
class Tree
{
    private:
        TreeNode<T>* actualroot;
    public:
        Tree() : actualroot(nullptr)
        {}
        void insert(T data)
        {
            TreeNode<T>* newnode = new TreeNode<T>(data);
            if(!actualroot)
            {
                actualroot = newnode;
            }
            else
            {
                TreeNode<T>* curnode = actualroot;
                if(newnode->getdata() < curnode->getdata())
                {
                    newnode->setleft(curnode);
                }
                else
                {
                    newnode->setright(curnode);
                }
            }
        }
};

#endif // TREE_H
