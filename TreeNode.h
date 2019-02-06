#ifndef TREENODE_H
#define TREENODE_H

#include <iostream>
using namespace std;

template<class T>
class TreeNode
{
private:
    T data;
    TreeNode<T>* left;
    TreeNode<T>* right;
public:
    TreeNode(T datdatdat) : left(nullptr), right(nullptr), data(datdatdat)
    {}
    int getdata()
    {
        return data;
    }
    TreeNode<T>* getleft()
    {
        return left;
    }
    TreeNode<T>* getright()
    {
        return right;
    }
    void setleft(TreeNode<T>* c)
    {
        this->left = c;
    }
    void setright(TreeNode<T>* c)
    {
        this->right = c;
    }
};

#endif // TREENODE_H
