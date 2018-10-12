#include <stdio.h>
#define SIZE 100
#include <stdlib.h>
#include <time.h>
#include <math.h>


// Declare function
int NhapN();
void Nhap(int A[], int n);
void Xuat(int A[], int n);
int Sum(int A[], int n);
int CP(int a);
int SumCP(int A[], int n);
int prime(int x);
int countPrime(int A[], int n);
int Max(int A[], int n);
int Min(int A[], int n);
int position_min_number(int A[], int n);
int Increasing(int A[], int n);
void FindCouple(int A[], int n);
void Insert(int A[], int *n);


// Main function
int main (void)
{
    int A[SIZE], sum;
    srand(time(NULL));
    int n = NhapN();
    Nhap(A, n);
    Xuat(A, n);
    // Sum elements
    sum = Sum(A, n);
    printf("Sum elements: %d\n", sum);
    // Sum so chinh phuong
    int cp = SumCP(A, n);
    printf("Tong cac so CP: %d\n", cp);
    
    
    int a = prime(7);
    printf("%d",a);
    // Count number of prime number
    int c = countPrime(A, n);
    printf("Total numbers of prime number: %d\n", c);

    // Max number in array
    int max = Max(A,n);
    printf("Max number: %d\n", max);

    // Min number in array
    int min = Min(A,n);
    printf("Min number: %d\n", min);

    // Position of the min positive integer
    int pos = position_min_number(A,n);
    printf("Position of Min number: %d\n", pos);

    // Array in correct order
    int ordered = Increasing(A, n);
    printf("%d\n", ordered);

    // Couple number
    FindCouple(A,n);

    // Insert number in array
    Insert(A,&n);
    printf("New array: ");
    Xuat(A, n);

}



//==================
// Other functions
//==================

// Input total elements of array
int NhapN()
{
    int n;
    do
    {
        printf("Nhap so pt trong mang: ");
        scanf("%d", &n);
    } while (!((n > 1) && (n < SIZE)));
    return n;
}

// Create random array
void Nhap(int A[], int n)
{
    int min = 1, max = 50;
    for (int i = 0; i < n; i++)
    {   
        //srand(time(NULL)); neu de srand trong function nay thi cac phan tu se giong nhau
        A[i] = (rand() % (max - min + 1)) + min;
    }	
}

// Print array
void Xuat(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%5d", A[i]);
    }
    printf("\n");
}

// Sum elements in the array
int Sum(int A[], int n)
{
    int S = 0;
    for (int i = 0; i < n; i++)
    {
        S += A[i];
    }
    return S;
}


// So chinh phuong 

int CP(int x)
{
    int cp;
    if( x < 1)
        cp = 0;
    else{
        cp = 0;
        for(int i = 1; i <= sqrt(x); i++)
        {
            if(x == (i*i)){
                cp = 1;
                break;
            }
        }
    }
    return cp;
}

// Sum so chinh phuong

int SumCP(int A[], int n)
{
    int S = 0;
    for (int i = 0; i < n; i++)
    {
        if (CP(A[i]) == 1)
        {
            S+= A[i];
        }
    }
    return S;
}   
    
// Count number of prime number
int prime(int x)
{
    int count = 0;
    int nt;
    for(int i = 1; i <= x; i++)
    {
        if (x % i == 0)
            count ++;
    }
    if (count == 2)
        nt = 1;
    else
        nt = 0;
    return nt;
}


int countPrime(int A[], int n)
{
    int count;
    count = 0;
    for(int i = 0; i < n; i++)
    {
        if (prime(A[i]) == 1)
            count ++;      
    }
    return count;
}

// Max number in array
int Max(int A[], int n)
{
    int max;
    max = A[0];
    for(int i = 1; i < n; i++)
    {
        if (A[i] > max)
            max = A[i];
        else 
            max = max;
    }
    return max;
}

// Min number in array
int Min(int A[], int n)
{
    int min;
    min = A[0];
    for(int i = 1; i < n; i++)
    {
        if (A[i] < min)
            min = A[i];
    }
    return min;
}

// Find position of the min positive interger

int position_min_number(int A[], int n)
{
    int i, j, position;
    for (i = 0; i < n; i++)
    {
        if (A[i] > 0) break;
    }
    if (i>=n)
        {
            position = -1;
            //printf("No pos integer in array");
        }
    else
        {
            position = i;      
            for(j = i + 1; j < n; j++)
            {
                if (A[j] > 0 && A[j] < A[position])
                    position = j;
            }
        }
    
    return position;
}

// Check if element in correct order -> return 1 if true

int Increasing(int A[], int n)
{
    int order = 1;
    int start = A[0];
    for (int i = 0; i < n; i++)
    {
        if (A[i] < start)
        {
            order = 0;
            break;
        }
    } 
    return order;
}

// Find if an element is 3 times of other element, if they exist -> return 1

void FindCouple(int A[], int n)
{
    int couple = 0;
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1 ; j < n; j++)
        {
            // if (A[j] / A[i] == 3 || A[j] / A[i] == 3) <- wrong, careful with division as may have float number
            if (A[j] == A[i] * 3 || A[i] == A[j] * 3)
            {
                printf("%d, %d\n", A[i], A[j]);
                couple = 1;
            }     
        }     
    }
    if (couple == 0)
        printf("No couple number in array\n");
}

// insert an element to a certain position
// 0<pos<n. Pos = 0 -> first position, pos = n->last position, after insert other element will be shifted as well

void Insert(int A[], int *n)
{
    int newnum, pos;
    printf("Enter position you want to insert to: ");
    scanf("%d", &pos);
    if (pos < 0 || pos > *n)
        printf("Invalid position %d", pos);
    else 
    {
        if (pos == SIZE)
        printf("Array was full");
        else
        {
            printf("Value of new number: ");
            scanf("%d", &newnum);
            for(int i = (*n - 1); i >= pos ; i--)
            {   
                A[i+1] = A[i];
            }
            A[pos] = newnum;
            //(*n)++; if you dont do this, the new array doesnt increase in size
        }
    }
}


