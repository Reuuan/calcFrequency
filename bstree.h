#pragma once
#include <stdio.h>
#define NEW_LINE printf("\n")

typedef struct bstree
{
    int value;
    char *key;
    struct bstree *left;
    struct bstree *right;
} bst;

bst *bstree_create(char *key, int value);
void bstree_add(bst *tree, char *key, int value);
bst *bstree_lookup(bst *tree, char *key);
bst *bstree_delete(bst *tree, char *key);
bst *bstree_min(bst *tree);
bst *bstree_max(bst *tree);
bst *delete_node(bst *tree, bst *node, bst *parent);
void replace_node(bst *parent, bst *node, bst *child);