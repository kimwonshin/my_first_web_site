//using System;
//using static System.Console;

//namespace study1{
//    class MainApp
//    {
//        static void Main(string[] args)
//        {
//            System.Console.Write("Hello ");
//            Console.WriteLine("World!");
//        }
//    }
//}

//35p 1.
//using System;
//namespace study1
//{
//    class MainApp
//    {
//        static void Main(string[] args)
//        {
//            Console.WriteLine("여러분, 안녕하세요?");
//            Console.WriteLine("반갑습니다!");
//        }
//    }
//}

//2.
//using System;

//class MainApp
//{
//    static void Main(string[] args)
//    {
//        Console.WriteLine("Hello World!");
//    }
//}
using System;

class MainApp
{
    static void Main(string[] args)
    {
        byte a = 255;
        sbyte b = (sbyte)a;

        Console.WriteLine(b);

        uint c = uint.MaxValue;
        c++;
        Console.WriteLine(c);

        int d = int.MaxValue;
        d++;
        Console.WriteLine(d); 
    }
}