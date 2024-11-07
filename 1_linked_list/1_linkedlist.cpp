#include <iostream>

using namespace std;
struct Node
{
	int data;
	struct Node *link;
};
int main()

{
	struct Node *head = NULL; // pointer to the first node, to know where the list starts
	head = (struct Node *)malloc(sizeof(struct Node));//memory for 
	head ->data = 34;
	head -> link = NULL;
	printf("%d \n",head -> data);
	//creating the 2nd node
	struct Node *current = (struct Node*)malloc(sizeof(struct Node));
	current ->data = 2;
	current -> link=NULL;
	head -> link = current;
	//creating the third node
	current = (struct Node*)malloc(sizeof(struct Node));
	current ->data = 3;
	cout<< "this is node: "<< current-> data <<endl;
	current -> link = NULL;
	head ->link->link = current;
	return 0;
}