with Ada.Text_IO; use Ada.Text_IO;

procedure Constant_Example is
   -- 定义常量
   Pi : constant Float := 3.14159;
   Radius : constant Float := 5.0;
   Area : Float;
begin
   -- 计算圆的面积
   Area := Pi * Radius * Radius;
   -- 输出结果
   Put_Line("The area of the circle is: " & Float'Image(Area));
end Constant_Example;