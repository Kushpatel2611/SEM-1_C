#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void reverse(char *,int);

int main(void){
    FILE *fp;
    /* no extra variable required */
    /* try local demo file inside PRACTICAL32 directory (workspace contains demo.txt) */
    fp = fopen("PRACTICAL32\\demo.txt","r");
    if (fp == NULL) {
        /* fallback to current directory name if user runs from PRACTICAL32 folder */
        fp = fopen("demo.txt","r");
    }
    if (fp == NULL)
    {
        perror("Error Reading File");
    }
    
    fseek(fp, 0, SEEK_END);
    long size = ftell(fp);
    fseek(fp, 0, SEEK_SET);

    /* allocate size+1 so we can safely null-terminate */
    char *data = malloc((size_t)size + 1);
    if (!data) {
        perror("malloc");
        fclose(fp);
        return 1;
    }

    size_t nread = fread(data, 1, (size_t)size, fp);
    data[nread] = '\0';
    
    
    
    reverse(data,size);

    free(data);
    fclose(fp);
    return 0;
}

void reverse(char *data,int size){
    /* print each word in reverse (handles spaces and newline); 'size' is length read */
    int start = 0;
    for (int l = 0; l <= size; ++l)
    {
        char c = data[l];
        if (c == ' ' || c == '\0' || c == '\n')
        {
            /* print the word characters in reverse from l-1 down to start */
            for (int m = l - 1; m >= start; --m)
            {
                putchar(data[m]);
            }
            if (c == ' ') putchar(' ');
            start = l + 1;
        }
    }
    putchar('\n');
   
}   