#include<stdio.h>
 
int main()
{     

      float TiMe_for_avg;
      int TAT_avg_TiMe;
      int TiMe_hold = 0;
      int TiMe_TAT = 0;
      int TiMe_ava[10];
      int  Time_wait[10];
      int  TEMP[10];
      int jj;
      int  Boundation ;
      int  All_together = 0 ;
      int cxx ;
      int Iterator = 0;
      int Quantam_of_the_time ;
      
      
      printf("\nSpecift the number of process ::\t");
      scanf("%d", &Boundation);
      cxx = Boundation;
      for(jj = 0; jj < Boundation; jj++)
      {
            printf("\nSpecify the details of process number [%d]\n", jj + 1);
 
            printf("Enter the arrival time ::\t");
 
            scanf("%d", &TiMe_ava[jj]);
 
            printf("Enter the Burst Time ::\t");
 
            scanf("%d", &Time_wait[jj]);
 
            TEMP[jj] = Time_wait[jj];
      }
 
      printf("\nEnter Time Quantum:\t");
      scanf("%d", &Quantam_of_the_time);
      printf("\nProcess ID\t\tBurst Timet Turnaround Time\t Waiting Time\n");
      for(All_together = 0, jj = 0; cxx != 0;)
      {
            if(TEMP[jj] <= Quantam_of_the_time && TEMP[jj] > 0)
            {
                  All_together = All_together + TEMP[jj];
                  TEMP[jj] = 0;
                  Iterator = 1;
            }
            else if(TEMP[jj] > 0)
            {
                  TEMP[jj] = TEMP[jj] - Quantam_of_the_time;
                  All_together = All_together + Quantam_of_the_time;
            }
            if(TEMP[jj] == 0 && Iterator == 1)
            {
                  cxx--;
                  printf("\nProcess[%d]\t\t%d\t\t %d\t\t\t %d", jj + 1, Time_wait[jj], All_together - TiMe_ava[jj], All_together - TiMe_ava[jj] - Time_wait[jj]);
                  TiMe_hold = TiMe_hold + All_together - TiMe_ava[jj] - Time_wait[jj];
                  TiMe_TAT = TiMe_TAT + All_together - TiMe_ava[jj];
                  Iterator = 0;
            }
            if(jj == Boundation - 1)
            {
                  jj = 0;
            }
            else if(TiMe_ava[jj + 1] <= All_together)
            {
                  jj++;
            }
            else
            {
                  jj = 0;
            }
      }
 
      TiMe_for_avg = TiMe_hold * 1.0 / Boundation;
      TAT_avg_TiMe = TiMe_TAT * 1.0 / Boundation;
      printf("\n\nAverage Waiting Time:\t%f", TiMe_for_avg*1.0);
      printf("\nAvg Turnaround Time:\t%f\n", TAT_avg_TiMe*1.0);
      return 0;
}