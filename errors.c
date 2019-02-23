int main()
{
  int *p1, *p2;
  int n = 30;
  p1 = &n;
  p2 = &n; // error
    
   int* p1; // p1 can point to any location in memory
  int m=10; 
  p1 = &m;
  int n = *p1; // Error on debug builds
  printf("%d", n); // access violation on release builds
    
    int* p1; // p1 can point to any location in memory
  int m = 100;
  p1 = &m; // error

    
    int* p1; // create a pointer to an integer
  int m = 100;
  p1 = &m; // assign address of m to p1
  (*p1)++; // ERROR: we did not increment value of m
  printf("%d\n", *p1);
  printf("%d\n", m);

    int* p1; // create a pointer to an integer
  int m = 100;
  p1 = &m;
  
   int* p1;
  if ((p1 = (int*)malloc(sizeof(int))) == NULL)
  {
    return 1;
  }
  free(p1);
  p1=NULL;
  *p1 = 99;
  free(p1);
  //you stopped here
    
     const char arr[] = "hello";
  const char *cp = arr;
  printf("Size of arr %lu\n", (int)sizeof(arr));
  printf("Size of *cp %lu\n", (int)sizeof(*cp));

  return 0;
}
