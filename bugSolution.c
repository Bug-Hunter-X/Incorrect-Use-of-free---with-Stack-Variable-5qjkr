int main() {
  int x = 5;
  int *ptr = &x;
  *ptr = 10; 
  printf("%d", *ptr); // Output: 10
  // No need to free(ptr); - Memory is automatically managed by the stack
  return 0;
}