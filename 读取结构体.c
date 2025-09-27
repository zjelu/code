#include <stdio.h> 
struct point {
int x;
int y; 
}; 
struct point getStruct(void);
void output(struct point);

void main() {
struct point y = {0, 0};
y=getStruct();
output(y); 
}
struct point getStruct(void ) 
{
struct point p;
scanf("%d", &p.x);
scanf("%d", &p.y);
printf("%d, %d", p.x, p.y); 
return p;
}
void output(struct point p)
{
  pritnf("%d,%d",p.x,p.y);
}
