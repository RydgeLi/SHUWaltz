#include "Util.h"



void test()
{
    /*
       һ���Ƶ���Poker
       ���ֹ��캯��
       Poker a(ace,spade);
        Poker a(12);
    */
    Poker a(ace,club);
    Poker b(11);
    Poker c(10);
    Poker d(8);
    Poker e(9);

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
    t.add(c);
    t.add(d);
    t.add(e);

    cout<<t.GetClass()<<endl;
     cout<<t.GetUnique()<<endl;
     cout<<t.GetDistinct()<<endl;
}


int main()
{


   test();

}
