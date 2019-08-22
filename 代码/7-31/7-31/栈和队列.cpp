//
//typedef int SDataType;
//typedef struct Stack
//{
//	SDataType* _array;
//	int _capacity;
//	int _top; // ���ջ��λ�� 
//}Stack;
//
//// ��ʼ��ջ 
//void StackInit(Stack* ps);
//{
//	ps->top = 0;
//}
//
//// ��ջ 
//void StackPush(Stack* ps, SDataType data);
//assert(ps->top < Max_size);
//ps->array[ps->top++];
//
//// ��ջ 
//void StackPop(Stack* ps);
//{
//	assert(ps->top > 0);
//	ps->top--''
//}
//
//// ��ȡջ��Ԫ�� 
//SDataType StackTop(Stack* ps);
//{
//	if (ps.top == 0) {
//		return -1;
//	}
//	return ps.array[ps.top - 1];
//}
//
//// ��ȡջ����ЧԪ�ظ��� 
//int StackSize(Stack* ps);
//{
//	return ps.top;
//}
//
//// ���ջ�Ƿ�Ϊ�գ����Ϊ�շ��ط������������Ϊ�շ���0 
//int StackEmpty(Stack* ps);
//{
//	if (ps.top == 0) {
//		return 1;
//	}
//	else {
//		return 0;
//	}
//}
//// ����ջ 
//void StackDestroy(Stack* ps)
//{
//	pa->top = 0;
//}
//
//








typedef BTNode* QDataType;

// ��ʽ�ṹ����ʾ���� 
typedef struct QListNode
{
	struct QListNode* _pNext;
	QDataType _data;
}QNode;

// ���еĽṹ 
typedef struct Queue
{
	QNode* _front;
	QNode* _rear;
}Queue;

// ��ʼ������ 
void QueueInit(Queue* q);
{
	q->front = 0;
	q->rear = 0;
	return OK;
}

// ��β����� 
void QueuePush(Queue* q, QDataType data);
{
	if ((q->ear + 1) % MAXSIZE == q->front)
		return ERROR;
	q->data[q->rear] = e;

	q->rear = (q->rear + 1) % MAXSIZE;
	return OK;
}
// ��ͷ������ 
void QueuePop(Queue* q); {
if (q->front == q->rear)
return ERROR;
*e = q->data[q->front];
q->front = (q->front + 1) % MAXSIZE;
return OK
}

// ��ȡ����ͷ��Ԫ�� 
QDataType QueueFront(Queue* q);
{
	if (q == NULL) {
		return ERROR;
	}
	return
		q = q->Queue[q->front];
}
// ��ȡ���ж�βԪ�� 
QDataType QueueBack(Queue* q);
{
	return q->last->data;
}
// ��ȡ��������ЧԪ�ظ��� 
int QueueSize(Queue* q);
{
	cout = 0;
	QueuePtr p = q.front;
	while (p != q.rear) {
		p = p->next;
		cout++;
	}
}
// �������Ƿ�Ϊ�գ����Ϊ�շ��ط�����������ǿշ���0 
int QueueEmpty(Queue* q);
{
	if (q.front == q.rear) {
		return 1;
	}
	return 0;
}
// ���ٶ��� 
void QueueDestroy(Queue* q);
{
	while (q.front) {
		q.rear = q.front->next;
		delete(q.front);
		q.front = q.rear;
	}
}