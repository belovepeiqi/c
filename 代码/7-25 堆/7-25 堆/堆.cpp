// Ҫ���û����Կ��ƴ�����ѻ���С�� 
typedef int DataType;

typedef struct Heap
{
	DataType* _array;
	int _capacity;
	int _size;
}Heap;

// ������ 
void CreatHeap(Heap* hp, int* array, int size);
if (hp == NULL) {
	return;
 }
int i = 0;
for (i = 0; i < size; i++) {
	InsertHeap(hp, array[i]);
}

// ����в���ֵΪdata��Ԫ�� 
void InsertHeap(Heap* hp, DataType data);
if (ho == NULL) {
	return;
}
if (hp->size >= hpMaxSize) {
	return;
}
hp->data[hp->size] = value;
hp->size++;
AdjustUp(hp, hp->size - 1);

// ɾ���Ѷ�Ԫ�� 
void EraseHeap(Heap* hp);
if (hp == NULL) {
	return;
}
if (hp->size == 0) {
	return;
}

// ��ȡ������ЧԪ�ظ��� 
int SizeHeap(Heap* hp);
int num = hp->size;
return num;

// �����Ƿ�Ϊ�� 
int EmptyHeap(Heap* hp);
if (hp->size == 0) {
	return 1;
}
else {
	return 0;
}

// ��ȡ�Ѷ�Ԫ�� 
DataType TopHeap(Heap* hp);
if (hp == NULL) {
	return 0;
}
if (hp->size == 0) {
	return 0;
}
*value = hp->data[0];
return 1;

// ���ٶ� 
void DestroyHeap(Heap* hp) {
	if(hp == NULL){
		return;
	}
	hp->_size = 0;
	hp->_array = NULL;

}
