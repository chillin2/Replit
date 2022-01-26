#include <iostream>

int main(void)
{
  int n = 1260;
  int coin_cnt = 0;
  int coin_tbl[4] = {500, 100, 50, 10};

  for(int i=0; i<4; i++)
  {
    coin_cnt += n / coin_tbl[i];
    n = n % coin_tbl[i];
  }
  std::cout << coin_cnt << std::endl;

  return 0;
}