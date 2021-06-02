class Solution {
 public:
  bool isPerfectSquare(int num) {
    if (num == 0) {
      return true;
    }
    long ans = num;
    while (ans * ans > num) {
      ans = (ans + num / ans) / 2;
    }
    // now ans = sqrt(num)
    if (ans * ans == num) {
      return true;
    }
    return false;
  }
  bool judgeSquareSum(int c) {
    if (isPerfectSquare(c)) {
      return true;
    }
    for (int b = 1; b <= floor(sqrt(c / 2)); b++) {
      if (isPerfectSquare(c - b * b)) {
        return true;
      }
    }
    return false;
  }
};
