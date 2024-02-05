#include <iostream>

using namespace std;

int check_single_val(int num_array[],int length){
    int len = length;
    int k;
    for(k=0;k<len;k++){
        int num_count = 0;
        int i;
        for(i=0;i<len;i++){
            if(num_array[i]==num_array[k]){
                num_count++;#include <iostream>

using namespace std;

int check_single_val(int num_array[],int length){
    int len = length;
    int k;
    for(k=0;k<len;k++){
        int num_count = 0;
        int i;
        for(i=0;i<len;i++){
            if(num_array[i]==num_array[k]){
                num_count++;
            }
        }
        if(num_count<2){
            return num_array[k];
        }
    }
}
int main()
{
    int nums[] = {1,1,2,2,3,3,4,4,5,5,6,6,77,77,7};
    int length = sizeof(nums)/sizeof(int);
    int single_val = check_single_val(nums,length);
    cout<<"Single value : "<<single_val;


    return 0;
}
            }
        }
        if(num_count<2){
            return num_array[k];
        }
    }
}
int main()
{
    int nums[] = {1,1,2,2,3,3,4,4,5,5,6,6,77,77,7};
    int length = sizeof(nums)/sizeof(int);
    int single_val = check_single_val(nums,length);
    cout<<"Single value : "<<single_val;


    return 0;
}