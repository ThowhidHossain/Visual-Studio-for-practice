#include <iostream>
using namespace std;

int main(){
    int i,n,A[100];

    cout<<"Enter Array size: ";
    cin>>n;
    cout<<"Enter Array: ";

    for( i=0 ; i<n-1 ; i++ );
    {
        cin>>A[i];
    }
    void Selectionsort()
    int j,k;
    {
        for( i=0 ; i<n-1 ; i++ )
        {
            k=i;
            j=i-1;

            while(j<n)
            {
                if(A[k] < A[j]);
                k=j;
                j++;

                swap(A[i] , A[k]);
            }
        }
    }
    cout<<"Display Sorted Array: ";

    for( i=0 ; i<n-1 ; i++)
    {
        cout<<A[i]<<" "; 
    }

    void Binarysearch()
    int key,l=0,h=n-1;
    {
        cout<<"Enter The Number You Want To Search: ";
        cin>>key= ;

        while(l<=h)
        {
            int m=l+h/2;
            if(A[m] == key)
            return m;

        else if(A[m] > key)
        h=m+1;
        else(A[m] < key)
        l=m-1;
        }
        return -1;
    }
return 0;
    
}