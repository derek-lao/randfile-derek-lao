int * randomNumber()
{
  int fileDescriptor = open("dev/random", O_RDONLY, 0644);
  int* pointerToNumber;
  read(fileDescriptor, pointerToNumber, 4);
  return pointerToNumber;
}
