int findOccurrence(int arr[],int n,int target, char type){
    int left=0,right=n-1;
    int result =-1;
    while(left<=right){
        int mid =left+(right-left)/2;
        if(arr[mid]==target){
            result=mid;
            if(type=='F'){
                right=mid-1;}
            
            else{
                left=mid+1;}
                
        }
    }
return result;
}