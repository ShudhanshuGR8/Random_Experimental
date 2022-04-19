#include <stdio.h>
#define MAX 1000

int main()
{
    int data_frame_arr[MAX], size_data_frame, noise_arr[MAX], resultant_arr[MAX];
    printf("Hello User! Please Enter the number of bits of your Data Frame:\t");
    scanf("%d", &size_data_frame);

  printf("Now Please Enter the Data Frame bits:\t");

  for(int i = 0; i < size_data_frame; i++)
  {
     scanf("%d", &data_frame_arr[i]);
  }

    printf("Please Enter the Noise bits:\t");
    for(int j = 0; j < size_data_frame; j++)
  {
     scanf("%d", &noise_arr[j]);
  }

  // In the below block of code, I am displaying the user's entered values
   printf("Below is your entered Data Frame:\t\n");
   for(int i = 0; i < size_data_frame; i++) {
     printf("%d ", data_frame_arr[i]);
  }
  printf("\n\nBelow is your entered noise:\t\n");
  for(int j = 0; j < size_data_frame; j++) {
     printf("%d ", noise_arr[j]);
  }

  // Here I am performing the Binary Addition
  int a, c = 0;
    for(a = size_data_frame - 1 ; a >= 0 ; a--)
    {
       resultant_arr[a] = ((data_frame_arr[a] ^ noise_arr[a]) ^ c); // c is carry
       c = ((data_frame_arr[a] & noise_arr[a]) | (data_frame_arr[a] & c)) | (noise_arr[a] & c);
    }

    resultant_arr[a] = c;
    int z = 0;
    printf("\nThis is the resultant Data Frame: \t");
    for(z = 0; z < size_data_frame; z++) {
       printf("%d ",resultant_arr[z]);
    }

    return 0;
}

