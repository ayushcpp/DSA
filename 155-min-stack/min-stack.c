


typedef struct {
    int *arr;
    int *minarr;
    int capacity;
    int top;
    int top2;
} MinStack;


MinStack* minStackCreate() {
    MinStack * Stack=malloc(sizeof(MinStack));
    Stack->top=-1;
    Stack->top2=-1;
    Stack->capacity=1;
    Stack->arr=malloc(sizeof(int));
    Stack->minarr=malloc(sizeof(int));
    return Stack;
}

void minStackPush(MinStack* obj, int value) {
    if(obj->top==obj->capacity-1){
        obj->capacity*=2;
        obj->arr=realloc(obj->arr,obj->capacity*sizeof(int));
        obj->minarr=realloc(obj->minarr,obj->capacity*sizeof(int));
    }
    obj->arr[++(obj->top)]=value;
    if(obj->top2==-1){
        obj->minarr[++(obj->top2)]=value;
        return ;
    }
    if(value<=obj->minarr[obj->top2]){
        obj->minarr[++(obj->top2)]=value;
    }
    else{
        obj->top2++;
        obj->minarr[obj->top2] = obj->minarr[obj->top2 - 1];
    }
    return ;
}

void minStackPop(MinStack* obj) {
    --(obj->top);
    --(obj->top2);
}

int minStackTop(MinStack* obj) {
    return obj->arr[obj->top];
}

int minStackGetMin(MinStack* obj) {
    if(obj->top2!=-1)
    return obj->minarr[obj->top2];
    return 0;
}

void minStackFree(MinStack* obj) {
    free(obj->arr);
    free(obj->minarr);
    free(obj);
}

/**
 * Your MinStack struct will be instantiated and called as such:
 * MinStack* obj = minStackCreate();
 * minStackPush(obj, value);
 
 * minStackPop(obj);
 
 * int param_3 = minStackTop(obj);
 
 * int param_4 = minStackGetMin(obj);
 
 * minStackFree(obj);
*/