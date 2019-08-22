// 要求：用户可以控制创建大堆还是小堆 
typedef int DataType;

typedef struct Heap
{
	DataType* _array;
	int _capacity;
	int _size;
}Heap;

// 创建堆 
void CreatHeap(Heap* hp, int* array, int size);
if (hp == NULL) {
	return;
 }
int i = 0;
for (i = 0; i < size; i++) {
	InsertHeap(hp, array[i]);
}

// 向堆中插入值为data的元素 
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

// 删除堆顶元素 
void EraseHeap(Heap* hp);
if (hp == NULL) {
	return;
}
if (hp->size == 0) {
	return;
}

// 获取堆中有效元素个数 
int SizeHeap(Heap* hp);
int num = hp->size;
return num;

// 检测堆是否为空 
int EmptyHeap(Heap* hp);
if (hp->size == 0) {
	return 1;
}
else {
	return 0;
}

// 获取堆顶元素 
DataType TopHeap(Heap* hp);
if (hp == NULL) {
	return 0;
}
if (hp->size == 0) {
	return 0;
}
*value = hp->data[0];
return 1;

// 销毁堆 
void DestroyHeap(Heap* hp) {
	if(hp == NULL){
		return;
	}
	hp->_size = 0;
	hp->_array = NULL;

}
