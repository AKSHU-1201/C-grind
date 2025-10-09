// Arrays


int Marks[10]; --> Here we initialize an array which is ready to store 10 integer elements which will be provided soon

#we can provide value by
Marks[0] = 45;
Marks[3] = 55;

so at 0th index 45 is there , at 3rd index 55 is there...

We can create int , char , float etc types of array and each stores the same type of element

NOTE: The Elements of an Array are stored in CONTIGUOUS MEMORY Location like if &Marks[0] = 1004 then &Marks[1] = 1008 cuz integer takes 4bytes of space
__________________________________________________________________________________________________________________________________________________________________________________________
// Passing an Array into a Function:
->To pass an array,we pass the address of array into the function using pointer.
for ex:
int A[] = { 1,2,3 }

void printarray(int* arr, int n); or printarray( int B[] , int n);
__________________________________________________________________________________________________________________________________________________________________________________________
// Multi-Dimensional Array (Same as Python Numpy)

int array_2d [rows][column] = {{...}}

for ex: 
array_2d[3][2] = {{1,2}  Row 0
                  {3,4}  Row 1
                  {5,6}} Row 2

Now A program to take inputs from the user:
 int Arr[3][2];

    for (int i = 0 ; i < 3 ; i++){
        for (int j = 0 ; j < 2 ; j++){
            printf("Enter the Value for Arr[%d][%d]\n" , i , j);
            scanf("%d" , &Arr[i][j]);
        }
    }

    for (int i = 0 ; i < 3 ; i++){
        for (int j = 0 ; j < 2 ; j++){
            printf("%d ", Arr[i][j]);
        }
        printf("\n");
    } 
NOTE: This Program takes O(n^2) time complexity no matter what you use(nested for loops or pointers)
_________________________________________________________________________________________________________________________________________________________________________________________







