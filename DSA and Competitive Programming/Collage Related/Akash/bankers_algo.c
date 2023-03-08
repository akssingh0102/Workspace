#include<stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
int main()
{
    printf("Enter the number of Processes ::");
    int no_process,no_resource;
    scanf("%d",&no_process);
    printf("Enter the no of Resources ::");
    scanf("%d",&no_resource);
    printf("\nEnter the available resource (eg R1 R2 ...)::");
    int ava_resource[no_resource],ava_resource_try[no_resource];
    for (int i = 0; i < no_resource; i++)
    {
        scanf("%d",&ava_resource[i]);
        ava_resource_try[i]=ava_resource[i];
    }
    int resource_allo[no_process][no_resource];
    for(int i=0;i<no_process;i++)
    {
        printf("Enter the resource allocated to process %d (eg.R1 R2 ...) :: \n",i+1);
        for(int j=0;j<no_resource;j++)
        {
            
            scanf("%d",&resource_allo[i][j]);
        }
    }
    int max_resource_req[no_process][no_resource];
    for(int i=0;i<no_process;i++)
    {
        printf("Enter the Max Resource Required by process %d (eg.R1 R2 ...) ::\n",i+1);
        for(int j=0;j<no_resource;j++)
        {
            
            scanf("%d",&max_resource_req[i][j]);
        }
    }

    int resource_need[no_process][no_resource],resource_need_try[no_process][no_resource];
    for(int i=0;i<no_process;i++)
    {
        
        for(int j=0;j<no_resource;j++)
        {
            
            resource_need[i][j]=max_resource_req[i][j]-resource_allo[i][j];
            
        }
    }

    //Safe Sequence

    int safe_seq[no_process];
    int no_proces_granted=0,prev_granted=0,deadLock=0,z=-1;
    int skip[no_process];
    for(int y=0;y<no_process;y++)
    {
    skip[y]=0;
    }

    safeSeq: 
    
    for (int i = 0; i < no_process; i++)
    {
        
        int count=0;
        
        if(skip[i]==1)
        {
            
            
            continue;
        }
        for(int j=0;j<no_resource;j++)
        {
            if(ava_resource_try[j]>=resource_need[i][j])
            count++;
        }
        if(count==no_resource)
        {
            
            safe_seq[++z]=i+1;
            
            //---
            for(int j=0;j<no_resource;j++)
        {
            ava_resource_try[j]+=resource_allo[i][j];
        }
            //---
            no_proces_granted++;
            skip[i]=1;
        }
        

    }
    
    if(prev_granted==no_proces_granted)
    {
        deadLock=1;
        goto outOfSafe;
    }
    else if(prev_granted<no_proces_granted)
    {
        prev_granted=no_proces_granted;
    }
    if(no_proces_granted==no_process)
    {
        goto outOfSafe; 
    }
    else if(no_proces_granted!=no_process) 
    {
        goto safeSeq;
    }
    

    outOfSafe:
    if (deadLock==1)
    {
        printf("\n\n\nNo Safe sequence because dead lock will occur!!!!!! \n");
    }
    else
    {
        printf("----------------------------------------------------------\n");
        printf("Safe Sequence of Processes ::\n");
        int size = sizeof(safe_seq)/sizeof(safe_seq[0]);
        
        for(int i=0;i<size;i++)
        {
            
            printf("%d   ",safe_seq[i]);
            sleep(1);
            
        }
        printf("\n----------------------------------------------------------\n \n");
        
        printf("PROCESS EXECUATION\n");
        printf("======= ==========\n \n \n");
        for(int i=0;i<size;i++)
        {
            
                printf("\n------->   Process %d  <-------- \n",safe_seq[i]);
                //-----
                printf("Resource Allocated      ::");
                for(int k=0;k<no_resource;k++)
                {
                    printf("%d  ",resource_allo[safe_seq[i]-1][k]);
                }
                printf("\n");
                //----
                printf("Resource Needed         ::");
                for(int k=0;k<no_resource;k++)
                {
                    printf("%d  ",resource_need[safe_seq[i]-1][k]);
                }
                printf("\n");
                //----
                printf("Resource Available      ::");
                for(int k=0;k<no_resource;k++)
                {
                    printf("%d  ",ava_resource[k]);
                }
                printf("\n");
                //----
                printf("Resource Allocation Validated\n");
                printf("Running Process %d \n",safe_seq[i]);  sleep(2);
                printf("Completed Process \n");  sleep(1);
                printf("Releasing Resource \n"); sleep(1);
                printf("Resources are released successfully \n");
                // Updating Avaialable Resource
                for(int l=0;l<no_resource;l++)
                {
                ava_resource[l]+=resource_allo[safe_seq[i]-1][l];
                }
                printf("Now Availabe Resources   :: ");
                for(int l=0;l<no_resource;l++)
                {
                printf("%d  ",ava_resource[l]);
                }
                printf("\n\n");
              
    }
    
    

    
    }
    printf("\n --------------------------END----------------------------");
    return 0;
}