#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<string.h>
#include <termios.h>
#include <unistd.h>

int QNO;//单词数
char**cptr;//指向中文
char**eptr;//指向英文
int score=0;
int highscore=0;

void got0xy(int x,int y);
void start();                   //游戏开始界面
void run();                     //开始练习
void File_in();                 //存储历史最高分
void File_out();                //读取历史最高分
void endgame();                 //游戏结束界面
void choose();                  //显示是否继续游戏分支选项
void Lost();                    //游戏结束界面
void rule();                    //显示积分规则
int getch(void);                //按键反馈
int read();                     //读取文件
int make(int c[],int n);        //生成4个选项并且返回正确答案的下标
void print(const int c[],int sw);//显示4个答案选项