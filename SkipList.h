#ifndef __SKIP__LIST__
#define __SKIP__LIST__

#include <string>
#include <ctime>
#include <vector>

#define ENDLIST 513246784
constexpr int p = 1/2;

struct ListNode
{
	int lvl;
	int iDKey;
	std::string value;
	std::vector<ListNode*> next;

	ListNode(int l, int sK, std::string v) : lvl{ l }, iDKey{sK}, value{ v }, next{nullptr}{}
};

class SkipList 
{
public:
	SkipList();
	~SkipList();

	void insert(int searchKey, std::string values);
	void remove(int searchKey);

	int getMaxLevel() const{ return maxLevel; }

private:
	ListNode* head;
	int maxLevel;
	size_t sz;

};

double random()
{
	srand(time(NULL));
	int range = rand() % 10;
	return range / 10.0;
}

int randomLevel(SkipList* l)
{
	int lvl = 0;
	while (random() > p && lvl < l->getMaxLevel()) lvl += 1;
	return lvl;
}





#endif // !__SKIP__LIST__