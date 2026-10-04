


typedef struct {
    int top1;
    int top2;
    int * input;
    int *output;
    int capacity;
} MyQueue;


MyQueue* myQueueCreate() {
    MyQueue * Queue=malloc(sizeof(MyQueue));
    Queue->top1=-1;
    Queue->top2=-1;
    Queue->capacity=1;
    Queue->input=malloc(sizeof(int));
    Queue->output=malloc(sizeof(int));
    return Queue;
}

void myQueuePush(MyQueue* obj, int x) {
    if(obj->top1==obj->capacity-1){
        obj->capacity*=2;
        obj->input=realloc(obj->input,obj->capacity*sizeof(int));
        obj->output=realloc(obj->output,obj->capacity*sizeof(int));
    }
    obj->input[++(obj->top1)]=x;
}

int myQueuePop(MyQueue* obj) {
    if(obj->top2==-1){
        while(obj->top1!=-1){
            obj->output[++(obj->top2)]=obj->input[(obj->top1)--];
        }
    }
    return obj->output[(obj->top2)--];
}

int myQueuePeek(MyQueue* obj) {
    if(obj->top2==-1){
        while(obj->top1!=-1){
            obj->output[++(obj->top2)]=obj->input[(obj->top1)--];
        }
    }
    return obj->output[obj->top2];
}

bool myQueueEmpty(MyQueue* obj) {
    return obj->top1 == -1 && obj->top2== -1;
}

void myQueueFree(MyQueue* obj) {
    free(obj->input);
    free(obj->output);
    free(obj);
}

/**
 * Your MyQueue struct will be instantiated and called as such:
 * MyQueue* obj = myQueueCreate();
 * myQueuePush(obj, x);
 
 * int param_2 = myQueuePop(obj);
 
 * int param_3 = myQueuePeek(obj);
 
 * bool param_4 = myQueueEmpty(obj);
 
 * myQueueFree(obj);
*/