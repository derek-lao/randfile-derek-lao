#include "functions.h"

int main()
{
  int array[10];
  int index;
  for(index = 0 ; index < 10 ; index ++)
  {
    array[index] = randomNumber();
    printf("The current number of array[%d] is: %d\n", index, array[index]);
  }

  int numberOfBytes;

  //creating other array
  int arrayOther[10];

  int fileDescriptor = open("numbers.txt", O_WRONLY, 0644);
  //writing in data into numbers.txt
  numberOfBytes = write(fileDescriptor, array, 40);//should be 40!
  printf("The number of bytes written in is %d\n", numberOfBytes);
  close(fileDescriptor);
  printf("\n");


  fileDescriptor = open("numbers.txt", O_RDONLY, 0644);
  //reading in data into the arrayOther
  numberOfBytes = read(fileDescriptor, arrayOther, 40);
  printf("The number of bytes read in is %d\n", numberOfBytes);
  close(fileDescriptor);
  printf("\n");

  for(index = 0 ; index < 10 ; index ++)
    printf("The current number of arrayOther[%d] is: %d\n", index, arrayOther[index]);


  return 0;
}
