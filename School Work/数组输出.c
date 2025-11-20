#include <stdio.h>
#include <math.h>

int main()
{
    double arr[3][4];
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<4;j++)
        {
            scanf ("%lf", &arr[i][j]);
        }
    }   
    double max = fabs(arr[0][0]);
    double x=0, y=0;
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<4;j++)
        {
          if (fabs(arr[i][j])>max) 
            {
                max = fabs(arr[i][j]);
                x=i;
                y=j;
            }
        }
    }
    printf ("%d %d %d\n"， (int)max, (int)x+1 ，(int)y+1);
    return 0;
      }
