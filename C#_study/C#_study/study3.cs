using System;
using System.Xml.Schema;
using static System.Console;

namespace study3
{
    //class test{
    //var i = 1;(X)
    //
    //}
    class test
    {
        int a = 1;
    }
    class study3
    {
        static void Main(string[] args)
        {
            int a=1;
            int? b=1;
            a = (int)b;
            WriteLine(b);
            var c = 1;
            //c = "gf"; (X)
            object obj = 10;
            var d = obj;
            d = a;
            int? @int;
            //if (@int.HasValue)(X 할당X)
            //{

            //}
            //string str = null; 암시적 cast
            string? nstr = null;
            var nvar = nstr?.ToLower();//nullable 참조멤버 안전접근
            string sstr = nstr ?? "default";//null일시 기본값 지정
            //var nullvar = null; ???

            string? name = null;

            // 전통적인 방법
            if (name == null)
            {
                name = "Default Name";
            }

            // ??= operator 이용
            name ??= "Default Name";

           
            // 다음 코드를 보자.
            //var p = man; class man
            //if (p != null)
            //{
            //    //var result１ = man.Name;
            //}
            //else
            //{
            //    //var result１ = null;
            //}

            // 위 코드를 다음과 같이 표현할 수 있다.
            //var result = man?.Name;//null일 시 접근X->null반환

            // Nullable 정수를 정의하고 null 값을 할당한다.
            int? nullableInt = null;

            // NullableInt가 null일 경우 기본값으로 10을 제공하기 위해 null 병합 연산자를 사용한다.
            int result2 = nullableInt ?? 10;//삼항도 가능 but 삼항은 boolean을 포함한  더 넓은 범위

            Console.WriteLine(result2);  // 출력: 10

            string? name1 = null;

            // 전통적인 방법
            if (name1 == null)
            {
                name1 = "Default Name";
            }

            // ??= operator 이용 null이면 값 대입 아니면 X
            name1 ??= "Default Name";

            // Suppose this method might return null, but due to program logic, it won't here.
            //string? nullableString = GetAString();

            // The compiler warns about possible null dereference.
            //Console.WriteLine(nullableString.Length);

            // Using the null-forgiving operator to assert the value isn't null.
            //Console.WriteLine(nullableString!.Length); // No warning


            string? nullableString= ReadLine();
            WriteLine(nullableString.Length);
            WriteLine(nullableString!.Length);
        }
    }
}
