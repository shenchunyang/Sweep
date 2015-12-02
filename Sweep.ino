
/* Sweep
 by BARRAGAN <http://barraganstudio.com>
 This example code is in the public domain.

 modified 8 Nov 2013
 by Scott Fitzgerald
 http://www.arduino.cc/en/Tutorial/Sweep
*/

#include <Servo.h>

Servo myservo;  // 定义一个伺服电机对象
// twelve servo objects can be created on most boards

int pos = 0;    // 初始化舵机旋转角度/位置为零

void setup() {
  myservo.attach(9);  // 利用9接口为舵机的接口
}

void loop() {
  for (pos = 0; pos <= 180; pos += 10) { //舵机的转动范围在0度~180度,速度为10度/150ms
    myservo.write(pos);              // write()为设定舵机旋转角度的函数,执行pos值
    delay(150);                       // 转动一次延时150ms
  }
  for (pos = 180; pos >= 0; pos -= 10) { 
    myservo.write(pos);              
    delay(150);                       
  }
}



