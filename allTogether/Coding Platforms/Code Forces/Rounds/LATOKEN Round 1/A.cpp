// binaryt search 

bool binSearch(int arr[],int n,int x){
    int low,high;
    low=0;
    high=n-1;
    while(low<=high){
        int mid=(low+high)/2;

        if(arr[mid]==x){
            return true;
        }
        else if(arr[mid] > x){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return false;
}

//SQL 
insert into student (stu_id,stu_name)  (1190, "Nikhil");

*->  value of address 
& -> address 

int a;
a+1;


