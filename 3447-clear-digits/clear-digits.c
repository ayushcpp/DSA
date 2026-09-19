typedef struct{
    int top;
    int capacity;
    char *arr;
}Stack;
bool empty(Stack *st){
    return st->top==-1;
}
char* clearDigits(char* s) {
    Stack st;
    st.top=-1;
    st.capacity=2;
    st.arr=malloc(st.capacity*sizeof(char));
    int i=0;
    while(s[i]!='\0'){
        if(!(s[i]>='a' && s[i]<='z') && !empty(&st)){
            (st.top)--;
        }
        else{
            if(st.top==st.capacity-1){
                (st.capacity)*=2;
                st.arr=realloc(st.arr,st.capacity*sizeof(char));
            }
            st.arr[++(st.top)]=s[i];
        }
        i++;
    }
    if(st.top==st.capacity-1){
        (st.capacity)*=2;
        st.arr=realloc(st.arr,st.capacity*sizeof(char));
    }
    st.arr[(st.top)+1]='\0';
    return st.arr;
}