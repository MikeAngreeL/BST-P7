#ifndef ITEM_H
#define ITEM_H

typedef struct Item_struct
{
	int itemValue;
	struct Item_struct* leftNodePtr;
	struct Item_struct* rightNodePtr;
} Item;

void initializeItem(Item* item);
#endif