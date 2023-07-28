
#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char* readline();
char* ltrim(char*);
char* rtrim(char*);

int parse_int(char*);



  int* return_integer_array_using_dynamic_allocation(int* result_count) {
      *result_count = 5;

      int *a = malloc(5 * sizeof(int));
      int i;

      for ( i = 0; i < 5; i++) {
          *(a + i) = i + 1;
      }

      return a;
  }



int upperIndex(int arr[],int l,int n,int x)
 {
     int r=n-1;
     while(l<=r)
     {
     int mid=(r+l)/2;
     if(arr[mid]<=x)
     l=mid+1;
     else
     r=mid-1;
    }
  return r;
 }
 int comparator(const void *p,const void *q)
{
    int l=*(const int*)p;
    int r=*(const int*)q;
    if(l>r)
    return 1;
    else if(l<r)
    return -1;
    else
    return 0;
}

int* counts(int teamA_count, int* teamA, int teamB_count, int* teamB, int* result_count)
{
    qsort((int*) teamA,teamA_count,sizeof(teamA[0]),comparator);
    int *arr=(int *)malloc(teamB_count*sizeof(int));
    int i=0,j=0;
    while(i<teamB_count)
   {
            j=upperIndex(teamA,0,teamA_count,teamB[i]);
            if(j<0)
            arr[i]=0;
            else
            arr[i]=1+j;
            i++;
   }
     *result_count=teamB_count;
return arr;
}

int main()
{

    int teamA_count = 0 ;
    scanf("%d", &teamA_count);
    //printf("%d", teamA_count);

    //int* teamA = malloc(teamA_count * sizeof(int));
    int* teamA[teamA_count];
     int i;
     int teamA_item ;
    for ( i = 0; i < teamA_count; i++) {
        scanf("%d", &teamA_item);
        *(teamA + i) = teamA_item;
    }

    int teamB_count ;
     scanf("%d", &teamB_count);


    //int* teamB = malloc(teamB_count * sizeof(int));
    int* teamB[teamB_count];
     int teamB_item ;
    for ( i = 0; i < teamB_count; i++) {
        scanf("%d", &teamB_item);

        *(teamB + i) = teamB_item;
    }

    int result_count;
    int* result = counts(teamA_count, teamA, teamB_count, teamB, &result_count);

    for (i = 0; i < result_count; i++) {
        printf( "%d", *(result + i));

        if (i != result_count - 1) {
            printf( "\n");
        }
    }

    printf( "\n");



    return 0;
}

char* readline() {
    size_t alloc_length = 1024;
    size_t data_length = 0;

    char* data = malloc(alloc_length);

    while (true) {
        char* cursor = data + data_length;
        char* line = fgets(cursor, alloc_length - data_length, stdin);

        if (!line) {
            break;
        }

        data_length += strlen(cursor);

        if (data_length < alloc_length - 1 || data[data_length - 1] == '\n') {
            break;
        }

        alloc_length <<= 1;

        data = realloc(data, alloc_length);

        if (!data) {
            data = '\0';

            break;
        }
    }

    if (data[data_length - 1] == '\n') {
        data[data_length - 1] = '\0';

        data = realloc(data, data_length);

        if (!data) {
            data = '\0';
        }
    } else {
        data = realloc(data, data_length + 1);

        if (!data) {
            data = '\0';
        } else {
            data[data_length] = '\0';
        }
    }

    return data;
}

char* ltrim(char* str) {
    if (!str) {
        return '\0';
    }

    if (!*str) {
        return str;
    }

    while (*str != '\0' && isspace(*str)) {
        str++;
    }

    return str;
}

char* rtrim(char* str) {
    if (!str) {
        return '\0';
    }

    if (!*str) {
        return str;
    }

    char* end = str + strlen(str) - 1;

    while (end >= str && isspace(*end)) {
        end--;
    }

    *(end + 1) = '\0';

    return str;
}

int parse_int(char* str) {
    char* endptr;
    int value = strtol(str, &endptr, 10);

    if (endptr == str || *endptr != '\0') {
        exit(EXIT_FAILURE);
    }

    return value;
}
