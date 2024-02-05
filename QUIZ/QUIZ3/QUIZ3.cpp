#include <iostream>

using namespace std;

bool check_duplicates(int num_array[],int length){
    int len = length;
    int k;
    for(k=0;k<len;k++){
        int num_count = 0;
        for(int i=0;i<len;i++){
            if(num_array[i]==num_array[k]){
                if(num_count == 0){
                    num_count++;
                }
                else{
                    return true;

                }
            }
        }
    }
    return false;
}
int main()
{
    int nums[] = {1,2,3,4,5,6,77,7,7};
    int length = sizeof(nums)/sizeof(int);
    bool duplicate = check_duplicates(nums,length);

    if(duplicate == 1){
        cout<<"Has duplicate values : True";
    }else if(duplicate == 0){
        cout<<"Has duplicate values : False";
    }

    return 0;
}