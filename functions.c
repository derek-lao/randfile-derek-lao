#include "functions.h"

int * randomNumberPointer()
{
  int fileDescriptor = open("/dev/random", O_RDONLY, 0644);
  int * pointerToNumber = malloc(sizeof(int));
  int bytesRead = read(fileDescriptor, pointerToNumber, 4);

  close(fileDescriptor);
  return pointerToNumber;
}

int randomNumber()
{
  return * randomNumberPointer();
}
