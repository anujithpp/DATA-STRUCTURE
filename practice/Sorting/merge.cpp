#include <iostream>
using namespace std;

void merge(int a[],int b[],int c[]){
    int count,i=0,j=0,l=0,k=0;
    while (k<10)
    {
        if (a[i]<=b[j]){
            c[k]=a[i];
            i++;
        }
        else{
            c[k]=b[j];
            j++;
        }
        k++;    
    }

    for(l=0;l<10;l++){
        cout<<c[l];
    }
    
}

int main(){
    int a[]={1,3,5,7,9};
    int b[]={2,4,6,8,10};
    int c[10];
    merge(a,b,c);
    return 0;
}
