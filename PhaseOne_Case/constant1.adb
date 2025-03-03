with Ada.Text_IO; use Ada.Text_IO;

procedure Constant_Example is
   -- 定义常量
   Length : constant Integer := 10;
   Width : constant Integer := 5;
   Area : Integer;
begin
   -- 计算矩形的面积
   Area := Length * Width;
   -- 输出结果
   Put_Line("The area of the rectangle is: " & Integer'Image(Area));
end Constant_Example;