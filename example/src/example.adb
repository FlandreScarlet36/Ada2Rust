with Ada.Text_IO; use Ada.Text_IO;

procedure Array_Example is
   -- 声明一个包含5个整数的数组类型
   Num1 : Integer;
   type Int_Array is array (1 .. 5) of Integer;
   Num2 : Integer;
   type Int_Array2 is array (1 .. 5) of Integer;

    A : Integer := 12;
    B : Integer := 34;
   
   -- 声明一个数组变量
   Arr1 : Int_Array := (1, 2, 3, 4, 5);
begin
   Put ("Array Example");

end Array_Example;