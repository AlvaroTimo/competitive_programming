#include<iostream>

using namespace std;

int n=0,numbers[2147483649];

void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
    
int partition (int A[], int p, int r)
{
    int aux = A[r]; 
    int i = (p - 1); 

    for (int j = p; j <= r - 1; j++)
    {
        if (A[j] < aux)
        {
            i++;
            swap(&A[i], &A[j]);
        }
    }
    swap(&A[i + 1], &A[r]);
    return (i + 1);
}
 
void quickSort(int A[], int p, int r)
{
    if (p < r)
    {
        int q = partition(A, p, r);
        quickSort(A, p, q - 1);
        quickSort(A, q + 1, r);
    }
}

int findMedian(){
    if (n % 2 != 0)
        return numbers[n/2];
    return (numbers[(n - 1) / 2] + numbers[n / 2]) /2;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int num,elementos;
    while(cin>>num){
        numbers[n]=num;
        if(num<numbers[n-1] && n!=0)
            quickSort(numbers,0,n);
        n++;
        cout<<findMedian()<<'\n';
    }
    return 0;
}