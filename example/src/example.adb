with Ada.Text_IO; use Ada.Text_IO;

procedure Array_Example is
   -- 声明一个包含5个整数的数组类型
   type Int_Array is array (6 .. 10) of Integer;
   type Int_Array2 is array (1 .. 5) of Integer;
   
   -- 声明一个数组变量
   New_Array : Int_Array := (1, 2, 3, 4, 5);
begin
   Put ("Array Example"&"aaa"&"bbb"&"ccc");

end Array_Example;
