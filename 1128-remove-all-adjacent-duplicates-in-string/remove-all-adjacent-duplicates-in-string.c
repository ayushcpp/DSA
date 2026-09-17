char* removeDuplicates(char* s) {
    if(s[0]=='\0'){
        return s;
    }
    int top=-1;
    int capacity=2;
    char *Stack=malloc(capacity*sizeof(char));
    int i=0;
    while(s[i]!='\0'){
        if(top==capacity-1){
            capacity*=2;
            Stack=realloc(Stack,capacity*sizeof(char));
        }
        if(top==-1){
            Stack[++top]=s[i];
        }
        else{
            if(s[i]!=Stack[top]){
                if(top+1==capacity-1){
                    capacity*=2;
                    Stack=realloc(Stack,capacity*sizeof(char));
                }
                Stack[++top]=s[i];
            }
            else{
                top--;
            }
        }
        i++;
    }
    Stack[top + 1] = '\0';
    return Stack;
}