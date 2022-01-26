#include <cstdio>

int step_function(int x){
  if (x < 0){
    return -1;
  }
  else if (x > 0){
    return 1;
  }
  return 0;
}

int main (void){
  int x = step_function(10);
  int y = step_function(-20);
  int z = step_function(0);

  printf("%d %d %d", x, y, z);
}
