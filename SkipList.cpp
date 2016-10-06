#include "SkipList.h"

SkipList::SkipList() : sz{0}
{
	head = new ListNode(0,0,"");
	head->next[0]->iDKey = ENDLIST;
	head->next[0]->lvl = 0;
	head->next[0]->value = "";
}

SkipList::~SkipList()
{
	ListNode* nextNode;
	while (head->iDKey != ENDLIST)
	{
		nextNode = head->next[0];
		delete head;
		head = nextNode;
	}
}

void SkipList::insert(int searchKey, std::string values)
{
	ListNode* x = this->head;
	for (int i = this->maxLevel; i >= 0; --i)
	{
		while (x->next[i]->iDKey < searchKey) x = x->next[i];
		
		
	}
}