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


int main()
{


   test();

}
