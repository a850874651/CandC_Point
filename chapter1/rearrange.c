/*
 * @Descripttion: rearrnge 示例代码
 * @version: 
 * @Author: WJX
 * @Date: 2022-06-19 17:37:03
 * @LastEditors: WJX
 * @LastEditTime: 2022-06-19 20:55:10
 */

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
#define MAX_COLS 20 
#define MAX_INPUT 1000
int read_column_numbers(int columns[], int max);
void  rearange(char * output,char const * input ,int n_columns,int const columns);

int main(void)
{
    int n_columns;
    int columns[MAX_COLS];
    char input[MAX_INPUT];
    char output[MAX_INPUT];

    n_columns = read_column_numbers(columns,MAX_COLS);
    printf("n_columns = %d\n",n_columns);
    while(gets(input!=NULL))
    {
        printf("Original input:%s\n",input);
        rearange(output,input,n_columns,columns);
        printf("Rearranged line: %s\n",output);
    }

    return EXIT_SUCCESS;
}


int read_column_numbers(int columns[], int max)
{
    int num=0;
    int ch;

    while (num<max&&scanf("%d",&columns[num])==1&&
            columns[num]>=0)
    {
        /* code */
        num+=1;
    }
    if (num%2!=0)
    {
        /* code */
        puts("Last column number is not paired.");
        exit(EXIT_FAILURE);
    }
    while ((ch=getchar())!=EOF &&ch!='\n')
    {
        /* code */;
       
    }
    return num;
    
    
    
}
void  rearange(char * output,char const * input ,int n_columns,int const columns)
{
    int col;
    int output_col;
    int len;
    len = strlen( input );
    output_col=0;
    for (col = 0; col < n_columns; col+=2)
    {
        /* code */
        
    }
    
}
