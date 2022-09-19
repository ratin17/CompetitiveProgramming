#include <stdio.h>
#include <string.h>

int contains(char c,char d,int t,char *s){
    printf("L: %d -- %c\n",strlen(s),d);

    if(d=='f'){
        int j=1;
        for(int i=0;i<strlen(s);i++){
            if(s[i]==c){
                if(j==t)return i;
                else j++;
            }
        }
        return -1;
    }

    else if(d=='b'){
        int j=1;
        for(int i=strlen(s)-1;i>=0;i++){
            if(s[i]==c){
                if(j==t)return i;
                else j++;
            }
        }
        return -1;
    }
    else return -2;
}

int main(){

    return 0;
}
