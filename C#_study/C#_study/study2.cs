using System;
using System.Data;
using System.Runtime.InteropServices;
using static System.Console;

class study2
{
    enum tenum : int{ a, b, c }
    static void Main(string[] args)
    {

        double a = 10.1;
        float b = (float)a;
        WriteLine(b);
        double c = b;//double이 더 큰 범위여서 암시적 가능 but 값 달라짐
        WriteLine(c);
        object o = 10;
        int i = (int)o;
        byte uB = 255;
        sbyte B = (sbyte)uB;
        WriteLine(B);
        B = (sbyte)a;
        WriteLine(B);
        float under_test = 0.0000_0000_0000_0001f;
        float under_test2 = 0.0000_0000_0000_0001f;
        float under_test3 = under_test * under_test2;
        WriteLine(under_test3);
        //arithmetic underflow calculrate
        float test = 1f;
        for(; test>0; test = test / 2)
        {
            WriteLine(test);
        }
        WriteLine(test);

        string str = "hello";
        //int integer = (int)str; 불가능, 같은 타입류 + object 언박싱만(숫자 형식은 숫자형식만) 가능
        object obstr = str;
        str = (string)obstr;
        obstr = under_test;

        int iToS = 12345;
        iToS.ToString();
        string sToI = "12345";
        iToS = int.Parse(sToI);//parse는 숫자형식의 메서드
        bool bToS=true;
        string buf = bToS.ToString();//tostring은 object메서드, 즉 모든 형식이 사용 가능
        WriteLine(buf);
        bToS = bool.Parse("false");//근데 bool도 되네..;;
        WriteLine(bToS);
        object tobj=1;
        string tstr=tobj.ToString();//null은 string에선 X?
        WriteLine(tstr);

        const string constr = "상수";
        const int MAX_INT = int.MaxValue;
        const int MIN_INT = int.MinValue;

        WriteLine(MAX_INT);
        WriteLine(MIN_INT);

        WriteLine(tenum.a);
        WriteLine((int)tenum.b);
        WriteLine((byte)tenum.c);

        //const object cobj = 10; 참조형식 상수는 뭐노

        tenum obj = tenum.a;
        //obj.b; 객체는 값 하나만 가짐
        int? nulint = null;
        if (nulint.HasValue)
        {

        }
        string? nulref = null;
        nulref = "aa";
        const string constr1 = "aab";
        const object conobj = null;
        tenum? te = null; 
        
    }
}
//c++
//enum a {e1, e2, e3,};
//a::e1;
//a A = a::e1;
//A.e2 (X)
//객체 크기는 int정도로 enum모든 값 저장 가능
//정수로 평가->출력 가능
//enum으로 입력 불가, 정수로 받은 후 캐스팅
//암시적 캐스팅 불가

//class C
//{
//public:
//static void print(){cout << "testing" << endl;}
//};
//정적 멤버변수:클래스 정적 멤버 알려주려고 type class::name = value; 해야함
//정적 변수: 스코프는 그 블록 안, 메모리는 스택 아니라 데이터->삭제X
//main(){ C::print(); C Cobj; Cobj.print();  }

//C#
//enum
//;(X)
//::(X)->.
//enum name : type
//[Flags] -> | & 가능

//C++
//::
//inner class
//namespace
//static member
//enum

//nullable
//?

//var