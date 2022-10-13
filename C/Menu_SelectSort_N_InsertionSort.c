/*Implementation of selection sort and insertion sort */

#include <stdio.h>
#include <stdlib.h>
int Max;
int a[20];

void selection(){   //function for selection sort
    int temp;
    for(int i = 0; i < Max-1; i++){
        int min = i;
        for(int j = i+1; j < Max; j++)
            if(a[j] < a[min])     // set minimum of the element in that array
                min=j;
        if(min!=i){       //swap the element with in first loop
            temp=a[i];
            a[i]=a[min];
            a[min]=temp;
        }
    }
    for(int i=0;i<Max;i++)      //print array
        printf("%d\t",a[i]);
    printf("\n");
}

void insertion() {    // function for insertion sort
  int i, j, temp;
  for(i = 1 ; i < Max; i++){    //set the first element of the array as sortion divder and storing the second element of the array as temp to compare
    temp = a[i];
    j = i - 1;          //set as j as the previous element of the temp value
    while(j >= 0 && a[j] > temp ){
      a[j+1] = a[j];        //set as the previous element to next of previous element since that array element is safe in temp
      j--;                  //to compare to lower elements
    }
    a[j+1] = temp;        //if no change is the comparsion set as it is..
  }
  for(int i = 0; i < Max; i++){       //print array
    printf("%d\t",a[i]);
  }
  printf("\n");
  }

int main() {      //main
  int d;
  printf("Enter the number of elements : ");
  scanf("%d", &Max);
  printf("Enter the elements\n");
  for(int i = 0; i < Max; i++)
    scanf("%d", &a[i]);
  do{
    printf("Select any option :\n1.Selection Sort\n2.Insertion Sort\n3.Exit\nOption : ");
    scanf("%d", &d);
    printf("\n");
    switch(d){        //switch is used
      case 1 : selection();
               break;
      case 2 : insertion();
               break;
      case 3 : exit(0);
      default : printf("Try again \n");
                break;
    }
  }while(d != 3);
  return 0;
}
