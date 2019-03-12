
#ifndef ITEM_C
#define ITEM_C
#include "Item.h"
#include <stdio.h>

void initializeItem(Item* item)
{
	item->leftNodePtr = NULL;
	item->rightNodePtr = NULL;
	item->itemValue = 0;
}

#endif