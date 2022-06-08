void DeleteDuplicate(LIST& l)
{
NODE* p = l.pHead;
while (p != NULL)
{
NODE* q = p->pNext;
while (q != NULL)
{
if (q->info == p->info) {
NODE* ele = q->pPrev;
NODE* t = ele->pNext;
q = q->pNext;
if (t != NULL)
{
if (t == l.pTail)
l.pTail = ele;
ele->pNext = t->pNext;
if(t->pNext != NULL)
t->pNext->pPrev = ele;
delete t;
}
/*LIST new_list;
Init(new_list);
new_list.pHead = p->pNext;
new_list.pTail = l.pTail;
NODE* ele = q->pPrev;
q = q->pNext;
RemoveAfterQ(new_list, ele);*/
}
else
q = q->pNext;
}
p = p->pNext;
}
}