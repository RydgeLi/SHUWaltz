#include "Util.h"
void test()
{
    /*
       һ���Ƶ���Poker
       ���ֹ��캯��
       Poker a(ace,spade);
        Poker a(12);
{spade, heart,  diamond,club};
{deuce,trey,four,five,six,seven,eight,
 nine,ten,jack,queen,king,ace};
    */
    Poker a(jack,diamond);
    Poker b(nine,spade);
/*
   ������ HandCards
   ��Ա������
       add(Poker) ����˿���
       GetClass() ��������
       GetUnique() ����ǰ����
       GetDistinct() ���������
*/
    HandCards t;
    t.add(a);
    t.add(b);
    //����7���ƽ��з���
    Result res = t.Analyze(7);
    //�������
    res.Calc();
    //��ʾ���
    res.show();
}
void test2(){
  for(int i=0;i<13*4-1;++i){
    for(int j=i+1;j<13*4-1;++j){
      HandCards t;
      t.add(Poker(i));
      t.add(Poker(j));
      Result res = t.Analyze(7);
      //�������
      res.Calc();
      //��ʾ���
      res.show();
    }
  }
}
int main()
{
   freopen("in.txt","w",stdout);
   test2();
}
