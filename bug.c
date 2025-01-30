int main() {
  int x = 5;
  int *ptr = &x;
  *ptr = 10; 
  printf("%d", *ptr); // Output: 10
  free(ptr); // ERROR: Trying to free a pointer to a stack variable
  return 0; 
}