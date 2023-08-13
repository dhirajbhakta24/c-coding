#include<iostream>
using namespace std;
int main(){
    int n,srch;
    int fast,last,mid;
    int i;
    cout<<"Enter the size of an array"<<endl;
    cin>>n;
    int arr[n];
    fast = 0;
    last = n-1;
    mid = n/2;
    cout<<"Enter the value for the Array"<<endl;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"The Entered Array Element's are"<<endl;
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"Enter the Element to be Searched "<<endl;
    cin>>srch;
    while(fast<last){
        if(srch==arr[mid]){

            cout<<"Element is found in"<<mid<< " position";
            break;
        }
        else if(srch>arr[mid]){
            fast = mid+1;
        }
        else if(srch<mid){
            last = mid-1;
        }
        mid = (fast + last)/2;
    }


}