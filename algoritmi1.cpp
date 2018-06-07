#include <iostream>

using namespace std;
#define ARRAYLEN(ar) (sizeof(ar) / sizeof(ar[0]))
static void Generate(int index, int legth, int arr[]);
void print(int legth, int arr[]);
int main(){
    int n;
    cin>>n;
    int arr[n]={0};
    int legth = ARRAYLEN(arr);
    Generate(0,legth,arr);
    return 0;
}

static void Generate(int index, int legth, int arr[]){
    if(index == legth){
        print(legth,arr);
    }else{
        for(int i = 0; i<=1; i++){
            arr[index] = i;
            Generate(index+1,legth,arr);
        }
    }
}
void print(int legth, int arr[]){
    for(int i = 0; i< legth;i++){
        cout<<arr[i];
    }
    cout<<endl;
}
