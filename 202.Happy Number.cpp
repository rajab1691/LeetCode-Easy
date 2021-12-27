/*
   1.Any chain that arrives at 1 or 89 will become stuck in an endless loop.
   2.EVERY starting number will eventually arrive at 1 or 89
*/
int sumOfSq(int n) {

  int sum = 0;
  while (n > 0) {
    sum = sum + (n % 10) * (n % 10);
    n /= 10;
  }
  return sum;
}
bool isHappy(int n) {

  int temp = n;

  while (1) {
    if (temp == 1) {
      return true;
    }
    if (temp == 89) {
      return false;
    }
    temp = sumOfSq(temp);
  }
}
