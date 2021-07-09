#include <iostream>
#include <chrono>
#include <stdio.h>

using namespace std;
void swap(int &i, int &j);
template< typename TT, int lenght > void print ( TT (&array)[lenght] );
template< typename TT, int lenght > int bubble_sort ( TT (&array)[lenght] );
template< typename TT, int lenght > int insertion_sort ( TT (&array)[lenght] );
template< typename TT, int lenght > int selection_sort ( TT (&array)[lenght] );
template< typename TT, int lenght > int findmax ( TT (&array)[lenght] );
template< typename TT, int lenght > int count_sort ( TT (&array)[lenght] );
template< typename TT, int lenght > int _quick_sort ( TT (&array)[lenght] , int low, int high);
template< typename TT, int lenght > int quick_sort ( TT (&array)[lenght] );
template< typename TT, int lenght > int partition ( TT (&array)[lenght] , int low, int high);

template< typename TT, int lenght > void _merge_sort ( TT (&array)[lenght], int left, int right );
template< typename TT, int lenght > void merge ( TT (&array)[lenght], int left, int right );
template< typename TT, int lenght > void merge_sort ( TT (&array)[lenght] );


int main()
{
    auto begin = std::chrono::high_resolution_clock::now();

    int arrtest[] = {22,18,1,450,2,5,3};
    
    
    print(arrtest);
    
//    bubble_sort(arrtest);
//    insertion_sort(arrtest);
//    selection_sort(arrtest);
//    count_sort(arrtest);
//    quick_sort(arrtest);
    merge_sort(arrtest);
    print(arrtest);
    
    
    
    
    // Stop measuring time and calculate the elapsed time
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
        
    printf("Time measured: %.3f seconds.\n", elapsed.count() * 1e-9);

	return 0;
}



void swap(int &no1, int &no2){
    int temp =no1;
    no1 = no2;
    no2 = temp;
}

template< typename TT, int lenght > void print ( TT (&array)[lenght] ){
    cout<<"------------------------------------------------"<<endl;
    for (int i {0}; i<lenght; i++){
        cout<<array[i]<<" | ";
    }
    cout<<endl;
}

template< typename TT, int lenght > int bubble_sort ( TT (&array)[lenght] ){
    //time complexity O(n^2)
    for (int i{0}; i<lenght-1;i++){
        for(int j{0}; j<lenght-1; j++){
            if(array[j] > array[j+1]){
                swap(array[j+1],array[j]);
            }
        }
    }
}
template< typename TT, int lenght > int insertion_sort ( TT (&array)[lenght] ){
    //time complexity O(n^2)
    for (int i{1};i<lenght-1;i++){
        int key;
        if(array[i+1]<array[i]){
            key = array[i+1];
            int indx{i};
            while(indx>=0 && array[indx]>key){
                swap(array[indx+1],array[indx]);
                indx-=1;
            }
        }
    }
}
template< typename TT, int lenght > int selection_sort ( TT (&array)[lenght] ){
    int min;
    for (int i{0}; i<lenght;i++){
        min = i;
        for(int j{i};j<lenght;j++){
            if(array[j] < array[min]){
                min = j;
            }
        }
        swap(array[i],array[min]);
    }
}
template< typename TT, int lenght > int findmax ( TT (&array)[lenght] ){
    int max{0};
    for(int i{0};i<lenght;i++){
        if (array[i]>max){
            max = array[i];
        }
    }
    return max;
}
template< typename TT, int lenght > int count_sort ( TT (&array)[lenght] ){
    //it creates array MAX and adds count of each element to it
    //something like value:key mapping
    const int max = findmax(array);
    int countarray[max+1];
    for (int a{0};a<max+1;a++){
        countarray[a] = 0;
    }
    
    for (int i{0};i<lenght;i++){
        countarray[array[i]] +=1;
    }
    int k{0},l{0};
    while(k<max+1){
        if(countarray[k] > 0){
            array[l] = k;
            l++;
            countarray[k]= countarray[k] - 1;
        }
        else{
            k++;
        }
    }
}


template< typename TT, int lenght > int partition ( TT (&array)[lenght] , int low, int high){
    int pivot {array[high]};
    int i{low}, j{low-1};
    
    for(i;i<high;i++){
        if(pivot>=array[i]){
            j++;
            swap(array[i],array[j]);
        }
    }
    swap(array[j+1],array[high]);
    return(j+1);
}

template< typename TT, int lenght > int _quick_sort ( TT (&array)[lenght] , int low, int high){
    //time complexity O(n^2)
    if (low<high){
        int p = partition(array,low,high);
        _quick_sort(array,low,p-1);
        _quick_sort(array,p+1, high);
    }
}
template< typename TT, int lenght > int quick_sort ( TT (&array)[lenght] ){
    //time complexity O(n^2)
    int min{0};
    int max{lenght-1};
    _quick_sort(array,min,max);
}

template< typename TT, int lenght > void merge ( TT (&array)[lenght], int left, int middle, int right ){
    int half1 = middle - left + 1;
    int half2 = right - middle;
    
    int temp1[half1], temp2[half2];
    
    //fill those temp arrays
    for (int i{0}; i<half1 ;i++){
        temp1[i] = array[left + i];
    }
    for (int j{0}; j<half2 ;j++){
        temp2[j] = array[middle+ j +1];
    }
    
    //setting indexes and merging arrays
    int k{0},l{0},m{left};
    
    while(k<half1 && l<half2){
        if(temp1[k] <= temp2[l]){
            array[m] = temp1[k];
            k++;
        }
        else{
            array[m] = temp2[l];
            l++;
        }
        m++;
    }
    
    //copying remaining elements of temporary arrays (if there are any)
    while(k<half1){
        array[m] = temp1[k];
        k++;
        m++;
    }
    while(l<half2){
        array[m] = temp2[l];
        l++;
        m++;
    }
}
template< typename TT, int lenght > void _merge_sort ( TT (&array)[lenght], int left ,int right  ){
    //traditional merge function implementation
    if (left>= right){
        return;
    }
    int middle = left + (right - left)/2;
    _merge_sort(array, left, middle);
    _merge_sort(array, middle+1, right);
    
    merge(array, left, middle, right);
}

template< typename TT, int lenght > void merge_sort ( TT (&array)[lenght] ){
    int l{0}, r{lenght-1};
    _merge_sort(array, l, r);
    
}