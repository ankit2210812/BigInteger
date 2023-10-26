#ifndef BigInteger_h
#define BigInteger_h
#include<stdio.h>
struct node
{
    int data;
    struct node* next;
};
struct BigInteger
{
    struct node* head;
    long long int size;
    int sign;
};
struct BigInteger initialize(char*);
void insert(struct BigInteger*,int);
void display(struct BigInteger);
void reverse(struct BigInteger*);
void swap(struct BigInteger*,struct BigInteger*);
int compare(struct BigInteger,struct BigInteger);
struct BigInteger add(struct BigInteger,struct BigInteger);
struct BigInteger subaddition(struct BigInteger,struct BigInteger);
struct BigInteger addsubtract(struct BigInteger,struct BigInteger);
struct BigInteger mul(struct BigInteger,struct BigInteger);
struct BigInteger sub(struct BigInteger,struct BigInteger);
struct BigInteger div1(struct BigInteger,struct BigInteger);
struct BigInteger divby2(struct BigInteger);
struct BigInteger mod(struct BigInteger,struct BigInteger);
#endif

