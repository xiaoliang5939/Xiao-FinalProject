import processing.serial.*;

Serial myPort; // 串口对象

int fillColor = color(255, 113, 113); // 初始颜色˚
int value = 0; // 从串口接收到的值
int value2 = 0; // 上一次接收到的值

void setup() {
  myPort = new Serial(this,"/dev/cu.usbmodem142201", 9600); // 设置串口号和波特率
  size(1280, 720, OPENGL); // 设置窗口大小
}

void draw() {
  background(255);
  strokeWeight(2);
  stroke(fillColor); // 使用当前颜色
  fill(fillColor, 64);
  
  // 迭代生成带半径不停变化的圆
  for (int i = 0; i < 299; i = i + 45) {
    int vertexCount = int(map(i, 0, 299, 40, 100));
    // 圆上点的个数随着半径不同而不同
    mPolygon(width / 2, height / 2, vertexCount, i, i / 10); // 调用绘制多边形的函数
  }
}

void mPolygon(int x, int y, int numOfVertex, int br, int rOff) {
  beginShape();
  for (int i = 0; i < numOfVertex; i++) {
    float pingPong = sin(radians(millis() / 6.0 + 20 * i));
    float r = br + map(pingPong, -1, 1, -rOff, rOff); // 根据sin函数的值计算当前半径
    vertex(x + cos(radians(i * 360 / numOfVertex)) * r, y + sin(radians(i * 360 / numOfVertex)) * r); // 根据计算出的半径和角度绘制顶点
  }
  endShape(CLOSE);
}

void serialEvent(Serial myPort) { // 当串口接收到数据时触发
  if (myPort.available() >= 0) {
    value = myPort.read() - '0'; // 将接收到的ASCII码转换为整数
    if (value2 != value) {
      changeColor(value); // 根据接收到的值改变颜色
      value2 = value;
    }
  }
}
void changeColor(int index) {
  switch(index) {
    case 0:
      fillColor = color(255, 113, 113); // 红色
      break;
    case 1:
      fillColor = color(113, 255, 113); // 绿色
      break;
    case 2:
      fillColor = color(113, 113, 255); // 蓝色
      break;
    default:
      fillColor = color(255, 113, 113); // 默认为红色
      break;
  }
}
