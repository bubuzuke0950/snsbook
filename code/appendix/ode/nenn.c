#include<stdio.h>

int main (void)
{
  double t = 0; // 時刻
  double x = 0; // 位置
  double v = 10; // 速度
  double a = 0; //加速度
  double r = 0.1; // 粘性抵抗/質量
  double dt = 1.0; // 時間の刻み幅: 1秒ずつ進める

  while ( t < 200.0 ) { // 10 秒間繰り返し

    printf ( "%f %f\n", t, v); // 今の時刻と速度を表示

    x = x + v * dt; // 次の時刻の位置を計算
    v = v + a * dt; // 次の時刻の速度を計算
    a = -r * v; //次の時刻の加速度を計算
    t = t + dt; // 時間をdt秒進める
  }
}
