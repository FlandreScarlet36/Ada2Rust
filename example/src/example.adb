with Ada.Text_IO; use Ada.Text_IO;

procedure Array_Example is
   -- 声明一个包含5个整数的数组类型
   type Int_Array is array (1 .. 5) of Integer;

   -- 声明一个数组变量并初始化
   My_Array : Int_Array := (1, 2, 3, 4, 5);

begin
   -- 遍历数组并输出每个元素
   for I in 1..5 loop
      Put_Line(Integer'Image(My_Array(I)));
   end loop;
end Array_Example;