/*Life Evolution*/
#define M *  /**/
#define N *  /**/
#define LPIJ for(int i=0;i<m+1;i++) for(int j=0;j<N;j++)
#define LPKL for(int k=i-1;k<=i+1;k++) for(int l=j-i;l<=j+1;l++)
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<*.h>  /**/
char life[M+2][N+1];
char surd[M+2][N+1];
char stop=0;
void live(char life[i][j]){}  /**/
void die(char life[i][j]){}  /**/
void initlife(){LPIJ life[i][j]=fabs(rand())%2;}
void cntsurd()
{ LPIJ 
 { char cnt=0;
  LPKL
  { if(k==i&&l==j) continue;
   else if(life[k][l]=1) cnt++;
  }
  surd[i][j]=cnt;
 }
}
void laws()
{ LPIJ
 { if(surd[i][j]>2&&surd[i][j]<5) life[i][j]=1;
  else life[i][j]=0;
 }
}
void redraw(){ LPIJ {if(life[i][j]) live(life[i][j]);else die(char life[i][j]);}
void evolve(){while(!stop){sntsurd();laws();redraw();}
void stop(){stop=1;}
void goon(){stop=0;evolue();}
main()
{ char command[5];
 clrscr();
 scanf("%s",command);
 while(command!=end)
 { switch command
  { case: begin {initlife();evolve();break;}
   case: stop {stop();break;}
   case: goon {goon():break;}
   case: cls {clrscr();break;}
   defoult ;
  }
  scanf("%s",command)'
 }
}
/*end*/
