#include <iostream>
#include <vector>

using namespace std;
void swap(int &i, int &j);
void display(int array[], int size);
void heapify(int array[], int size);

int main()
{
    int a[] = {1,2,3,4,5,6,0};
    display(a,7);
    swap(a[0], a[4]);
    display(a,5);
    
    heapify(a,7);
    display(a,7);
    

	return 0;
}



void swap(int &i, int &j){
    int temp{i};
    i = j;
    j = temp;
}

void display(int array[], int size){
    for (int i{0}; i<size; i++){
        cout<<array[i]<<" | ";
    }
    cout<<endl;
}

void heapify(int array[], int size){
    //(n+1)/2 is leaf of last element and (n/2)-1 is index of its parent
    int i = (size/2)-1;
    for(i;i>=0;i--){
        int left = 2*i+1;
        
        while(left<size-1){
            //comparing left and right children of current nod
            if (array[left] < array[left+1]){
                left = left + 1;
            }
            
            //compare parent and larger child
            if(array[i] < array[left]){
                swap(array[i], array[left]);
                i = left;
                left = 2*i+1;
            }
            else{
                break;
            }
        }
    }
}


