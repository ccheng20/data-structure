#include <stdio.h>

#include <stdlib.h>

typedef struct node Node;

struct node {
	char* data;
	Node* nextNode; 
	Node* prevNode; 
};

Node* CreateNode(char* data) {
	Node* node = (Node*)malloc(sizeof(Node));
	node->data = data; 
	return node;
}

void main() {

	int i; 
	while (true) {
		Node* node = CreateNode("foobar");
	}

}