//
//typedef int SDataType;
//typedef struct Stack
//{
//	SDataType* _array;
//	int _capacity;
//	int _top; // 标记栈顶位置 
//}Stack;
//
//// 初始化栈 
//void StackInit(Stack* ps);
//{
//	ps->top = 0;
//}
//
//// 入栈 
//void StackPush(Stack* ps, SDataType data);
//assert(ps->top < Max_size);
//ps->array[ps->top++];
//
//// 出栈 
//void StackPop(Stack* ps);
//{
//	assert(ps->top > 0);
//	ps->top--''
//}
//
//// 获取栈顶元素 
//SDataType StackTop(Stack* ps);
//{
//	if (ps.top == 0) {
//		return -1;
//	}
//	return ps.array[ps.top - 1];
//}
//
//// 获取栈中有效元素个数 
//int StackSize(Stack* ps);
//{
//	return ps.top;
//}
//
//// 检测栈是否为空，如果为空返回非零结果，如果不为空返回0 
//int StackEmpty(Stack* ps);
//{
//	if (ps.top == 0) {
//		return 1;
//	}
//	else {
//		return 0;
//	}
//}
//// 销毁栈 
//void StackDestroy(Stack* ps)
//{
//	pa->top = 0;
//}
//
//








typedef BTNode* QDataType;

// 链式结构：表示队列 
typedef struct QListNode
{
	struct QListNode* _pNext;
	QDataType _data;
}QNode;

// 队列的结构 
typedef struct Queue
{
	QNode* _front;
	QNode* _rear;
}Queue;

// 初始化队列 
void QueueInit(Queue* q);
{
	q->front = 0;
	q->rear = 0;
	return OK;
}

// 队尾入队列 
void QueuePush(Queue* q, QDataType data);
{
	if ((q->ear + 1) % MAXSIZE == q->front)
		return ERROR;
	q->data[q->rear] = e;

	q->rear = (q->rear + 1) % MAXSIZE;
	return OK;
}
// 队头出队列 
void QueuePop(Queue* q); {
if (q->front == q->rear)
return ERROR;
*e = q->data[q->front];
q->front = (q->front + 1) % MAXSIZE;
return OK
}

// 获取队列头部元素 
QDataType QueueFront(Queue* q);
{
	if (q == NULL) {
		return ERROR;
	}
	return
		q = q->Queue[q->front];
}
// 获取队列队尾元素 
QDataType QueueBack(Queue* q);
{
	return q->last->data;
}
// 获取队列中有效元素个数 
int QueueSize(Queue* q);
{
	cout = 0;
	QueuePtr p = q.front;
	while (p != q.rear) {
		p = p->next;
		cout++;
	}
}
// 检测队列是否为空，如果为空返回非零结果，如果非空返回0 
int QueueEmpty(Queue* q);
{
	if (q.front == q.rear) {
		return 1;
	}
	return 0;
}
// 销毁队列 
void QueueDestroy(Queue* q);
{
	while (q.front) {
		q.rear = q.front->next;
		delete(q.front);
		q.front = q.rear;
	}
}