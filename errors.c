int main()
{
  int *p1, *p2;
  int n;
  p1 = &n;
  p2 = &n; // error
    
   int* p1; // p1 can point to any location in memory
  int m=10; 
  p1 = &m;
  int n = *p1; // Error on debug builds
  printf("%d", n); // access violation on release builds

  return 0;
}
